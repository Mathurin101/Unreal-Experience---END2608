// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Projectile.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFrameWork/ProjectileMovementComponent.h"
#include "../END2608.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;

	SphereCollision = CreateDefaultSubobject<USphereComponent>("SphereCollision");
	SetRootComponent(SphereCollision);
	

	static ConstructorHelpers::FObjectFinder<UStaticMesh>Asset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));

	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>("SphereMesh");
	SphereMesh->SetCollisionProfileName("NoCollision");
	SphereMesh->SetupAttachment(SphereCollision);
	SphereMesh->SetRelativeScale3D(FVector(0.6f,0.6f,0.6f));
	SphereMesh->SetStaticMesh(Asset.Object);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovement");
	ProjectileMovement->ProjectileGravityScale = 0.0f;
	ProjectileMovement->InitialSpeed = 1900.0f;
	ProjectileMovement->MaxSpeed = 1900.0f;

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	FTimerHandle ProjectileTimer;

	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::HandleHit);
	//SphereCollision->SetCollisionProfileName("BlockAllDynamic");
	SphereCollision->SetCollisionProfileName("OverlapAllDynamic");

	SphereCollision->SetWorldScale3D(Size);

	GetWorld()->GetTimerManager().SetTimer(ProjectileTimer, this, &AProjectile::K2_DestroyActor, DestroyTimer);
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::HandleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBody, bool FromSweep, const FHitResult& Hit)
{               
	//(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass)
	UGameplayStatics::ApplyDamage(OtherActor, Damage, GetInstigatorController(), this, UDamageType::StaticClass());

	UE_LOG(Game, Log, TEXT("Destroy on the code side"));
	Destroy();
}

