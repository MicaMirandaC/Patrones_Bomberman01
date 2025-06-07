// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoTerrestre2.generated.h"

/**
 * 
 */
UCLASS()
class PATRONES_BOMBERMAN01_API AEnemigoTerrestre2 : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoTerrestre2();

public:
	virtual void Patrullar() override;
	virtual void Atacar() override;

	virtual FString NombreDelEnemigo() override;

};