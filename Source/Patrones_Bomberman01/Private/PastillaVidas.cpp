// Fill out your copyright notice in the Description page of Project Settings.


#include "PastillaVidas.h"

APastillaVidas::APastillaVidas()
{
	PrimaryActorTick.bCanEverTick = true;

	if (MallaPastilla) //Verifica si la maya existe
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'"));

		if (MaterialBase.Succeeded())
		{
			//Asigna el material
			MallaPastilla->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}
}

void APastillaVidas::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}


void APastillaVidas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Avanzar(DeltaTime);
}

void APastillaVidas::Avanzar(float DeltaTime)
{
	FVector Pos = GetActorLocation();
	float Movimiento = Velocidad * DeltaTime;

	if (bSubiendo)
		Pos.Z += Movimiento;
	else
		Pos.Z -= Movimiento;

	SetActorLocation(Pos);

	if (FMath::Abs(Pos.Z - PosicionInicial.Z) >= DistanciaMaxima)
		bSubiendo = !bSubiendo;
}
