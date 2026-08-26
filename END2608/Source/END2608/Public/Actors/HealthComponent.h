// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


//Create delegate class and sets the signature
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDBindEventEvent, float, Ratio);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class END2608_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	

	FDBindEventEvent OnHurt;
	
	FDBindEventEvent OnDeath;

private:
	const float MaxHealth = 5.0f;

	float CurrentHealth;

	UFUNCTION()
	void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);//(float DamageTaken);
};
