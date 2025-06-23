// Fill out your copyright notice in the Description page of Project Settings.


#include "Moneda_Trampa.h"
#include "Kismet/GameplayStatics.h"
#include "Efecto_Observer.h"
#include "Obstaculo_Observer.h"

// Sets default values
AMoneda_Trampa::AMoneda_Trampa()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear el componente de malla
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	// Cargar un mesh por defecto desde el contenido del motor o del juego
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	if (MeshAsset.Succeeded())
	{
		MeshComponent->SetStaticMesh(MeshAsset.Object);

	}
	//para asignar textura
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueAceroMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
	if (ObjetoBloqueAceroMaterial.Succeeded())
	{
		MeshComponent->SetMaterial(0, ObjetoBloqueAceroMaterial.Object);

	}
}

// Called when the game starts or when spawned
void AMoneda_Trampa::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AMoneda_Trampa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Si aún no se encontró el jugador, intentamos buscarlo solo UNA VEZ por frame
	if (!Jugador)
	{
		ACharacter* JugadorTemp = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

		if (JugadorTemp)
		{
			Jugador = JugadorTemp;
			UE_LOG(LogTemp, Warning, TEXT("Jugador encontrado correctamente"));
		}
		else
		{
			// Solo mostramos una vez el mensaje de error
			static bool bMostroError = false;
			if (!bMostroError)
			{
				UE_LOG(LogTemp, Warning, TEXT("No se encontró al jugador. Esperando..."));
				bMostroError = true;
			}
			return;
		}
	}
	ActivarSiJugadorCerca();
}

void AMoneda_Trampa::ActivarSiJugadorCerca()
{
	if (!Jugador || bActivado) return;

	float Dist = FVector::Dist(Jugador->GetActorLocation(), GetActorLocation());
	UE_LOG(LogTemp, Warning, TEXT("Distancia del jugador a la moneda: %f"), Dist);  //Log para ver la distancia en tiempo real

	if (Dist <= DistanciaActivacion)
	{
		bActivado = true;
		MeshComponent->SetVisibility(false);

		UE_LOG(LogTemp, Warning, TEXT("Jugador cerca de la moneda: activando suscriptores"));  //Confirmación

		NotificarSubs();
	}
}