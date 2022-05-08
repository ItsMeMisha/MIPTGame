// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "PaperSpriteActor.h"
#include "Projectile.generated.h"

/**
 * 
 */
UCLASS()
class MIPTPROJECT_API AProjectile : public APaperSpriteActor
{
	GENERATED_BODY()

private:
	UPROPERTY()
		UProjectileMovementComponent* ProjectileMovementComponent;

	/*UPROPERTY()
		USphereComponent* CollisionComponent; */

public:
	AProjectile();

	// Function that is called when the projectile hits something.
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
		void ThrowInDirection(FVector Direction);

};
