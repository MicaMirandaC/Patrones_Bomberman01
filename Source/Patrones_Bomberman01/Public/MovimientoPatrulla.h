// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IMovimientoEstrategia.h"
#include "MovimientoPatrulla.generated.h"

UCLASS()
class PATRONES_BOMBERMAN01_API UMovimientoPatrulla : public UObject, public IIMovimientoEstrategia
{
	GENERATED_BODY()

public:
	// Implementación del método virtual de la interfaz
	virtual void EjecutarMovimiento(AEnemigo* Enemigo) override;

};
