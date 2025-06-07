// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Representa la malla del bloque
	MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	//Adjunta la malla al componente
	MallaEnemigo->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaEnemigo(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

	if (ObjetoMallaEnemigo.Succeeded())
	{
		//Cargar la malla del bloque
		MallaEnemigo->SetStaticMesh(ObjetoMallaEnemigo.Object);

		MallaEnemigo->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	bAvanzandoHaciaLimite = true;
	DistanciaMaxima = 0.f;
	VelocidadMovimiento = 0.f;
	DireccionMovimientoActual = EDireccionMovimiento::MoverX;

}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();

	PosicionInicial = GetActorLocation();
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    FVector PosicionActual = GetActorLocation();
    float Movimiento = VelocidadMovimiento * DeltaTime;

    switch (DireccionMovimientoActual)
    {
    case EDireccionMovimiento::MoverX:
    {
        // Distancia relativa actual desde el origen
        float DesplazamientoRelativo = PosicionActual.X - PosicionInicial.X;

        // Actualizamos el desplazamiento relativo según dirección
        DesplazamientoRelativo += bAvanzandoHaciaLimite ? Movimiento : -Movimiento;

        // Si nos pasamos del límite invertimos la dirección y corregimos el desplazamiento
        if (DesplazamientoRelativo > DistanciaMaxima)
        {
            bAvanzandoHaciaLimite = false;
            DesplazamientoRelativo = DistanciaMaxima; // corregimos para no pasar límite
        }
        else if (DesplazamientoRelativo < 0.f)
        {
            bAvanzandoHaciaLimite = true;
            DesplazamientoRelativo = 0.f; // corregimos para no pasar límite inverso
        }

        // Calculamos la nueva posición absoluta usando el desplazamiento relativo
        PosicionActual.X = PosicionInicial.X + DesplazamientoRelativo;
        break;
    }

    case EDireccionMovimiento::MoverY:
    {
        float DesplazamientoRelativo = PosicionActual.Y - PosicionInicial.Y;
        DesplazamientoRelativo += bAvanzandoHaciaLimite ? Movimiento : -Movimiento;

        if (DesplazamientoRelativo > DistanciaMaxima)
        {
            bAvanzandoHaciaLimite = false;
            DesplazamientoRelativo = DistanciaMaxima;
        }
        else if (DesplazamientoRelativo < 0.f)
        {
            bAvanzandoHaciaLimite = true;
            DesplazamientoRelativo = 0.f;
        }

        PosicionActual.Y = PosicionInicial.Y + DesplazamientoRelativo;
        break;
    }

    case EDireccionMovimiento::ElevarZ:
    {
        PosicionActual.Z = PosicionInicial.Z + DistanciaMaxima;
        break;
    }

    case EDireccionMovimiento::MoverX_ElevarZ:
    {
        PosicionActual.Z = PosicionInicial.Z + DistanciaMaxima;

        float DesplazamientoRelativo = PosicionActual.X - PosicionInicial.X;
        DesplazamientoRelativo += bAvanzandoHaciaLimite ? Movimiento : -Movimiento;

        if (DesplazamientoRelativo > DistanciaMaxima)
        {
            bAvanzandoHaciaLimite = false;
            DesplazamientoRelativo = DistanciaMaxima;
        }
        else if (DesplazamientoRelativo < 0.f)
        {
            bAvanzandoHaciaLimite = true;
            DesplazamientoRelativo = 0.f;
        }

        PosicionActual.X = PosicionInicial.X + DesplazamientoRelativo;
        break;
    }
    }

    SetActorLocation(PosicionActual);
}

void AEnemigo::Patrullar()
{
}

void AEnemigo::Atacar()
{
}

void AEnemigo::ConfigurarMovimiento(FVector PosInicial, float Distancia, float Velocidad, EDireccionMovimiento Direccion)
{
	PosicionInicial = PosInicial;
	DistanciaMaxima = Distancia;
	VelocidadMovimiento = Velocidad;
	DireccionMovimientoActual = Direccion;
	bAvanzandoHaciaLimite = true;
}