// Fill out your copyright notice in the Description page of Project Settings.


#include "Example/ExampleVariable.h"
#include "../END2608.h"

// Sets default values
AExampleVariable::AExampleVariable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ClassType = AExampleVariable::StaticClass();

}

// Called when the game starts or when spawned
void AExampleVariable::BeginPlay()
{
	Super::BeginPlay();
	
	//Up Cast
	AActor* Actor = this;

	//Down Cast
	APawn* Pawn = Cast<APawn>(Actor);

	if (Pawn) {
		//valid
		UE_LOG(Game, Warning, TEXT("Actor %s"), *Pawn->GetName())
	}
	else {
		//Not valid
		UE_LOG(Game, Log, TEXT("Numbers are %d or %f"), 4,7.1f)
	}

	//Params sent into AddDynamic are the same thing as create event in Blueprint
	// As seen in base character begin play
	// This is how C++ does the bind as seen in Blueprints
	OnDelegateInstance.AddDynamic(this, &AExampleVariable::ExampleBindFunction);

	//Same thing as Call in Blueprint
	//As seen in BP_BaseRifle
	OnDelegateInstance.Broadcast(this);
}

// Called every frame
void AExampleVariable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExampleVariable::ExampleBindFunction(AActor* Actor) {

	UE_LOG(Game, Error,TEXT("Function Called by delegate"))
}