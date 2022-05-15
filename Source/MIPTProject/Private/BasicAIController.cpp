// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicAIController.h"

void ABasicAIController::Tick(float DeltaSeconds) {
	if (bFloatingPawn && GetPawn()) {
		FVector NewLocation = GetPawn()->GetActorLocation();
		NewLocation.Z += FMath::Sin((GetGameTimeSinceCreation() + DeltaSeconds) * 2);
		GetPawn()->SetActorLocation(NewLocation);
	}
}