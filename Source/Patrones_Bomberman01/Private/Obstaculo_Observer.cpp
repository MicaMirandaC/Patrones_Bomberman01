// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo_Observer.h"
#include "Notificador.h"
#include "Moneda_Trampa.h"
#include "Engine/World.h"

// Sets default values
AObstaculo_Observer::AObstaculo_Observer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		MeshComponent->SetStaticMesh(MeshAsset.Object);
	}
	//Ocultamos el mesh hasta recibir la notificación
	MeshComponent->SetVisibility(false);

	UltimoEje = (FMath::RandBool()) ? "X" : "Z";
}

// Called when the game starts or when spawned
void AObstaculo_Observer::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
	PosicionObjetivo = PosicionInicial;

	// Suscribirse a la moneda si está asignada
	if (MonedaTrampa)
	{
		MonedaTrampa->Subscribir(this);
	}
}

// Called every frame
void AObstaculo_Observer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Super::Tick(DeltaTime);

	if (!bMoviendoAObjetivo)
		return;

	TiempoDesdeUltimoMovimiento += DeltaTime;

	if (TiempoDesdeUltimoMovimiento >= TiempoEntreMovimientos)
	{
		ElegirNuevaDireccion();
		TiempoDesdeUltimoMovimiento = 0.0f;
	}

	FVector PosActual = GetActorLocation();
	FVector NuevaPos = FMath::VInterpTo(PosActual, PosicionObjetivo, DeltaTime, 5.0f);
	SetActorLocation(NuevaPos);

	if (FVector::Dist(NuevaPos, PosicionObjetivo) < 1.0f)
	{
		bMoviendoAObjetivo = false;
	}
}

void AObstaculo_Observer::EstablecerMoneda(AMoneda_Trampa* _Moneda)
{
	if (!_Moneda)
	{
		UE_LOG(LogTemp, Error, TEXT("Obstáculo: _Moneda es NULL"));
		return;
	}
	MonedaTrampa = _Moneda;
	MonedaTrampa->Subscribir(this); //Ahi se suscribe
	UE_LOG(LogTemp, Warning, TEXT("Obstáculo se ha suscrito correctamente a la moneda"));
}

void AObstaculo_Observer::Update(ANotificador* Publisher)
{
	MeshComponent->SetVisibility(true);
	SetActorHiddenInGame(false);

	FVector NuevaPos(FMath::RandRange(0, 1000), FMath::RandRange(0, 1000), 50);
	SetActorLocation(NuevaPos);

	UE_LOG(LogTemp, Warning, TEXT("Obstáculo activado por la moneda. Nueva posición: %s"), *NuevaPos.ToString());
}

void AObstaculo_Observer::ElegirNuevaDireccion()
{
	FVector Offset(0.0f);
	const float Distancia = 100.0f;

	if (UltimoEje == "X")
	{
		UltimoEje = "Z";
		Offset.Z += (FMath::RandBool() ? 1 : -1) * Distancia;
	}
	else
	{
		UltimoEje = "X";
		Offset.X += (FMath::RandBool() ? 1 : -1) * Distancia;
	}

	PosicionObjetivo = GetActorLocation() + Offset;
	bMoviendoAObjetivo = true;
}

void AObstaculo_Observer::Destroyed()
{
	if (MonedaTrampa)
	{
		MonedaTrampa->DeSubscribir(this);
	}
}
