// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicBoss.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ABasicBoss::ABasicBoss() 
{
	if (!SpriteComponent) {
		SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SpriteComponent"));		
	}
	ConstructorHelpers::FObjectFinder<UPaperSprite> sprite(TEXT("PaperSprite'/Game/2DSideScroller/Sprites/BossExample.BossExample'"));
	if (sprite.Succeeded()) {
		SpriteComponent->SetSprite(sprite.Object);
		SpriteComponent->SetMobility(EComponentMobility::Type::Movable);
	}

	SpriteComponent->BodyInstance.SetCollisionProfileName(TEXT("Pawn"));
	RootComponent = SpriteComponent;
	GetCapsuleComponent()->SetupAttachment(RootComponent);
	GetCapsuleComponent()->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	GetCharacterMovement()->GravityScale = 0.f;
	
	HealthComponent->SetMaxHealthPoints(20);
	HealthComponent->SetHealthPoints(HealthComponent->GetMaxHealthPoints());
}