// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Actors/BaseRifle.h"
#include "Both/CharacterAnimation.h"
#include "BaseCharacter.generated.h"


UCLASS(Abstract)
class END2608_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category = Default)
	UChildActorComponent* ChildActor;

	ABaseRifle* Rifle;

	UCharacterAnimation* RifleAnimation;

	UPROPERTY(EditAnywhere, Category = Default)
	TSubclassOf<AActor> WeaponClass;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
