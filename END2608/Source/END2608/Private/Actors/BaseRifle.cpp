// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseRifle.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Both/PlayerHUD.h"

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
	// Define the rotation
	FRotator Rotation = PawnParent->GetBaseAimRotation();

	FActorSpawnParameters Params;
	Params.Owner = PawnParent->GetController();
	Params.Instigator = PawnParent;

	//branch? : if statment
	if (CanShoot()) {
		//spawn 
		GetWorld()->SpawnActor<AActor>(ProjectileClass, GetSockSource(), Rotation, Params);

		ActionHappening = true;

		//create Events bind the ActionStopped method
		TimeDelegateObject.BindUFunction(this, FName("ActionStopped"));

		//set timer by event
		UKismetSystemLibrary::K2_SetTimerDelegate(TimeDelegateObject, RestTimer, false);

		//call OnRifleAttack
		OnRifleAttack.Broadcast();

	}
}

const bool ABaseRifle::CanShoot()
{
	return (!ActionHappening && Alive);
}

void ABaseRifle::ActionStopped()
{
	ActionHappening = false;
}

FVector ABaseRifle::GetSockSource() const {
	return SkellyMesh->GetSocketLocation(WeaponSocketName);
}

void ABaseRifle::OwnerDied()
{
	Alive = false;
}


