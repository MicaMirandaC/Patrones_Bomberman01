// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PastillaBase.h"
#include "PastillaPuntaje.generated.h"

/**
 * 
 */
UCLASS()
class PATRONES_BOMBERMAN01_API APastillaPuntaje : public APastillaBase
{
	GENERATED_BODY()
	
public:
	APastillaPuntaje();

	virtual void Tick(float DeltaTime) override;

	virtual void Avanzar(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:
	FVector PosicionInicial;
	float DistanciaMaxima = 2000.0f;
	float Velocidad = 100.0f;
	bool bAvanzando = true;
};
