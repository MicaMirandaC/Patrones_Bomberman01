// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoPatrulla.h"
#include "Enemigo.h"

void UMovimientoPatrulla::EjecutarMovimiento(AEnemigo* Enemigo, float DeltaTime)
{
	//La interfaz exige que EjecutarMovimiento() reciba un AActor*, así que necesitamos castear a AEnemigo dentro de la estrategia para poder acceder a PosicionInicial, DistanciaMaxima, etc.
	AEnemigo* EnemigoReal = Cast<AEnemigo>(Enemigo);
	if (!EnemigoReal) return;

	FVector Pos = EnemigoReal->GetActorLocation();
	FVector PosInicial = EnemigoReal->GetPosicionInicial();
	float Velocidad = 100.f;
	float Movimiento = Velocidad * DeltaTime;
	float Distancia = EnemigoReal->GetDistanciaMaxima();
	bool& bAvanza = EnemigoReal->GetAvanzando();

	switch (EnemigoReal->GetDireccion())
	{
	case EDireccionMovimiento::MoverX:
	{
		float DesplazRel = Pos.X - PosInicial.X;
		DesplazRel += bAvanza ? Movimiento : -Movimiento;

		if (DesplazRel > Distancia) { bAvanza = false; DesplazRel = Distancia; }
		else if (DesplazRel < 0.f) { bAvanza = true; DesplazRel = 0.f; }

		Pos.X = PosInicial.X + DesplazRel;
		break;
	}
	case EDireccionMovimiento::MoverY:
	{
		float DesplazRel = Pos.Y - PosInicial.Y;
		DesplazRel += bAvanza ? Movimiento : -Movimiento;

		if (DesplazRel > Distancia) { bAvanza = false; DesplazRel = Distancia; }
		else if (DesplazRel < 0.f) { bAvanza = true; DesplazRel = 0.f; }

		Pos.Y = PosInicial.Y + DesplazRel;
		break;
	}
	case EDireccionMovimiento::ElevarZ:
		Pos.Z = PosInicial.Z + Distancia;
		break;

	case EDireccionMovimiento::MoverX_ElevarZ:
	{
		Pos.Z = PosInicial.Z + Distancia;

		float DesplazRel = Pos.X - PosInicial.X;
		DesplazRel += bAvanza ? Movimiento : -Movimiento;

		if (DesplazRel > Distancia) { bAvanza = false; DesplazRel = Distancia; }
		else if (DesplazRel < 0.f) { bAvanza = true; DesplazRel = 0.f; }

		Pos.X = PosInicial.X + DesplazRel;
		break;
	}
	}

	EnemigoReal->SetActorLocation(Pos);
}
