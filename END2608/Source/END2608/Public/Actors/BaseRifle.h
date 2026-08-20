// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../END2608.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BaseRifle.generated.h"

//Create delegate class and sets the signature
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegateEvent);

UCLASS()
class END2608_API ABaseRifle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseRifle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//create the Projectile class (prefab of the projectile) here to be casted and spawned in  
	UPROPERTY(EditAnywhere, Category = Default)
	TSubclassOf<AActor> ProjectileClass;

	//needed to give and get the mesh from the editor/code 
	UPROPERTY(EditAnywhere, Category = Default)
	USkeletalMeshComponent* SkellyMesh;

	//get the main or self in this case
	APawn* PawnParent;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SpawnBullet();

	const bool CanShoot();//pure function

	//need this to bind the function 
	FDelegateEvent OnRifleAttack;

	

private:

	//controlls the projectile
	bool ActionHappening = false;


	//Timer things
	//call this method in the 
	UFUNCTION()
	void ActionStopped();
	
	
	float RestTimer = 2.0f;

	//need this object to bind the function that will be called when the timer rests
	FTimerDynamicDelegate TimeDelegateObject;
};
