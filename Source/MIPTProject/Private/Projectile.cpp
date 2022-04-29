// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"

AProjectile::AProjectile() {
	static ConstructorHelpers::FObjectFinder<UPaperSprite> sprite(TEXT("PaperSprite'/Game/2DSideScroller/Sprites/Projectile.Projectile'"));
	if (sprite.Succeeded()) {
		GetRenderComponent()->SetSprite(sprite.Object);
	}

	if (!ProjectileMovementComponent) {
		ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
		ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
		ProjectileMovementComponent->InitialSpeed = 1000.0f;
		ProjectileMovementComponent->MaxSpeed = 1000.0f;
		ProjectileMovementComponent->bRotationFollowsVelocity = true;
		ProjectileMovementComponent->bShouldBounce = true;
		ProjectileMovementComponent->Bounciness = 0.3f;
		ProjectileMovementComponent->ProjectileGravityScale = 0.f;
	}

	InitialLifeSpan = 5.0f;
}