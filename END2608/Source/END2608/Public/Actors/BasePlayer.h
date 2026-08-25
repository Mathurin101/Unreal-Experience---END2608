// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseCharacter.h"
#include "Both/PlayerHUD.h"
#include "BasePlayer.generated.h"

/**
 * 
 */
UCLASS()
class END2608_API ABasePlayer : public ABaseCharacter
{
	GENERATED_BODY()

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = Character)
	class USpringArmComponent* SpringArm;
	
	class UCameraComponent* Camera;
	

	APlayerController* PlayerController;

	UPROPERTY(EditAnywhere, Category = Character)
	TSubclassOf<UUserWidget> HUDClass;

	UPlayerHUD* HUDObject;

public: 
	ABasePlayer();
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual FRotator GetBaseAimRotation() const override;
	
	// overrides the parent's HandleHurt
	virtual void HandleHurt(float Ratio) override;

private: 
	void InputAxisMoveForward(float AxisValue);

	void MovingLeftAndRight(float AxisValue);

	void Attack();
};
