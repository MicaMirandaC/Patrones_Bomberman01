// Fill out your copyright notice in the Description page of Project Settings.


#include "PastillaBase.h"

// Sets default values
APastillaBase::APastillaBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Representa la malla del bloque
	MallaPastilla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	//Adjunta la malla al componente
	MallaPastilla->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaEnemigo(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));

	if (ObjetoMallaEnemigo.Succeeded())
	{
		//Cargar la malla del bloque
		MallaPastilla->SetStaticMesh(ObjetoMallaEnemigo.Object);
			 
		MallaPastilla->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

}

// Called when the game starts or when spawned
void APastillaBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APastillaBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

