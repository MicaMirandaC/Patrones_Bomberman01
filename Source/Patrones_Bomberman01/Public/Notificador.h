// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Notificador.generated.h"

UCLASS()
class PATRONES_BOMBERMAN01_API ANotificador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANotificador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void Subscribir(AActor* Subscriptor);
	virtual void DeSubscribir(AActor* SubscriptorRemover);
	virtual void NotificarSubs();

protected:
	//Los suscriptores de esta editorial 
	UPROPERTY()
	TArray<AActor*> Subscribers;
};
