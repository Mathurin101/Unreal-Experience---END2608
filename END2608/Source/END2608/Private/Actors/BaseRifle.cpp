// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseRifle.h"
#include "../END2608.h"

// Sets default values
ABaseRifle::ABaseRifle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SkellyMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkellyMesh");
	SetRootComponent(SkellyMesh);
}

// Called when the game starts or when spawned
void ABaseRifle::BeginPlay()
{
	Super::BeginPlay();

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
	FVector Location = SkellyMesh->GetSocketLocation("MuzzleFlashSocket");
	FRotator Rotation = PawnParent->GetBaseAimRotation();
	
	FActorSpawnParameters Params;
	Params.Owner = PawnParent->GetController();
	Params.Instigator = PawnParent;
	
	//spawn 
	GetWorld()->SpawnActor<AActor>(ProjectileClass, Location, Rotation, Params);
}



