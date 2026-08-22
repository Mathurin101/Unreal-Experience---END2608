// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseRifle.h"



// Sets default values
ABaseRifle::ABaseRifle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	PrimaryActorTick.bStartWithTickEnabled = false;

	//creating the mesh for the rifle 
	SkellyMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkellyMesh");

	//making it the root component
	SetRootComponent(SkellyMesh);
}

// Called when the game starts or when spawned
void ABaseRifle::BeginPlay()
{
	Super::BeginPlay();

	//geting the parent actor 
	//casting it to a APawn for the PawnParent
	//and setting it to the PawnParent
	PawnParent = Cast<APawn>(GetParentActor());

	if (PawnParent) {

	}
	else {
		UE_LOG(Game, Error, TEXT("Need PawnParent"));
	}
}

// Called every frame
void ABaseRifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseRifle::SpawnBullet()
{

	// Define the location and rotation
	FVector Location = SkellyMesh->GetSocketLocation(WeaponSocketName);
	FRotator Rotation = PawnParent->GetBaseAimRotation();

	FActorSpawnParameters Params;
	Params.Owner = PawnParent->GetController();
	Params.Instigator = PawnParent;

	//branch? : if statment
	if (CanShoot()) {
		//spawn 
		GetWorld()->SpawnActor<AActor>(ProjectileClass, Location, Rotation, Params);

		ActionHappening = true;

		//create Events bind the ActionStopped method
		TimeDelegateObject.BindUFunction(this, FName("ActionStopped"));

		//set timer by event
		UKismetSystemLibrary::K2_SetTimerDelegate(TimeDelegateObject, RestTimer, true);
		
		//call OnRifleAttack
		OnRifleAttack.Broadcast();

	}
}

const bool ABaseRifle::CanShoot()
{
	return !ActionHappening;
}

void ABaseRifle::ActionStopped()
{
	ActionHappening = false;
}



