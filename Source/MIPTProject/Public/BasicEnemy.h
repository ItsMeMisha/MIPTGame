// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "BasicEnemy.generated.h"

/**
 * 
 */
UCLASS()
class MIPTPROJECT_API ABasicEnemy : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	void RecieveDamage();
};
