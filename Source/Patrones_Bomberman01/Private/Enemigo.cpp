// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "IMovimientoEstrategia.h"
#include "Engine/World.h"

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
	DistanciaMaxima = 1000.f;
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation(); // Guarda punto de inicio
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (EstrategiaMovimiento)
	{
		EstrategiaMovimiento->EjecutarMovimiento(this, DeltaTime);
	}
}

// Patrón Prototype - clona este enemigo
AActor* AEnemigo::Clonar()
{
	UWorld* Mundo = GetWorld();
	if (!Mundo) return nullptr;

	FActorSpawnParameters Params;
	AEnemigo* Clon = Mundo->SpawnActor<AEnemigo>(GetClass(), GetActorLocation(), GetActorRotation(), Params);

	if (Clon)
	{
		Clon->Inicializar(PosicionInicial, DistanciaMaxima, Direccion, EstrategiaMovimiento);
	}

	return Clon;
}

// Inicializa enemigo después de crear o clonar
void AEnemigo::Inicializar(FVector PosInicial, float Distancia, EDireccionMovimiento DireccionMov, TScriptInterface<IIMovimientoEstrategia> Estrategia)
{
	PosicionInicial = PosInicial;
	SetActorLocation(PosInicial);
	DistanciaMaxima = Distancia;
	Direccion = DireccionMov;
	bAvanzandoHaciaLimite = true;

	EstrategiaMovimiento = Estrategia;
}

// Expone el movimiento para que lo invoque el Facade si hace falta
void AEnemigo::Patrullar(float DeltaTime)
{
	if (EstrategiaMovimiento)
	{
		EstrategiaMovimiento->EjecutarMovimiento(this, DeltaTime);
	}
}

void AEnemigo::Atacar(float DeltaTime)
{
	if (EstrategiaMovimiento)
	{
		EstrategiaMovimiento->EjecutarMovimiento(this, DeltaTime);
	}
}

//Metodo que permite asignar estrategia desde Facade
void AEnemigo::EstablecerEstrategia(TScriptInterface<IIMovimientoEstrategia> NuevaEstrategia)
{
	EstrategiaMovimiento = NuevaEstrategia;
}
