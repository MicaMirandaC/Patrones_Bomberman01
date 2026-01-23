// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "ISuscriptor.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculo_Observer.generated.h"

UCLASS()
class PATRONES_BOMBERMAN01_API AObstaculo_Observer : public AActor, public IISuscriptor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstaculo_Observer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//La Moneda de este suscriptor
	UPROPERTY()
	class AMoneda_Trampa* MonedaTrampa;


private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

public:

	//Estableciendo la moneda para este suscriptor
	void EstablecerMoneda(AMoneda_Trampa* _Moneda);

	virtual void Update(class ANotificador* Publisher) override;
	
	// Movimiento
	FVector PosicionInicial;
	FVector PosicionObjetivo;
	float TiempoEntreMovimientos = 5.0f;
	float TiempoDesdeUltimoMovimiento = 0.0f;
	float VelocidadMovimiento = 200.0f;
	bool bMoviendoAObjetivo = false;
	FString UltimoEje;

	void ElegirNuevaDireccion();

	//Cuando se destruye este suscriptor, se cancela su suscripción a la torre del reloj.
	virtual void Destroyed() override;
};