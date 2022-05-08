// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicEnemy.h"

ABasicEnemy::ABasicEnemy() 
{
	if (!HealthComponent) {
		HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	}


}

void ABasicEnemy::RecieveDamage(AProjectile* Projectile) 
{
	if (Projectile) {
		HealthComponent->RecieveDamage(Projectile->GetDamage());
	}
}