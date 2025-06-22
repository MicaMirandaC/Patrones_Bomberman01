// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoAtaque.h"
#include "Enemigo.h"

void UMovimientoAtaque::EjecutarMovimiento(AEnemigo* Enemigo)
{
	if (!Enemigo) return;

	FVector Pos = Enemigo->GetActorLocation();
	FVector PosInicial = Enemigo->PosicionInicial;
	float Velocidad = 200.f; // más rápido
	float Movimiento = Velocidad * Enemigo->GetWorld()->GetDeltaSeconds();
	float& Distancia = Enemigo->DistanciaMaxima;
	bool& bAvanza = Enemigo->bAvanzandoHaciaLimite;

	switch (Enemigo->GetDireccion())
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
	{
		Pos.Z = PosInicial.Z + Distancia;
		break;
	}
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
	default:
		break;
	}
	Enemigo->SetActorLocation(Pos);
}
