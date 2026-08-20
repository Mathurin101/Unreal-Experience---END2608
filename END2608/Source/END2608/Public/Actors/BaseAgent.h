// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseCharacter.h"
#include "BaseAgent.generated.h"

/**
 * 
 */
UCLASS()
class END2608_API ABaseAgent : public ABaseCharacter
{
	GENERATED_BODY()
public:
	
	ABaseAgent();

	virtual void PostLoad();

	virtual void Tick(float DeltaTime);

protected:

	UPROPERTY(EditAnywhere, Category = Default)
	FName TintName = "Tint";

	UPROPERTY(EditAnywhere, Category = Default)
	FLinearColor AgentColor = FLinearColor(0.155043, 0.417973, 1.0, 1.0);

	
};
