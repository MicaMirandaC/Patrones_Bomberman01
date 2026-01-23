// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFacade.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Sets default values
AEnemigoFacade::AEnemigoFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AEnemigoFacade::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemigoFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoFacade::Nivel1()
{
	EstrategiaPatrulla = NewObject<UMovimientoPatrulla>(this);
	InicializarBases(EstrategiaPatrulla);
	ClonarEnemigos();
}

void AEnemigoFacade::Nivel2()
{
	EstrategiaAtaque = NewObject<UMovimientoAtaque>(this);
	InicializarBases(EstrategiaAtaque);
	ClonarEnemigos();
}

void AEnemigoFacade::Nivel3()
{
	EstrategiaAleatoria = NewObject<UMovimientoAleatorio>(this);
	InicializarBases(EstrategiaAleatoria);
	ClonarEnemigos();
}

void AEnemigoFacade::InicializarBases(TScriptInterface<IIMovimientoEstrategia> Estrategia)
{
	UWorld* Mundo = GetWorld();
	if (!Mundo) return;

	// Posiciones iniciales separadas para cada base
	FVector PosBaseTerrestre(0.f, 0.f, 0.f);
	FVector PosBaseTerrestre2(0.f, 300.f, 0.f);
	FVector PosBaseAereo(0.f, 600.f, 200.f); // Elevado en Z para el aéreo

	// === Terrestre Base ===
	BaseTerrestre = Mundo->SpawnActor<AEnemigoTerrestre>(PosBaseTerrestre, FRotator::ZeroRotator);
	BaseTerrestre->Inicializar(PosBaseTerrestre, 500.f, EDireccionMovimiento::MoverX, Estrategia);
	BaseTerrestre->SetEsBase(true);
	//Oculta el enemigo en el juego(no se verá en pantalla).
	BaseTerrestre->SetActorHiddenInGame(true);
	BaseTerrestre->SetActorEnableCollision(false);
	BaseTerrestre->SetActorTickEnabled(false);

	// === Terrestre2 Base ===
	BaseTerrestre2 = Mundo->SpawnActor<AEnemigoTerrestre2>(PosBaseTerrestre2, FRotator::ZeroRotator);
	BaseTerrestre2->Inicializar(PosBaseTerrestre2, 500.f, EDireccionMovimiento::MoverY, Estrategia);
	BaseTerrestre2->SetEsBase(true);
	BaseTerrestre2->SetActorHiddenInGame(true);
	BaseTerrestre2->SetActorEnableCollision(false);
	BaseTerrestre2->SetActorTickEnabled(false);

	// === Aéreo Base ===
	BaseAereo = Mundo->SpawnActor<AEnemigoAereo>(PosBaseAereo, FRotator::ZeroRotator);
	BaseAereo->Inicializar(PosBaseAereo, 500.f, EDireccionMovimiento::MoverX_ElevarZ, Estrategia);
	BaseAereo->SetEsBase(true);
	BaseAereo->SetActorHiddenInGame(true);
	BaseAereo->SetActorEnableCollision(false);
	BaseAereo->SetActorTickEnabled(false);

}

void AEnemigoFacade::ClonarEnemigos()
{
	UWorld* Mundo = GetWorld();
	if (!Mundo) return;

	const float Separacion = 300.f;

	for (int i = 0; i < 3; i++)
	{
		FVector Offset(i * Separacion, 0, 0);

		if (BaseTerrestre)
		{
			AEnemigo* Clon1 = Cast<AEnemigo>(BaseTerrestre->Clonar());
			if (Clon1)
			{
				// Si se mueve en X, desplazar en Y para no encimarse
				if (BaseTerrestre->GetDireccion() == EDireccionMovimiento::MoverX)
					Offset = FVector(0.f, i * Separacion, 0.f);
				else
					Offset = FVector(i * Separacion, 0.f, 0.f);

				Clon1->SetActorLocation(BaseTerrestre->GetActorLocation() + Offset);
			}
		}

		if (BaseTerrestre2)
		{
			AEnemigo* Clon2 = Cast<AEnemigo>(BaseTerrestre2->Clonar());
			if (Clon2)
			{
				if (BaseTerrestre2->GetDireccion() == EDireccionMovimiento::MoverX)
					Offset = FVector(0.f, i * Separacion, 0.f);
				else
					Offset = FVector(i * Separacion, 0.f, 0.f);

				Clon2->SetActorLocation(BaseTerrestre2->GetActorLocation() + Offset);
			}
		}

		if (BaseAereo)
		{
			AEnemigo* Clon3 = Cast<AEnemigo>(BaseAereo->Clonar());
			if (Clon3)
			{
				if (BaseAereo->GetDireccion() == EDireccionMovimiento::MoverX)
					Offset = FVector(0.f, i * Separacion, 0.f);
				else
					Offset = FVector(i * Separacion, 0.f, 0.f);

				Clon3->SetActorLocation(BaseAereo->GetActorLocation() + Offset);
			}
		}
		
	}
}

