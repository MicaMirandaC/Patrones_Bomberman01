// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereo.h"
#include "MovimientoPatrulla.h"

AEnemigoAereo::AEnemigoAereo()
{
    if (MallaEnemigo) //Verifica si la maya existe
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Ground_Moss.M_Ground_Moss'"));

        if (MaterialBase.Succeeded())
        {
            //Asigna el material
            MallaEnemigo->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
    EstablecerEstrategia(NewObject<UMovimientoPatrulla>());
}


FString AEnemigoAereo::NombreDelEnemigo()
{
	return "Enemigo Aéreo";
}
//FVector PosInicial, float Distancia, float Velocidad, EDireccionMovimiento Direccion