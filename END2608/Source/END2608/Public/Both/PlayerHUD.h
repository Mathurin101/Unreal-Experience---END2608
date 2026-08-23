// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/Image.h"
#include "PlayerHUD.generated.h"

/**
 * 
 */
UCLASS()
class END2608_API UPlayerHUD : public UUserWidget
{
	GENERATED_BODY()

protected:
	// Called when the game starts
	virtual void BeginPlay();

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UProgressBar* HealthBar;

	//add a image variable called Crosshair probaly add the Uproperty
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UImage* CrossHair_Texture;

	UMaterialInstanceDynamic* DynamicMaterial;

	// The handle used to delay time
	FTimerHandle DelayTimer;

	//The default name to "Color" (which we named in the cross hair section)
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	FName ColorName = "Color";

	float TimeDelayed = 2.0f;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	FLinearColor SafeColor = FLinearColor(0.1, 0.7, 0.7, 1);//give the safe color RGBA values
	
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	FLinearColor DangerColor = FLinearColor(0.85f,0.1f,0.1f, 1);

	void GetDynamicParaVal();
public:
	UFUNCTION(BlueprintCallable)
	void SetHealth(float Percent);

	UFUNCTION(BlueprintCallable)
	//similar to event graph code vise
	//NativeConstruct(): executes more than once //NativeOnInitialized(): executes once 
	virtual void NativeConstruct() override;
};
