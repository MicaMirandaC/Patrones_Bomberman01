// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "MovimientoAleatorio.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemigoTerrestre.h"
#include "EnemigoTerrestre2.h"
#include "EnemigoAereo.h"
#include "Enemigo.h"
#include "MovimientoAtaque.h"
#include "MovimientoPatrulla.h"
#include "EnemigoFacade.generated.h"

UCLASS()//ES MI FACADA ESTE ACTOR
class PATRONES_BOMBERMAN01_API AEnemigoFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemigoFacade();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;


//FINAL:
public:
	//Metodos principales
	void Nivel1();//Patrullar(menos velocidad)
	void Nivel2();//Atacar(mayor velocidad)
	//DESAFIO
	void Nivel3();//Movimiento Aleatorio 

public:
	// Estrategias
	UPROPERTY()
	UMovimientoPatrulla* EstrategiaPatrulla;

	UPROPERTY()
	UMovimientoAtaque* EstrategiaAtaque;

	UPROPERTY()
	UMovimientoAleatorio* EstrategiaAleatoria;

	// Enemigos base (uno por tipo)
	UPROPERTY() AEnemigo* BaseTerrestre;
	UPROPERTY() AEnemigo* BaseTerrestre2;
	UPROPERTY() AEnemigo* BaseAereo;
	

	// Métodos auxiliares
	//Recuerda: TScriptInterface<IIMovimientoEstrategia> permite pasar cualquier objeto UObject que implemente tu interfaz, como UMovimientoPatrulla o UMovimientoAtaque, sin necesidad de otra clase base.
	void InicializarBases(TScriptInterface<IIMovimientoEstrategia> Estrategia); // ? Interfaz que ya usas en todo
	void ClonarEnemigos();
};