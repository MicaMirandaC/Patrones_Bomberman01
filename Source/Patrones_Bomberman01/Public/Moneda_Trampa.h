// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Notificador.h"
#include "GameFramework/Character.h"
#include "Moneda_Trampa.generated.h"

UCLASS()
class PATRONES_BOMBERMAN01_API AMoneda_Trampa : public ANotificador 
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoneda_Trampa();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;
	
private:
	UPROPERTY()
	ACharacter* Jugador;

	UPROPERTY(EditAnywhere)
	float DistanciaActivacion = 200.0f;

	bool bActivado = false;

	UFUNCTION(BlueprintCallable)
	void ActivarSiJugadorCerca();
};

