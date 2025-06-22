// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "IMovimientoEstrategia.h"
#include "MovimientoAtaque.generated.h"


UCLASS()
class PATRONES_BOMBERMAN01_API UMovimientoAtaque : public UObject, public IIMovimientoEstrategia
{
	GENERATED_BODY()
	
public:	

	virtual void EjecutarMovimiento(AEnemigo* Enemigo) override;
};
