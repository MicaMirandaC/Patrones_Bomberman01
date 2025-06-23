// Fill out your copyright notice in the Description page of Project Settings.


#include "PastillaPuntaje.h"

APastillaPuntaje::APastillaPuntaje()
{
	PrimaryActorTick.bCanEverTick = true;

	if (MallaPastilla) //Verifica si la maya existe
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));

		if (MaterialBase.Succeeded())
		{
			//Asigna el material
			MallaPastilla->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}
}

void APastillaPuntaje::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void APastillaPuntaje::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Avanzar(DeltaTime);
}

void APastillaPuntaje::Avanzar(float DeltaTime)
{
	FVector Pos = GetActorLocation();
	float Movimiento = Velocidad * DeltaTime;

	if (bAvanzando)
		Pos.X += Movimiento;
	else
		Pos.X -= Movimiento;

	SetActorLocation(Pos);

	if (FMath::Abs(Pos.X - PosicionInicial.X) >= DistanciaMaxima)
		bAvanzando = !bAvanzando;
}


