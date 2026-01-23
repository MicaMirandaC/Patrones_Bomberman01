// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IMovimientoEstrategia.h"
#include "MovimientoAleatorio.generated.h"

/**
 * 
 */
UCLASS()
class PATRONES_BOMBERMAN01_API UMovimientoAleatorio : public UObject, public IIMovimientoEstrategia
{
	GENERATED_BODY()

public:
	// Implementación del método virtual de la interfaz
	virtual void EjecutarMovimiento(AEnemigo* Enemigo, float DeltaTime) override;
};
