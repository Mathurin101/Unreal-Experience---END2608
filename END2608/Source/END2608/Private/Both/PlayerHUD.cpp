// Fill out your copyright notice in the Description page of Project Settings.


#include "Both/PlayerHUD.h"
#include "../END2608.h"



void UPlayerHUD::NativeConstruct()
{
	Super::NativeConstruct();

	//gain access to change colors
	DynamicMaterial = CrossHair_Texture->GetDynamicMaterial();

	//wait for 2 secs
	GetWorld()->GetTimerManager().SetTimer(DelayTimer, this, &UPlayerHUD::GetDynamicParaVal, TimeDelayed, false);


}

void UPlayerHUD::GetDynamicParaVal()
{	
	DynamicMaterial->GetVectorParameterValue(ColorName, SafeColor);
}

void UPlayerHUD::SetHealth(float Percent)
{
	HealthBar->SetPercent(Percent);
	UE_LOG(Game, Warning, TEXT("HP is : %f"), HealthBar->Percent);
}