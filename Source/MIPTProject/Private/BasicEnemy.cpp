// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicEnemy.h"
#include "BasicAIController.h"

ABasicEnemy::ABasicEnemy() 
{
	if (!HealthComponent) {
		HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	}

	AIControllerClass = ABasicAIController::StaticClass();

	if (!SensingComponent) {
		SensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
		SensingComponent->bEnableSensingUpdates = true;
		SensingComponent->bHearNoises = false;
		SensingComponent->bOnlySensePlayers = true;
		SensingComponent->SightRadius = 1000.f;
		SensingComponent->SetPeripheralVisionAngle(360.f);
	}
}

void ABasicEnemy::RecieveDamage(AProjectile* Projectile) 
{
	if (Projectile) {
		HealthComponent->RecieveDamage(Projectile->GetDamage());
	}
	UE_LOG(LogTemp, Warning, TEXT("%d hp left"), HealthComponent->GetHealthPoints());
}

void ABasicEnemy::Die() {
	Destroy();
}