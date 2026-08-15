// Fill out your copyright notice in the Description page of Project Settings.


#include "Both/CharacterAnimation.h"
#include "KismetAnimationLibrary.h"

void UCharacterAnimation::NativeThreadSafeUpdateAnimation(float DeltaSeconds) {
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);

	APawn* Pawn = TryGetPawnOwner();

	//check if the pawn is vaild
	if (Pawn) {
		//is vaild

		Velocity = Pawn->GetVelocity().Size();
		//Pawn->GetActorRotation();

		FVector VelocityVector = Pawn->GetVelocity();

		Velocity = VelocityVector.Size();

		FRotator BaseRotation = Pawn->GetActorRotation();

		Direction = UKismetAnimationLibrary::CalculateDirection(VelocityVector, BaseRotation);
		
	}
	else {//is not vaild

		PreviewWindowUpdate();
	}
}

void UCharacterAnimation::PreviewWindowUpdate_Implementation()
{
	//log shoot/fire
}
