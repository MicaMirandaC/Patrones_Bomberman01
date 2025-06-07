// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "EnemigoTerrestre.h"
#include "EnemigoTerrestre2.h"
#include "EnemigoAereo.h"
#include "Enemigo.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemigoFacade.generated.h"

UCLASS()//ES MI FACADA ESTE ACTOR
class PATRONES_BOMBERMAN01_API AEnemigoFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigoFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	TArray<AEnemigo*> Enemigos;

	//Funciones para gestionar a los enemigos
	void AgregarEnemigo(AEnemigo* enemigo);
	void CantDeEnemigos(TSubclassOf<AEnemigo> ClaseEnemigo, int32 Cantidad, FVector PosInicial, float Espaciado, float Distancia, float Velocidad, EDireccionMovimiento Direccion);

	//Funciones generales
	void Nivel1();//Patrullar
	void Nivel2();//Atacar

};