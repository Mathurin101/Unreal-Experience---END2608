// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseRifle.h"
#include "Actors/BasePlayer.h"

// Sets default values
ABaseRifle::ABaseRifle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ABaseRifle::BeginPlay()
{
	Super::BeginPlay();

	// Define the location and rotation
	FVector Location = FVector(4.0f, 4.0f, -1.5f);
	FRotator Rotation = FRotator(-5.0f, 0.0f, 97.0f);

	FActorSpawnParameters Params;
	Params.Owner = GetInstigatorController();
	Params.Instigator = GetInstigator();

	//spawn 
	 GetWorld()->SpawnActor<ABaseRifle>(ABaseRifle::StaticClass(), Location, Rotation, Params);
}

// Called every frame
void ABaseRifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

