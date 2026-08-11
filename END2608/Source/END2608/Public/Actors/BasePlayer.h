// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseCharacter.h"
#include "BasePlayer.generated.h"

/**
 * 
 */
UCLASS()
class END2608_API ABasePlayer : public ABaseCharacter
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, Category = Character)

	class USpringArmComponent* SpringArm;
	class UCameraComponent* Camera;


public: 
	ABasePlayer();
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private: 
	void InputAxisMoveForward(float AxisValue);

	void MovingLeftAndRight(float AxisValue);
};
