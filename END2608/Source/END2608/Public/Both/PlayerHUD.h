// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "PlayerHUD.generated.h"

/**
 * 
 */
UCLASS()
class END2608_API UPlayerHUD : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UProgressBar* HealthBar;
	
public:
	UFUNCTION()
	void SetHealth(float Percent);
};
