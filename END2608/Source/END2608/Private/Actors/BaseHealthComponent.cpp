// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseHealthComponent.h"

// Sets default values
ABaseHealthComponent::ABaseHealthComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;

	ParentPawn = Cast<APawn>(GetParentActor());

	//this = GetOwner
	//TakeDamageEvent.AddDynamic(this, &ABaseHealthComponent::OnTakeAnyDamage);
	
}

// Called every frame
void ABaseHealthComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseHealthComponent::OnTakeAnyDamage(float DamageTaken) {

	CurrentHealth -= FMath::Clamp(DamageTaken, 0, MaxHealth);
	
	UE_LOG(Game, Error, TEXT("CurrentHealth: %f"), CurrentHealth);
}