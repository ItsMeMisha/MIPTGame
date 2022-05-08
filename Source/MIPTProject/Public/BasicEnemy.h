// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
	UPROPERTY()
		UHealthComponent* HealthComponent = nullptr;

public:
	ABasicEnemy();

	UFUNCTION()
		void RecieveDamage(AProjectile* Projectile);
};
