// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/HealthComponent.h"
#include "../END2608.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	PrimaryComponentTick.bStartWithTickEnabled = false;
	// ...

}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;

	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::OnTakeAnyDamage);
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UHealthComponent::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser) {

	CurrentHealth = FMath::Clamp(CurrentHealth - Damage, 0, MaxHealth);

	UE_LOG(Game, Error, TEXT("CurrentHealth: %f"), CurrentHealth);

	if (CurrentHealth > 0) {
		
		//call OnHurt
		OnHurt.Broadcast(CurrentHealth / MaxHealth);
	}
	else {

		//call OnDeath
		OnDeath.Broadcast(0);

		//unbind all events from this Delegate
		GetOwner()->OnTakeAnyDamage.Clear();	
		UE_LOG(Game, Error, TEXT("Unbinding Method on death"));
	}
}

