// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasicAIController.generated.h"

/**
 * 
 */
UCLASS()
class MIPTPROJECT_API ABasicAIController : public AAIController
{
	GENERATED_BODY()


public:
	bool bFloatingPawn = true;

	void Tick(float DeltaSeconds) override;
	
};