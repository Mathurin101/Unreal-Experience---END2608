// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BasePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

ABasePlayer::ABasePlayer()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");

	SpringArm->SetupAttachment(GetRootComponent()/*, not needed unless we have to set something by it's socket */);
	SpringArm->SetRelativeLocation(FVector(0.0,0.0,60.0));
	
	
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
	Camera->SetRelativeLocation(FVector(0.0,0.0,0.0));


}

void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Bind Rotation Functions
	PlayerInputComponent->BindAxis("TurnRight",this, &ABasePlayer::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp",this, &ABasePlayer::AddControllerPitchInput);//camera
	
	//Bind Movement Functions
	PlayerInputComponent->BindAxis("MoveForward",this, &ABasePlayer::InputAxisMoveForward);
	PlayerInputComponent->BindAxis("Strafe",this, &ABasePlayer::MovingLeftAndRight);
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
	FRotator ReturnValue = GetControlRotation();
	float Yaw = ReturnValue.Yaw;

	FRotator MakeRotator(0.0f, Yaw, 0.0f);

	//GetControlRotation().;

	FVector WorldDirection = MakeRotator.Vector().RightVector;

	AddMovementInput(WorldDirection, AxisValue);

}


