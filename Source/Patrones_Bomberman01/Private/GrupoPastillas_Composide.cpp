// Fill out your copyright notice in the Description page of Project Settings.


#include "GrupoPastillas_Composide.h"

// Sets default values
AGrupoPastillas_Composide::AGrupoPastillas_Composide()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Ocultar o desactivar el mesh heredado
	if (MallaPastilla) // Asumiendo que el nombre del mesh en AEnemigoBase es MeshEnemigo
	{
		MallaPastilla->SetVisibility(false); // No se ve
		MallaPastilla->SetHiddenInGame(true); // No aparece al jugar
		MallaPastilla->SetCollisionEnabled(ECollisionEnabled::NoCollision); // Opcional: sin colisiones
	}
}

// Called when the game starts or when spawned
void AGrupoPastillas_Composide::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGrupoPastillas_Composide::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Avanzar(DeltaTime);

}

void AGrupoPastillas_Composide::Avanzar(float DeltaTime)
{
	for (APastillaBase* Pastilla : Pastillas)
	{
		if (IsValid(Pastilla))
			Pastilla->Avanzar(DeltaTime);
	}
}

void AGrupoPastillas_Composide::AgregarPastilla(APastillaBase* Pastilla)
{
	if (IsValid(Pastilla))
		Pastillas.Add(Pastilla);
}

