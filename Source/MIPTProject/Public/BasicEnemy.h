// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Perception/PawnSensingComponent.h"
#include "HealthComponent.h"
#include "Projectile.h"
#include "PaperCharacter.h"
#include "BasicEnemy.generated.h"

/**
 * 
 */
UCLASS()
class MIPTPROJECT_API ABasicEnemy : public APaperCharacter
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, Category = Stats)
		UHealthComponent* HealthComponent = nullptr;

	UPROPERTY(EditAnywhere, Category = Sensing)
		UPawnSensingComponent* SensingComponent;

	UFUNCTION()
		virtual void Die();

public:
	ABasicEnemy();

	UFUNCTION()
		virtual void RecieveDamage(AProjectile* Projectile);
};
