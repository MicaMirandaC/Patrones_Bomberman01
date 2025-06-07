// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoBuilder.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "BloqueMov.h"
#include "BloqueRotador.h"
#include "Obstaculo.h"
#include "Puerta.h"
#include "Laberinto.h"

// Sets default values
ALaberintoBuilder::ALaberintoBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Agregar tipos de bloques al mapa
	// MBo tipo clase de bloque
	MapaBloques.Add(1, ABloqueMadera::StaticClass());
	MapaBloques.Add(2, ABloqueConcreto::StaticClass());
	MapaBloques.Add(3, ABloqueLadrillo::StaticClass());
	MapaBloques.Add(4, ABloqueAcero::StaticClass());
	MapaBloques.Add(5, ABloqueRotador::StaticClass());
	//MapaDeBloques.Add(6, ABloqueMov::StaticClass());


	MapaObstaculos.Add(7, AObstaculo::StaticClass());

	MapaPuertas.Add(8, APuerta::StaticClass());

}

// Called when the game starts or when spawned
void ALaberintoBuilder::BeginPlay()
{
	Super::BeginPlay();
	//Crea una instancia del laberinto
	Laberinto = GetWorld()->SpawnActor<ALaberinto>(ALaberinto::StaticClass());
	
}

// Called every frame
void ALaberintoBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberintoBuilder::ConstruirMuros()
{
	if (!Laberinto) return;
	for (int32 i = 0; i < Laberinto->aMapaBloques.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaBloques[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaBloques[i][j];
			//Para verificar si un objeto, valor o clave está presente dentro de una colección
			if (Tipo == 4 && MapaBloques.Contains(Tipo))
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaBloques[Tipo], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoBuilder::ConstruirBloques()
{
	if (!Laberinto) return;

	for (int32 i = 0; i < Laberinto->aMapaBloques.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaBloques[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaBloques[i][j];
			if (Tipo != 0 && Tipo != 4 && Tipo != 7 && Tipo != 8)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaBloques[Tipo], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoBuilder::ConstruirPuertas()
{
	if (!Laberinto) return;

	for (int32 i = 0; i < Laberinto->aMapaPuertas.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaPuertas[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaPuertas[i][j];

			if (Tipo == 8 && Tipo != 0)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaPuertas[8], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberintoBuilder::ConstruirObstaculos()
{
	if (!Laberinto) return;

	for (int32 i = 0; i < Laberinto->aMapaObstaculos.Num(); i++)
	{
		for (int32 j = 0; j < Laberinto->aMapaObstaculos[i].Num(); j++)
		{
			int32 Tipo = Laberinto->aMapaObstaculos[i][j];

			if (Tipo == 7 && Tipo != 0)
			{
				FVector Posicion(Laberinto->XInicial + i * 100, Laberinto->YInicial + j * 100, Laberinto->ZInicial);
				GetWorld()->SpawnActor<AActor>(MapaObstaculos[7], Posicion, FRotator::ZeroRotator);
			}
		}
	}
}

ALaberinto* ALaberintoBuilder::GetLaberinto()
{
	return Laberinto;
}