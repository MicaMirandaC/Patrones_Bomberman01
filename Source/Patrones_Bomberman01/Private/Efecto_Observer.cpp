// Fill out your copyright notice in the Description page of Project Settings.


#include "Efecto_Observer.h"
#include "Particles/ParticleSystemComponent.h"
#include "Notificador.h"

// Sets default values
AEfecto_Observer::AEfecto_Observer()
{
    PrimaryActorTick.bCanEverTick = true;

    Particulas = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particulas"));
    RootComponent = Particulas;
    Particulas->bAutoActivate = false;

    static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion"));
    if (ParticleAsset.Succeeded())
    {
        Particulas->SetTemplate(ParticleAsset.Object);
    }
}

// Called when the game starts or when spawned
void AEfecto_Observer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEfecto_Observer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEfecto_Observer::Update(ANotificador* Publisher)
{
    if (!Particulas) return;

    // Posición aleatoria alrededor de la moneda
    FVector Base = Publisher->GetActorLocation();
    float Rango = 300.0f;
    Base.X += FMath::RandRange(-Rango, Rango);
    Base.Y += FMath::RandRange(-Rango, Rango);
    SetActorLocation(Base);

    UE_LOG(LogTemp, Warning, TEXT("Partículas activadas en %s"), *Base.ToString());

    // Activa y reinicia el sistema de partículas
    Particulas->ActivateSystem(true);
}

