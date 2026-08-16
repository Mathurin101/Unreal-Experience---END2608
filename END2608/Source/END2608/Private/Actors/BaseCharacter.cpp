// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseCharacter.h"
#include "../END2608.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->SetRelativeLocation(FVector(0.0, 0.0, -90.0));

	GetMesh()->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));

	ChildActor = CreateDefaultSubobject<UChildActorComponent>("ChildActor");
	ChildActor->SetupAttachment(GetMesh(), "CodePlaceWeaponHere");
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	
	ChildActor->SetChildActorClass(WeaponClass);

	Rifle = Cast<ABaseRifle>(ChildActor->GetChildActor());

	if (Rifle) {

		UE_LOG(Game, Log, TEXT("Weapon is Here!!!"));
	}
	else {
		UE_LOG(Game, Error, TEXT("Weapon is needed!!!"));
	}


}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

