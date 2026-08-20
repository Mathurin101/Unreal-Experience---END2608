// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseAgent.h"

ABaseAgent::ABaseAgent() {
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PrimaryActorTick.bStartWithTickEnabled = true;

	//AgentColor.R = 0.155043;
	//AgentColor.G = 0.417973;
	//AgentColor.B = 1.0;
	//AgentColor.A = 1.0;

	
}

void ABaseAgent::PostLoad() {

	Super::PostLoad();

	FVector AgentVecColor = FVector(AgentColor.R, AgentColor.G, AgentColor.B);

	GetMesh()->SetVectorParameterValueOnMaterials(TintName, AgentVecColor);
}

void  ABaseAgent::Tick(float DeltaTime) {

	//Parent: Tick
	Super::Tick(DeltaTime);

	Rifle->SpawnBullet();
}