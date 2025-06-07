// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "EnemigoFacade.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Patrones_Bomberman01GameMode.generated.h"
class ABloque;

UCLASS(minimalapi)
class APatrones_Bomberman01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APatrones_Bomberman01GameMode();

public:
	virtual void BeginPlay() override;

private:

	//El actor constructor
	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ADirectorLaberinto* DirectorLab;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ALaberintoBuilder* BuilderLab;

	//Facade
	AEnemigoFacade* MiFachada;
};


