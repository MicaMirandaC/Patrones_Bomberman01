// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereo.h"

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
}

void AEnemigoAereo::Patrullar()
{
    // Configura para que se eleve y se mueva horizontalmente
    ConfigurarMovimiento(GetActorLocation(), 1000.f, 10.f, EDireccionMovimiento::MoverX_ElevarZ);
}

void AEnemigoAereo::Atacar()
{
    ConfigurarMovimiento(GetActorLocation(), 1000.f, 100.f, EDireccionMovimiento::MoverX_ElevarZ);
}


FString AEnemigoAereo::NombreDelEnemigo()
{
	return "Enemigo A�reo";
}
//FVector PosInicial, float Distancia, float Velocidad, EDireccionMovimiento Direccion