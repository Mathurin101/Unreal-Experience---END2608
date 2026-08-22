// Fill out your copyright notice in the Description page of Project Settings.


#include "Both/PlayerHUD.h"
#include "../END2608.h"

void UPlayerHUD::SetHealth(float Percent)
{
	HealthBar->SetPercent(Percent);
	UE_LOG(Game, Warning, TEXT("HP is : %f"), HealthBar->Percent);
}