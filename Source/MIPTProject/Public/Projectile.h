// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PaperSpriteActor.h"
#include "Projectile.generated.h"

/**
 * 
 */
UCLASS()
class MIPTPROJECT_API AProjectile : public APaperSpriteActor
{
	GENERATED_BODY()

public:
	AProjectile();

	UPROPERTY(VisibleAnywhere, Category = Movement)
		UProjectileMovementComponent* ProjectileMovementComponent;
};
