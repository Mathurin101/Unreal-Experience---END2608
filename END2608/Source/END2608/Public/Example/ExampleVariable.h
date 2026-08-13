// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExampleVariable.generated.h"

UCLASS(abstract)
class END2608_API AExampleVariable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExampleVariable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Blueprint Read Only variables
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Variable|ReadOnly")
	bool VisibleAnywhere;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Variable|ReadOnly")
	uint8 VisibleDefaultsOnly;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Variable|ReadOnly")
	int32 VisibleInstanceOdd;

	UPROPERTY(VisibleInstanceOnly, Category = "Variable|ReadOnly")
	int64 VisibleInstanceOnly;

	
	//Blueprint Read write variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variable|ReadWrite")
	float EditAnywhere;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Variable|ReadWrite")
	FName EditDefaultsOdd;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Variable|ReadWrite")
	FString EditInstanceOdd;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Variable|ReadWrite")
	FText EditDefaultsOnly;

	UPROPERTY(EditInstanceOnly, Category = "Variable|ReadWrite")
	FVector EditInstanceOnly;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Variable| ClassReference")
	TSubclassOf<AActor> ClassType;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
