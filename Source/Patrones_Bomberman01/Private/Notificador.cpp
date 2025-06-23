// Fill out your copyright notice in the Description page of Project Settings.


#include "Notificador.h"
#include "ISuscriptor.h"

// Sets default values
ANotificador::ANotificador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANotificador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANotificador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANotificador::Subscribir(AActor* Subscriptor)
{
    Subscribers.Add(Subscriptor);
}

void ANotificador::DeSubscribir(AActor* SubscriptorRemover)
{
    Subscribers.Remove(SubscriptorRemover);
}

void ANotificador::NotificarSubs()
{
    //Bucle para cada suscriptor
    for (AActor* Actor : Subscribers)
    {
        //Asignar cada uno de ellos a un suscriptor concreto
        IISuscriptor* Sub = Cast<IISuscriptor>(Actor);
        if (Sub)
        {
            //Notifique a cada uno de ellos que algo ha cambiado, para que puedan ejecutar su propia rutina
            Sub->Update(this);
        }
    }
}
