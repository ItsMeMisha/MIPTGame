// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"
#include "BasicEnemy.h"
#include "BasicBoss.generated.h"

/**
 * 
 */
UCLASS()
class MIPTPROJECT_API ABasicBoss : public ABasicEnemy
{
	GENERATED_BODY()

protected:
	UPROPERTY()
		UPaperSpriteComponent* SpriteComponent;

public:
	ABasicBoss();
	
};
