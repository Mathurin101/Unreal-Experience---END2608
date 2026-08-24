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

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UProgressBar* HealthBar;

	//add a image variable called Crosshair probaly add the Uproperly
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UImage* CrossHair;
	
	UPROPERTY(BlueprintReadOnly, Category = Default)
	UMaterialInstanceDynamic* DynamicMaterial;
	
	
	
	//The default name to "Color" (which we named in the cross hair section)
	UPROPERTY(BlueprintReadOnly, Category = Default)
	FName ColorName = "Color";
	
	
	UPROPERTY(BlueprintReadOnly, Category = Default)
	FLinearColor SafeColor = FLinearColor(0.1, 0.7, 0.7, 1);//give the safe color RGBA values
	
	UPROPERTY(BlueprintReadOnly, Category = Default)
	FLinearColor DangerColor = FLinearColor(0.85f, 0.1f, 0.1f, 1);
	
	virtual void NativeTick(FGeometry Geo,float DeltaTime) ;


	//similar to event graph code vise
	//NativeConstruct(): executes more than once //NativeOnInitialized(): executes once 
	//UFUNCTION(BlueprintCallable)
	virtual void NativeConstruct() override;
public:
	UFUNCTION(BlueprintCallable)
	void SetHealth(float Percent);

	FVector GetDestination();

private:
	
	FVector EndPoint;
};
