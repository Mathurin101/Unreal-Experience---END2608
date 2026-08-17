// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimation.generated.h"

/**
 * 
 */
UCLASS()
class END2608_API UCharacterAnimation : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	void NativeThreadSafeUpdateAnimation(float DeltaSeconds);

	UFUNCTION(BlueprintCallable)
	void FireAnimation();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default);
	float Velocity; 

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default);
	float Direction;

	UPROPERTY(EditDefaultsOnly, Category = Default);
	bool DebugFire;

	UPROPERTY(EditDefaultsOnly, Category = Default);
	UAnimSequence* FireAsset;

	UPROPERTY(EditDefaultsOnly, Category = Default);
	FName ActionSlotName;

protected:
	UFUNCTION(BlueprintNativeEvent)
	void PreviewWindowUpdate();

	virtual void PreviewWindowUpdate_Implementation();
};
