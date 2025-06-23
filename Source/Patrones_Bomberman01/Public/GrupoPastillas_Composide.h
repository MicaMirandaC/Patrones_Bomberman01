// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PastillaBase.h"
#include "GrupoPastillas_Composide.generated.h"

UCLASS()
class PATRONES_BOMBERMAN01_API AGrupoPastillas_Composide : public APastillaBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrupoPastillas_Composide();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Avanzar(float DeltaTime) override;

	void AgregarPastilla(APastillaBase* Pastilla);

private:
	UPROPERTY()
	TArray<APastillaBase*> Pastillas;
};
