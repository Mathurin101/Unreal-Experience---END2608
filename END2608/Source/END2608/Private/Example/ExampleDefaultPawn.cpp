// Fill out your copyright notice in the Description page of Project Settings.


#include "Example/ExampleDefaultPawn.h"
#include "GameFramework/PlayerInput.h"
#include "../END2608.h"

// Sets default values
AExampleDefaultPawn::AExampleDefaultPawn()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExampleDefaultPawn::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(GAME, Error, TEXT("It is %s"), true ? TEXT("TRUE") : TEXT("FALSE"));
}

// Called every frame
void AExampleDefaultPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AExampleDefaultPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Spawn", EInputEvent::IE_Pressed, this, &AExampleDefaultPawn::Spawn);
}

void AExampleDefaultPawn::Spawn()
{
	FActorSpawnParameters Params;
	Params.Instigator = this;

	GetWorld()->SpawnActor<AActor>(SpawnBlueprintClass, GetActorTransform(), Params);
}

