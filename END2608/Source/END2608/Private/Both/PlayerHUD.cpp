// Fill out your copyright notice in the Description page of Project Settings.


#include "Both/PlayerHUD.h"
#include "../END2608.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "Kismet/GameplayStatics.h"

void UPlayerHUD::NativeConstruct()
{
	Super::NativeConstruct();

	//gain access to change colors
	DynamicMaterial = CrossHair->GetDynamicMaterial();
}

void UPlayerHUD::NativeTick(const FGeometry& Geo, float DeltaTime) {
	Super::NativeTick(Geo, DeltaTime);

	//UE_LOG(Game, Error, TEXT("is the Native Tick even working?"));

	//created variable for the ref
	FVector2D PixelPosition;
	FVector2D ViewPosition;

	USlateBlueprintLibrary::LocalToViewport(GetWorld(), CrossHair->GetCachedGeometry(),
		FVector2D(0,0), PixelPosition, ViewPosition);

	//doing math
	FVector2D ScreenPosition = (CrossHair->GetCachedGeometry().GetAbsoluteSize() * 0.5) + PixelPosition;


	//created variable for the ref
	FVector WorldPosition;
	FVector WorldDirection;

	UGameplayStatics::DeprojectScreenToWorld(GetOwningPlayer(), ScreenPosition, WorldPosition, WorldDirection);

	//get the end point by doing math 
	EndPoint = (WorldDirection * 100000) + WorldPosition;

	//array for owning player
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesParam;

	ObjectTypesParam.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));
	ObjectTypesParam.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));


	//Make an array AActors
	TArray<AActor*> ActorsToIgnoreParam;
	ActorsToIgnoreParam.Add(GetOwningPlayer());

	FHitResult OutHitParam;

	//make it a bool 
	bool DidRayCastHit = UKismetSystemLibrary::LineTraceSingleForObjects(GetWorld(), WorldPosition,
		EndPoint, ObjectTypesParam, false, ActorsToIgnoreParam, EDrawDebugTrace::None, OutHitParam, true);


	//made a yellow crosshair
	FLinearColor YellowCrossHair(1, 1, 0, 1);

	//branch
	if (DidRayCastHit) {//RayCast saw an enemy

		EndPoint = OutHitParam.Location;

		bool isPlayer = (OutHitParam.Component->GetCollisionObjectType() == ECollisionChannel::ECC_Pawn);//ECollisionChannel::ECC_Pawn
		bool isZaWorld = (OutHitParam.Component->GetCollisionObjectType() == ECollisionChannel::ECC_WorldDynamic);

		//if RayCast saw opponent 
		if (isPlayer) {

			//UE_LOG(Game, Log, TEXT("RayCast saw an enemy -----------Red"));

			//change it back to red indicating danger
			DynamicMaterial->SetVectorParameterValue(ColorName, DangerColor);

		}//else if raycast saw za World
		else if (isZaWorld) {

			//UE_LOG(Game, Error, TEXT("RayCast saw an ZaWorld -----------  ZaWorld"));

			//change it back to blue indicating danger
			DynamicMaterial->SetVectorParameterValue(ColorName, SafeColor);
		}

	}
	else {//RayCast did not see anything and/or the floor

		//UE_LOG(Game, Warning, TEXT("RayCast did not see anything and/or the floor"));

		//set EndPoint
		EndPoint = (WorldDirection * 100000) + WorldPosition;

		//change it back to yellow 
		DynamicMaterial->SetVectorParameterValue(ColorName, YellowCrossHair);
	}
}



void UPlayerHUD::SetHealth(float Percent)
{
	HealthBar->SetPercent(Percent);
	UE_LOG(Game, Warning, TEXT("HP is : %f"), HealthBar->Percent);
}

const FVector UPlayerHUD::GetDestination()
{
	return EndPoint;
}
