// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "IPrototype.h" 
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IMovimientoEstrategia.h"
#include "Enemigo.generated.h"
UENUM()//Enum es enumeracion que define los tipos de movimiento que puede tener un enemigo.
enum class EDireccionMovimiento : uint8
{
	MoverX, MoverY, ElevarZ, MoverX_ElevarZ
};
UCLASS()
class PATRONES_BOMBERMAN01_API AEnemigo : public AActor, public IIPrototype
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaEnemigo;

public:
	// Métodos públicos para que el Facade pueda controlar el comportamiento
	//Funcions de POLIMIRFISMO en vez de tareas
	// Métodos que activan estrategia
	//Metodo STRATEGY, ya no seran virtual porque ya las hijas heredan del padre
	void Patrullar();
	void Atacar();
	virtual FString NombreDelEnemigo() PURE_VIRTUAL(AEnemigo::NombreDelEnemigo, return " ";);
	

	// Asigna la estrategia de movimiento (Strategy)
	void EstablecerEstrategia(TScriptInterface<IIMovimientoEstrategia> NuevaEstrategia);

	// Configura parámetros de movimiento generales
	void ConfigurarMovimiento(FVector PosInicial, float Distancia, float Velocidad, EDireccionMovimiento Direccion);


	// Prototype
	virtual AActor* Clonar(FVector NuevaPosicion) override;


	// Getters
	float GetDistancia() const { return DistanciaMaxima; }
	float GetVelocidad() const { return VelocidadMovimiento; }
	EDireccionMovimiento GetDireccion() const { return DireccionMovimientoActual; }


	// Parámetros de movimiento
	FVector PosicionInicial;
	float DistanciaMaxima;
	float VelocidadMovimiento;
	bool bAvanzandoHaciaLimite;
	EDireccionMovimiento DireccionMovimientoActual;



public:
	// Datos de movimiento
	UPROPERTY(EditAnywhere)
	FVector PosicionInicial;

	UPROPERTY(EditAnywhere)
	float DistanciaMaxima = 200.f;

	UPROPERTY(EditAnywhere)
	bool bAvanzandoHaciaLimite = true;

	UPROPERTY(EditAnywhere)
	EDireccionMovimiento Direccion;

	// Estrategia de movimiento (usando TScriptInterface para evitar puntero UObject directo)
	// Puntero a estrategia de movimiento
	UPROPERTY()
	TScriptInterface<IIMovimientoEstrategia> EstrategiaMovimiento;
};