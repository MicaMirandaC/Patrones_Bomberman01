// Copyright Epic Games, Inc. All Rights Reserved.

#include "Patrones_Bomberman01GameMode.h"
#include "Patrones_Bomberman01Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "Laberinto.h"
#include "ILaberinto.h"
#include "DirectorLaberinto.h"
#include "LaberintoBuilder.h"
#include "Moneda_Trampa.h"
#include "Obstaculo_Observer.h"
#include "GrupoPastillas_Composide.h"
#include "PastillaVidas.h"
#include "PastillaPuntaje.h"

APatrones_Bomberman01GameMode::APatrones_Bomberman01GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void APatrones_Bomberman01GameMode::BeginPlay()
{
	Super::BeginPlay();

	 //Spawn del Builder (LaberintoBuilder)
	BuilderLab = GetWorld()->SpawnActor<ALaberintoBuilder>(ALaberintoBuilder::StaticClass());
	
	// Spawn del Director
	DirectorLab = GetWorld()->SpawnActor<ADirectorLaberinto>(ADirectorLaberinto::StaticClass());
	
	//Le dices al Director qué Builder va a usar
	DirectorLab->EstablecerILaberintoBuilder(BuilderLab);
	
	// Aqui construís el laberinto usando el patrón
	DirectorLab->ConstruirLaberinto();
	
	//Obtener el laberinto construido por el Director
	ALaberinto* Laberinto = DirectorLab->GetLaberinto();



	//Facade
	MiFachada = GetWorld()->SpawnActor<AEnemigoFacade>
		(AEnemigoFacade::StaticClass());

	// Escoger aleatoriamente un nivel:
	int Nivel = FMath::RandRange(1, 2);
	switch (Nivel)
	{
	case 1:
		MiFachada->Nivel1();
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Nivel 1 - Patrullar"));
		}
		break;

	case 2:
		MiFachada->Nivel2();
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Nivel 2 - Atacar"));
		}
		break;

	case 3:
		MiFachada->Nivel3();
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Nivel 3 - MovAleatorio"));
		}
		break;
	}

	
	/// OBSERVER

	// Spawn de la moneda trampa
	// Spawnea una Moneda_Trampa en el mapa al iniciar el juego
	FVector PosicionMoneda = FVector(500, 500, 100);
	
	AMoneda_Trampa* MonedaTrampa = GetWorld()->SpawnActor<AMoneda_Trampa>(AMoneda_Trampa::StaticClass(), PosicionMoneda, FRotator::ZeroRotator);

	for (int i = 0; i < 5; ++i){
	FVector Pos = FVector(FMath::RandRange(1000, 2000), FMath::RandRange(1000, 2000), 50);
	AObstaculo_Observer* Obs = GetWorld()->SpawnActor<AObstaculo_Observer>(AObstaculo_Observer::StaticClass(), Pos, FRotator::ZeroRotator);
		if (Obs && MonedaTrampa){
			Obs->EstablecerMoneda(MonedaTrampa); // Esto ya llama a Subscribir()
			Obs->SetActorHiddenInGame(true); // Inicialmente oculto
		}
	}
	//Composide
	// CONFIGURACIÓN DE POSICIÓN DEL GRUPO
	FVector PosicionGrupo = FVector(1000.f, 1000.f, 150.f); // Altura Z = 150 para no chocar con bloques
	float Espaciado = 150.f; // Espaciado entre pastillas
	UWorld* Mundo = GetWorld();

	if (!Mundo) return;

	// CREACIÓN DEL GRUPO COMPOSITE
	AGrupoPastillas_Composide* Grupo = Mundo->SpawnActor<AGrupoPastillas_Composide>(
		AGrupoPastillas_Composide::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);

	if (!Grupo) return;

	// GENERAR 2 PASTILLAS DE VIDAS
	
	for (int i = 0; i < 2; ++i)
	{
		FVector Pos = PosicionGrupo + FVector(0.f, i * Espaciado, 0.f); // Y separado
		APastillaVidas* Vidas = Mundo->SpawnActor<APastillaVidas>(APastillaVidas::StaticClass(), Pos, FRotator::ZeroRotator);
		if (Vidas)
		{
			Grupo->AgregarPastilla(Vidas);
		}
	}

	// GENERAR 2 PASTILLAS DE PUNTAJE

	for (int i = 0; i < 2; ++i)
	{
		FVector Pos = PosicionGrupo + FVector(400.f, i * Espaciado, 0.f); // Separado en X
		APastillaPuntaje* Puntaje = Mundo->SpawnActor<APastillaPuntaje>(APastillaPuntaje::StaticClass(), Pos, FRotator::ZeroRotator);
		if (Puntaje)
		{
			Grupo->AgregarPastilla(Puntaje);
		}
	}
}