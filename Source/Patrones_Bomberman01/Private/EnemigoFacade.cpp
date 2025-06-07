// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFacade.h"

// Sets default values
AEnemigoFacade::AEnemigoFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

void AEnemigoFacade::AgregarEnemigo(AEnemigo* enemigo)
{
	// Verifica si el enemigo no es nulo antes de agregarlo
	if (enemigo)
	{
		Enemigos.Add(enemigo);//Añade todos los enemigos
	}
}

void AEnemigoFacade::CantDeEnemigos(TSubclassOf<AEnemigo> ClaseEnemigo, int32 Cantidad, FVector PosInicial, float Espaciado, float Distancia, float Velocidad, EDireccionMovimiento Direccion)
{
	UWorld* Mundo = GetWorld();
	if (!Mundo || !*ClaseEnemigo) return;

	for (int32 i = 0; i < Cantidad; ++i)
	{
		FVector Pos = PosInicial + FVector(Espaciado * i, 0.f, 0.f);  // Puedes variar eje según tipo de enemigo
		FActorSpawnParameters Params;
		AEnemigo* Nuevo = Mundo->SpawnActor<AEnemigo>(ClaseEnemigo, Pos, FRotator::ZeroRotator, Params);
		if (Nuevo)
		{
			Nuevo->ConfigurarMovimiento(Pos, Distancia, Velocidad, Direccion);
		}
	}
}

void AEnemigoFacade::Nivel1()
{
	FVector PosInicial = GetActorLocation();
	
	CantDeEnemigos(AEnemigoTerrestre::StaticClass(), 3, PosInicial + FVector(0.f, 0.f, 0.f), 200.f, 1000.f, 10.f, EDireccionMovimiento::MoverX);
	CantDeEnemigos(AEnemigoTerrestre2::StaticClass(), 3, PosInicial + FVector(0.f, 0.f, 0.f), 200.f, 1000.f, 10.f, EDireccionMovimiento::MoverY);
	CantDeEnemigos(AEnemigoAereo::StaticClass(), 3, PosInicial + FVector(0.f, 0.f, 300.f), 200.f, 1000.f, 10.f, EDireccionMovimiento::MoverX_ElevarZ);

	for (AEnemigo* enemigo : Enemigos)
	{
		if (enemigo)
		{
			enemigo->Patrullar();
		}
	}
}
//CantDeEnemigos(TSubclassOf<AEnemigo> ClaseEnemigo, int32 Cantidad, FVector PosInicial, float Espaciado, float Distancia, float Velocidad, EDireccionMovimiento Direccion)
void AEnemigoFacade::Nivel2()
{
	FVector PosInicial = GetActorLocation();
	
	CantDeEnemigos(AEnemigoTerrestre::StaticClass(), 3, PosInicial + FVector(0.f, 0.f, 0.f), 200.f, 1000.f, 100.f, EDireccionMovimiento::MoverX);
	CantDeEnemigos(AEnemigoTerrestre2::StaticClass(), 6, PosInicial + FVector(0.f, 0.f, 0.f), 200.f, 1000.f, 100.f, EDireccionMovimiento::MoverY);
	CantDeEnemigos(AEnemigoAereo::StaticClass(), 3, PosInicial + FVector(0.f, 0.f, 300.f), 200.f, 1000.f, 100.f, EDireccionMovimiento::MoverX_ElevarZ);

	for (AEnemigo* enemigo : Enemigos)
	{
		if (enemigo)
		{
			enemigo->Atacar();
		}
	}
}
