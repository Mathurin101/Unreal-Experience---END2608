// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BasePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "blueprint/UserWidget.h"
#include "../END2608.h"
#include "Components/ActorComponent.h"

ABasePlayer::ABasePlayer()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->SetupAttachment(GetRootComponent()/*, not needed unless we have to set something by it's socket */);
	SpringArm->SetRelativeLocation(FVector(0.0, 80.0, 90.0));
	SpringArm->TargetArmLength = 205.0f;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
	Camera->SetRelativeLocation(FVector(0.0, 0.0, 0.0));

}

void ABasePlayer::BeginPlay()
{
	//Parent: BeginPlay
	Super::BeginPlay();

	//set player controller
	PlayerController = Cast<APlayerController>(GetController());

	HUDObject = Cast<UPlayerHUD>(CreateWidget(PlayerController, HUDClass));

	if (HUDObject) {
		HUDObject->AddToViewport();

		//call this in the Base Character.h or parent class
		//HealthComponent->OnHurt.AddDynamic(HUDObject, &UPlayerHUD::SetHealth);

		HealthComponent->OnDeath.AddDynamic(HUDObject, &UPlayerHUD::SetHealth);
	}
	else {
		UE_LOG(Game, Warning,TEXT("HUDObject is not here!!"));
	}

}

void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Bind Rotation Functions
	PlayerInputComponent->BindAxis("TurnRight", this, &ABasePlayer::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ABasePlayer::AddControllerPitchInput);//camera

	//Bind Movement Functions
	PlayerInputComponent->BindAxis("MoveForward", this, &ABasePlayer::InputAxisMoveForward);
	PlayerInputComponent->BindAxis("Strafe", this, &ABasePlayer::MovingLeftAndRight);

	//Gun Function 
	PlayerInputComponent->BindAction("AttackInput", EInputEvent::IE_Pressed, this, &ABasePlayer::Attack);

}

void ABasePlayer::HandleHurt(float Ratio) 
{
	Super::HandleHurt(Ratio);

	HUDObject->SetHealth(Ratio);
	UE_LOG(Game, Warning, TEXT("you Got HIT!!! (baseplayer)"));
}

FRotator ABasePlayer::GetBaseAimRotation() const
{
	FRotator ResultingRotator;
	FVector TheRotationSubtract;

	// GetDestination() - GetSockSource()
	TheRotationSubtract = HUDObject->GetDestination() - Rifle->GetSockSource();
	ResultingRotator = FRotationMatrix::MakeFromX(TheRotationSubtract).Rotator();

	return ResultingRotator;
}


void ABasePlayer::InputAxisMoveForward(float AxisValue)
{
	FRotator ReturnValue = GetControlRotation();
	float Yaw = ReturnValue.Yaw;

	FRotator MakeRotator(0.0f, Yaw, 0.0f);
	FVector WorldDirection = MakeRotator.Vector();

	AddMovementInput(WorldDirection, AxisValue);


	//or do that in one line
	//AddMovementInput(FRotator(0.0f, GetControlRotation().Yaw, 0.0f).Vector(), AxisValue);
}

void ABasePlayer::MovingLeftAndRight(float AxisValue)
{
	//get player Rotation
	FRotator YawRotation(0.0f, GetControlRotation().Yaw, 0.0f);

	//get YawRotation's vector
	FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(RightDirection, AxisValue);

}

void ABasePlayer::Attack() {
	Rifle->SpawnBullet();

	//	RifleAnimation->FireAnimation();//No longer used

}
