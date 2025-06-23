// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "Notificador.h"
#include "ISuscriptor.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h" 
#include "Efecto_Observer.generated.h"
class UParticleSystemComponent;
UCLASS()
class PATRONES_BOMBERMAN01_API AEfecto_Observer : public AActor, public IISuscriptor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEfecto_Observer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Efecto
	UPROPERTY()
	UParticleSystemComponent* Particulas;

public:
	// Método que se llama cuando el Publisher notifica
	virtual void Update(class ANotificador* Publisher) override;
};
