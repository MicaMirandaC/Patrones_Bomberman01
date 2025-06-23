// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PastillaBase.h"
#include "PastillaVidas.generated.h"

/**
 * 
 */
UCLASS()
class PATRONES_BOMBERMAN01_API APastillaVidas : public APastillaBase
{
	GENERATED_BODY()
	
public:
	APastillaVidas();

	virtual void Tick(float DeltaTime) override;
	
	virtual void Avanzar(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:
	FVector PosicionInicial;
	float DistanciaMaxima = 200.0f;
	float Velocidad = 80.0f;
	bool bSubiendo = true;
};
