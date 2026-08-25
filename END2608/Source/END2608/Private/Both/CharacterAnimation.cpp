// Fill out your copyright notice in the Description page of Project Settings.


#include "Both/CharacterAnimation.h"
#include "KismetAnimationLibrary.h"
#include "../END2608.h"
#include "Kismet/KismetArrayLibrary.h"

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
void UCharacterAnimation::FireAnimation() {
	PlaySlotAnimationAsDynamicMontage(FireAsset, ActionSlotName);
}

void UCharacterAnimation::HitAnimation(float NotUsed)
{
	PlaySlotAnimationAsDynamicMontage(HitAsset, ActionSlotName);
}

void UCharacterAnimation::DeathAnimation(float NotUsed)
{
	int RandomNumber = FMath::RandRange(0, DeathAssets.Num() - 1);
	
	//random death animation
	CurrentDeathAsset = DeathAssets[RandomNumber];
	UE_LOG(Game, Log, TEXT("Death animation number: %d"), RandomNumber);
}

void UCharacterAnimation::PreviewWindowUpdate_Implementation()
{
	if (DebugDeath) {
		DeathAnimation();
		DebugDeath = false;
	}
	else if (DebugHit) {
		HitAnimation();
		DebugHit = false;

	}//log shoot/fire
	else if (DebugFire) {
		FireAnimation();
		DebugFire = false;
	}
}


