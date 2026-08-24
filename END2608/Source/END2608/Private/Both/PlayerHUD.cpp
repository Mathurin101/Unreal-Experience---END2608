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

void UPlayerHUD::NativeTick(FGeometry Geo,float DeltaTime) {
	Super::NativeTick(Geo, DeltaTime);
	
	UE_LOG(Game, Error, TEXT("is the Native Tick even working?"));

	//make it simpler to look at 
	auto& GEOCrossHair = CrossHair->GetCachedGeometry();

	//created variable for the ref
	FVector2D PixelPosition;
	FVector2D ViewPosition;


	USlateBlueprintLibrary::LocalToViewport(GetWorld(), CrossHair->GetCachedGeometry(), 
		GEOCrossHair.GetLocalSize(), PixelPosition, ViewPosition);

	//doing math
	FVector2D ScreenPosition = (USlateBlueprintLibrary::GetAbsoluteSize(GEOCrossHair) * 0.5 ) + PixelPosition;


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
	bool DidRayCastHit = UKismetSystemLibrary::LineTraceSingleForObjects(GetWorld(), WorldPosition, EndPoint, ObjectTypesParam,
		false, ActorsToIgnoreParam, EDrawDebugTrace::None , OutHitParam,
		true, FLinearColor(FVector3d()), FLinearColor(FVector3d()), 0.f);

	//made a yellow crosshair
	FLinearColor YellowCrossHair(1, 1, 0, 1);

	//branch
	if (DidRayCastHit) {//RayCast saw an enemy

		EndPoint = OutHitParam.Location;
	}
	else {//RayCast did not see anything and/or the floor

		//set EndPoint
		EndPoint = (WorldDirection * 100000) + WorldPosition;

		//change it back to yellow 
		DynamicMaterial->GetVectorParameterValue(ColorName, YellowCrossHair);
	}

	bool isPlayer = OutHitParam.Component->GetCollisionObjectType() == ECollisionChannel::ECC_Pawn;
	bool isZaWorld = OutHitParam.Component->GetCollisionObjectType() == ECollisionChannel::ECC_WorldDynamic;

	//if RayCast saw opponent 
	if (isPlayer) {
		
		//change it back to red indicating danger
		DynamicMaterial->GetVectorParameterValue(ColorName, DangerColor);

	}//else if raycast saw za World
	else if (isZaWorld) {

		//change it back to blue indicating danger
		DynamicMaterial->GetVectorParameterValue(ColorName, SafeColor);
	}
}



void UPlayerHUD::SetHealth(float Percent)
{
	HealthBar->SetPercent(Percent);
	UE_LOG(Game, Warning, TEXT("HP is : %f"), HealthBar->Percent);
}

FVector UPlayerHUD::GetDestination()
{
	return EndPoint;
}
