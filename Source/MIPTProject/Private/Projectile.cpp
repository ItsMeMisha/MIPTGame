// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"
#include "../MIPTProjectCharacter.h"
#include "BasicEnemy.h"

AProjectile::AProjectile()
{
	ConstructorHelpers::FObjectFinder<UPaperSprite> sprite(TEXT("PaperSprite'/Game/2DSideScroller/Sprites/Projectile.Projectile'"));
	if (sprite.Succeeded()) {
		GetRenderComponent()->SetSprite(sprite.Object);
		GetRenderComponent()->SetMobility(EComponentMobility::Type::Movable);
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("Projectile sprite not set"));
	}

	
	if (!ProjectileMovementComponent) {
		ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	}
	ProjectileMovementComponent->SetUpdatedComponent(RootComponent);
	ProjectileMovementComponent->InitialSpeed = 2000.0f;
	ProjectileMovementComponent->MaxSpeed = 2000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;

	InitialLifeSpan = 5.0f;

	GetRenderComponent()->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));
	GetRenderComponent()->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
}

void AProjectile::ThrowInDirection(FVector Direction)
{
	ProjectileMovementComponent->Velocity = Direction * ProjectileMovementComponent->InitialSpeed;
}


void AProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) 
{
	AMIPTProjectCharacter* Player = Cast<AMIPTProjectCharacter>(OtherActor);
	if (Player) {
		UE_LOG(LogTemp, Warning, TEXT("Projectile hit player"));
	}

	ABasicEnemy* Enemy = Cast<ABasicEnemy>(OtherActor);
	if (Enemy) {
		UE_LOG(LogTemp, Warning, TEXT("Projectile hit enemy"));
	}

	Destroy();
}