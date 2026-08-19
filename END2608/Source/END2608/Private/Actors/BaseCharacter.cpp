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
	ChildActor->SetupAttachment(GetMesh(), "PlaceWeaponHere");
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	//setting weapon to childactor
	ChildActor->SetChildActorClass(WeaponClass);

	//target(ing): ChildActor->GetChildActor()

	//cast the childActor to a BaseRifle = Cast<ABaseRifle>

	//and set the cast the childActor to the rifle
	Rifle = Cast<ABaseRifle>(ChildActor->GetChildActor());

	if (Rifle) {

		UE_LOG(Game, Log, TEXT("Weapon is Here!!!"));
	}
	else {
		UE_LOG(Game, Error, TEXT("Weapon is needed!!!"));
	}

	//something similar happens here as well

	//getting the main mesh component's  AnimInstance = GetMesh()->GetAnimInstance() 
		//and casting it to the UCharacterAnimation

	//set the RifleAnimation to the casted AnimInstance of the mesh to get the shoot animation
	RifleAnimation = Cast<UCharacterAnimation>(GetMesh()->GetAnimInstance());

	if (RifleAnimation) {
		UE_LOG(Game, Log, TEXT("Shoot Animation is Here!!!"));
	}
	else {

		UE_LOG(Game, Log, TEXT("Shoot Animation is NOT Here!!!"));
	}


	Rifle->BindOnRifleAttack.BindUFunction(RifleAnimation, FName("FireAnimation"));
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

