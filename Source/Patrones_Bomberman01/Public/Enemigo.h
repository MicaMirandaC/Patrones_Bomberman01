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
	MoverX, MoverY, ElevarZ, MoverX_ElevarZ, MovAleatorio
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
	// Patrón Prototype
	virtual AActor* Clonar() override;

	// Inicializador personalizado
	void Inicializar(FVector PosicionInicial, float Distancia, EDireccionMovimiento Direccion, TScriptInterface<IIMovimientoEstrategia> Estrategia);

	// Acciones públicas que llama el Facade
	void Patrullar(float DeltaTime);
	void Atacar(float DeltaTime);
	//Permite que el Facade asigne estrategia
	//se usa para manejar interfaces de forma segura y flexible
	void EstablecerEstrategia(TScriptInterface<IIMovimientoEstrategia> NuevaEstrategia);

	// Para que Strategy pueda acceder a info necesaria
	FVector GetPosicionInicial() const { return PosicionInicial; }
	float GetDistanciaMaxima() const { return DistanciaMaxima; }
	bool& GetAvanzando() { return bAvanzandoHaciaLimite; }
	EDireccionMovimiento GetDireccion() const { return Direccion; }
	void SetDireccion(EDireccionMovimiento NuevaDir) { Direccion = NuevaDir; } 
	

	// Marcar si es un clon o el base
	void SetEsBase(bool bEsBase_) { bEsBase = bEsBase_; }
	UPROPERTY()
	bool bEsBase = false; // <- Clave para evitar que el base se mueva


public:
	// Variables internas
	FVector PosicionInicial;
	float DistanciaMaxima;
	bool bAvanzandoHaciaLimite;
	EDireccionMovimiento Direccion;


	// Referencia a la estrategia inyectada
	UPROPERTY()
	TScriptInterface<IIMovimientoEstrategia> EstrategiaMovimiento;
};