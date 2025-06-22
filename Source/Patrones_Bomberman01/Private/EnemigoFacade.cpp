// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFacade.h"ç
#include "MovimientoPatrulla.h"
#include "MovimientoAtaque.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Sets default values
AEnemigoFacade::AEnemigoFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Asignamos las clases de estrategia
	ClasePatrulla = UMovimientoPatrulla::StaticClass();
	ClaseAtaque = UMovimientoAtaque::StaticClass();
}

// Called when the game starts or when spawned
void AEnemigoFacade::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemigoFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoFacade::Nivel1()
{
	AEnemigo* Base = CrearEnemigoBase(AEnemigo::StaticClass(), FVector(0, 0, 100), 1);
	if (Base)
	{
		ClonarEnemigos(Base, 4, FVector(200, 0, 100), 150);
	}
}

void AEnemigoFacade::Nivel2()
{
	AEnemigo* Base = CrearEnemigoBase(AEnemigo::StaticClass(), FVector(0, 500, 100), 2);
	if (Base)
	{
		ClonarEnemigos(Base, 6, FVector(200, 500, 100), 150);
	}
}

AEnemigo* AEnemigoFacade::CrearEnemigoBase(TSubclassOf<AEnemigo> ClaseEnemigo, const FVector& Posicion, int Nivel)
{
	if (!ClaseEnemigo) return nullptr;

	UWorld* Mundo = GetWorld();
	if (!Mundo) return nullptr;

	AEnemigo* Enemigo = Mundo->SpawnActor<AEnemigo>(ClaseEnemigo, Posicion, FRotator::ZeroRotator);
	if (!Enemigo) return nullptr;

	// Asignar estrategia según el nivel
	UObject* Estrategia = nullptr;
	if (Nivel == 1)
	{
		Estrategia = NewObject<UObject>(this, ClasePatrulla);
	}
	else if (Nivel == 2)
	{
		Estrategia = NewObject<UObject>(this, ClaseAtaque);
	}

	if (Estrategia && Enemigo)
	{
		TScriptInterface<IIMovimientoEstrategia> IEstrategia(Estrategia);
		if (IEstrategia)
		{
			Enemigo->AsignarEstrategiaMovimiento(IEstrategia);
		}
	}

	return Enemigo;
}

void AEnemigoFacade::ClonarEnemigos(AEnemigo* EnemigoBase, int Cantidad, const FVector& OffsetInicial, float Separacion)
{
	if (!EnemigoBase) return;

	UWorld* Mundo = GetWorld();
	if (!Mundo) return;

	for (int i = 0; i < Cantidad; ++i)
	{
		FVector Posicion = OffsetInicial + FVector(i * Separacion, 0, 0);
		AEnemigo* Clon = Mundo->SpawnActor<AEnemigo>(EnemigoBase->GetClass(), Posicion, FRotator::ZeroRotator);
		if (Clon)
		{
			Clon->CopiaParametrosDe(EnemigoBase); // Copia dirección, distancia, velocidad, etc.
		}
	}
}

