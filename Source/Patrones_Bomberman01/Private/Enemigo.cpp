// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Representa la malla del bloque
	MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	//Adjunta la malla al componente
	MallaEnemigo->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaEnemigo(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

	if (ObjetoMallaEnemigo.Succeeded())
	{
		//Cargar la malla del bloque
		MallaEnemigo->SetStaticMesh(ObjetoMallaEnemigo.Object);

		MallaEnemigo->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

    bAvanzandoHaciaLimite = true;
    DistanciaMaxima = 0.f;
    VelocidadMovimiento = 0.f;
    DireccionMovimientoActual = EDireccionMovimiento::MoverX;
	EstrategiaMovimiento = nullptr;
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigo::ConfigurarMovimiento(FVector PosInicial, float Distancia, float Velocidad, EDireccionMovimiento Direccion)
{
	PosicionInicial = PosInicial;
	DistanciaMaxima = Distancia;
	VelocidadMovimiento = Velocidad;
	DireccionMovimientoActual = Direccion;
	bAvanzandoHaciaLimite = true;
}

void AEnemigo::EstablecerEstrategia(TScriptInterface<IIMovimientoEstrategia> NuevaEstrategia)
{
	EstrategiaMovimiento = NuevaEstrategia;
}


void AEnemigo::Patrullar()
{
   if (EstrategiaMovimiento)
	{
		EstrategiaMovimiento->Execute_EjecutarMovimiento(EstrategiaMovimiento.GetObject(), this, true);
	}
}

void AEnemigo::Atacar()
{
	if (EstrategiaMovimiento)
	{
		EstrategiaMovimiento->Execute_EjecutarMovimiento(EstrategiaMovimiento.GetObject(), this, false);
	}
}

AActor* AEnemigo::Clonar(FVector NuevaPosicion)
{
	UWorld* Mundo = GetWorld();
	if (!Mundo) return nullptr;

	FActorSpawnParameters Params;
	AEnemigo* Clon = Mundo->SpawnActor<AEnemigo>(GetClass(), NuevaPosicion, FRotator::ZeroRotator, Params);

	if (Clon)
	{
		Clon->ConfigurarMovimiento(NuevaPosicion, DistanciaMaxima, VelocidadMovimiento, DireccionMovimientoActual);

		// Copiamos la estrategia al clon
		if (EstrategiaMovimiento)
		{
			UObject* EstrategiaObj = EstrategiaMovimiento.GetObject();
			UObject* Copia = DuplicateObject<UObject>(EstrategiaObj, Clon);

			TScriptInterface<IIMovimientoEstrategia> NuevaEstrategia;
			NuevaEstrategia.SetObject(Copia);
			NuevaEstrategia.SetInterface(Cast<IIMovimientoEstrategia>(Copia));

			Clon->EstablecerEstrategia(NuevaEstrategia);
		}
	}
	return Clon;
}

