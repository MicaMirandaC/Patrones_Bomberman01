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

	// Spawn del Builder (LaberintoBuilder)
	BuilderLab = GetWorld()->SpawnActor<ALaberintoBuilder>(ALaberintoBuilder::StaticClass());

	// Spawn del Director
	DirectorLab = GetWorld()->SpawnActor<ADirectorLaberinto>(ADirectorLaberinto::StaticClass());

	//Le dices al Director qué Builder va a usar
	DirectorLab->EstablecerILaberintoBuilder(BuilderLab);
	
	// Aqui construís el laberinto usando el patrón
	DirectorLab->ConstruirLaberinto();
	
	//Obtener el laberinto construido por el Director
	ALaberinto* Laberinto = DirectorLab->GetLaberinto();

}