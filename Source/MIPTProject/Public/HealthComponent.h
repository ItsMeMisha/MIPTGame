// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MIPTPROJECT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
		int32 HealthPoints;

	UPROPERTY(VisibleAnywhere)
		int32 MaxHealthPoints;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
		void SetHealthPoints(int32 NewHealthPoints) { if (NewHealthPoints > 0) HealthPoints = NewHealthPoints; }

	UFUNCTION()
		void SetMaxHealthPoints(int32 NewMaxHealthPoints) { if (NewMaxHealthPoints > 0) MaxHealthPoints = NewMaxHealthPoints; }


	UFUNCTION()
		void Heal(int32 HealAmount) { HealthPoints + HealAmount > MaxHealthPoints ? HealthPoints = MaxHealthPoints : HealthPoints += HealAmount; }

	UFUNCTION()
		void RecieveDamage(int32 DamageAmount) { if (HealthPoints > 0) HealthPoints -= DamageAmount; }

	UFUNCTION()
		FORCEINLINE bool IsDead() const { return HealthPoints <= 0; }
		
};
