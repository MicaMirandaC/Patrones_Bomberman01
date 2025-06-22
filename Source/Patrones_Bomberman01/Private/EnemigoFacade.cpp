// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFacade.h"
//#include "MovimientoPatrulla.h"
//#include "MovimientoAtaque.h"
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

void AEnemigoFacade::InicializarBases(TScriptInterface<IIMovimientoEstrategia> Estrategia)
{
	UWorld* Mundo = GetWorld();
	if (!Mundo) return;

	// Terrestre
	BaseTerrestre = Mundo->SpawnActor<AEnemigoTerrestre>();
	BaseTerrestre->EstablecerEstrategia(Estrategia);
	BaseTerrestre->SetDireccion(EDireccionMovimiento::MoverX);

	// Terrestre 2
	BaseTerrestre2 = Mundo->SpawnActor<AEnemigoTerrestre2>();
	BaseTerrestre2->EstablecerEstrategia(Estrategia);
	BaseTerrestre2->SetDireccion(EDireccionMovimiento::MoverY);

	// Aéreo
	BaseAereo = Mundo->SpawnActor<AEnemigoAereo>();
	BaseAereo->EstablecerEstrategia(Estrategia);
	BaseAereo->SetDireccion(EDireccionMovimiento::MoverX_ElevarZ);
}

void AEnemigoFacade::ClonarEnemigos()
{
	UWorld* Mundo = GetWorld();
	if (!Mundo) return;

	const float Separacion = 300.f;

	for (int i = 0; i < 3; i++)
	{
		FVector Offset(i * Separacion, 0, 0);

		AEnemigo* Clon1 = Cast<AEnemigo>(BaseTerrestre->Clonar());
		if (Clon1) Clon1->SetActorLocation(BaseTerrestre->GetActorLocation() + Offset);

		AEnemigo* Clon2 = Cast<AEnemigo>(BaseTerrestre2->Clonar());
		if (Clon2) Clon2->SetActorLocation(BaseTerrestre2->GetActorLocation() + Offset + FVector(0, 300, 0));

		AEnemigo* Clon3 = Cast<AEnemigo>(BaseAereo->Clonar());
		if (Clon3) Clon3->SetActorLocation(BaseAereo->GetActorLocation() + Offset + FVector(0, 600, 0));
	}
}

