// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IPrototype.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIPrototype : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PATRONES_BOMBERMAN01_API IIPrototype
{
	GENERATED_BODY()

public:
	// Método para clonar el actor
	virtual AActor* Clonar() = 0;

};
