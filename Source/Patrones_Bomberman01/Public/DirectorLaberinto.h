// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberinto.h"
#include "DirectorLaberinto.generated.h"

UCLASS()
class PATRONES_BOMBERMAN01_API ADirectorLaberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorLaberinto();

private:
	//El Constructor Actor, que debe ser un ConstructorDeAlojamiento
	IILaberinto* LaberintoBuilder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	//Establecer el Actor Constructor
	void EstablecerILaberintoBuilder(IILaberinto* Builder);
	void ConstruirLaberinto();
	class ALaberinto* GetLaberinto();
};
