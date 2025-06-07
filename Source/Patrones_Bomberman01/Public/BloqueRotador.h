// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueRotador.generated.h"

/**
 * 
 */
UCLASS()
class PATRONES_BOMBERMAN01_API ABloqueRotador : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloqueRotador(); //Contador

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// M�todo llamado cada frame
	virtual void Tick(float DeltaTime) override;

public:
	bool bPuedeGirar;
	float RotationSpeed;
};
