// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../END2608.h"
#include "BaseHealthComponent.generated.h"

//Create delegate class and sets the signature
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegateBindEvent);

UCLASS()
class END2608_API ABaseHealthComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseHealthComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnTakeAnyDamage(float DamageTaken);

	FDelegateBindEvent TakeDamageEvent;

private:
	float MaxHealth = 5.0f;

	float CurrentHealth;


};
