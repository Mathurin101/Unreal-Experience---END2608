// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExampleFunctions.generated.h"

UCLASS()
class END2608_API AExampleFunctions : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExampleFunctions();

	UFUNCTION(BlueprintCallable)
	void BlueprintCallable();

	UFUNCTION(BlueprintImplementableEvent)
	void ImplementableEvent();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BlueprintNativeEvent();

	virtual void BlueprintNativeEvent_Implementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
