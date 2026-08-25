// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Actors/BaseRifle.h"
#include "Actors/HealthComponent.h"
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
	
	//UPROPERTY() : allow to fill in the ChildActor in the editor as well
	UPROPERTY(EditAnywhere, Category = Default)
	UChildActorComponent* ChildActor;

	//need the rifle include to cast later
	ABaseRifle* Rifle;

	//get a rifle animation from the character mesh
	UCharacterAnimation* RifleAnimation;

	//UPROPERTY() : allow to fill in the weapon class in the editor
	UPROPERTY(EditAnywhere, Category = Default)
	TSubclassOf<AActor> WeaponClass;

	//health things 
	//Adding HealthComponent to character
	UPROPERTY(VisibleAnywhere, Category = Default)
	UHealthComponent* HealthComponent;

	UFUNCTION(BlueprintCallable, Category = Default)
	virtual void HandleHurt(float Ratio);

	UFUNCTION(BlueprintCallable, Category = Default)
	virtual void HandleDeath(float Ratio);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
