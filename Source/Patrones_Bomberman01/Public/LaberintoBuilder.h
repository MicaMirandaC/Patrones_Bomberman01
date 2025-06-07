// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "ILaberinto.h"
#include "Laberinto.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaberintoBuilder.generated.h"

UCLASS()
class PATRONES_BOMBERMAN01_API ALaberintoBuilder : public AActor, public IILaberinto
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberintoBuilder();

private:
	//Es un puntero a un objeto de la clase ALaberinto
	class ALaberinto* Laberinto;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Constructor de laberinto

	void ConstruirBloques() override;
	void ConstruirPuertas() override;
	void ConstruirObstaculos() override;
	void ConstruirMuros() override;
	virtual class ALaberinto* GetLaberinto() override;

	//TMap: Asocia los numeros enteros con las subclases derivadas de actor
	// Mapeos para cada tipo
	//Esto tiene que estar aqui porque como este construye necesita saber que tipo de bloque es
	TMap<int32, TSubclassOf<AActor>> MapaBloques;
	TMap<int32, TSubclassOf<AActor>> MapaPuertas;
	TMap<int32, TSubclassOf<AActor>> MapaObstaculos;
};
