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
	//FRotator Rotation = PawnParent->GetBaseAimRotation();

	FActorSpawnParameters Params;
	Params.Owner = PawnParent->GetController();
	Params.Instigator = PawnParent;

	//branch? : if statment
	if (CanShoot()) {
		//spawn 
		GetWorld()->SpawnActor<AActor>(ProjectileClass, GetSockSource(), NewHackedRotator(), Params);

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

FVector ABaseRifle::GetSockSource() const {
	return SkellyMesh->GetSocketLocation(WeaponSocketName);
}

FRotator ABaseRifle::NewHackedRotator() const
{
	FRotator ResultingRotator = PawnParent->GetBaseAimRotation();

	// Gets a players widget from the GetWorld()
	TArray<UUserWidget*> FoundWidgets;

	// 1. Initialize the HUDClass with your specific widget class
	TSubclassOf<UUserWidget> HUDClass = UPlayerHUD::StaticClass();
	UPlayerHUD* HUDObject;

	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(GetWorld(), FoundWidgets, HUDClass, true);

	//make sure the Foundwidget is not empty
	bool isWidgetActuallyFound = ((FoundWidgets.Num() > 0) && (FoundWidgets[0] != nullptr));

	if (isWidgetActuallyFound)
	{
		// Shortening the bool to check if it was the player
		bool isPlayerPawn = (FoundWidgets[0]->GetOwningPlayerPawn() == PawnParent);

		// To hold the subtraction of the destination and the socket source
		FVector TheRotationSubtract;

		if (isPlayerPawn) {

			// Cast the FoundWidget to the HUDObject
			HUDObject = Cast<UPlayerHUD>(FoundWidgets[0]);

			//check if the HUDObject is not empty
			if (HUDObject)
			{
				// GetDestination() - GetSockSource()
				TheRotationSubtract = HUDObject->GetDestination() - GetSockSource();
				ResultingRotator = FRotationMatrix::MakeFromX(TheRotationSubtract).Rotator();
			}
			
		}
		
	}
	

	return ResultingRotator;
}
