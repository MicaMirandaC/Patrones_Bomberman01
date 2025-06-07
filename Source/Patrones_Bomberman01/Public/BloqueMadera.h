// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueMadera.generated.h"

/**
 * 
 */
UCLASS()
class PATRONES_BOMBERMAN01_API ABloqueMadera : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueMadera();

protected:

	virtual void BeginPlay() override;
};
