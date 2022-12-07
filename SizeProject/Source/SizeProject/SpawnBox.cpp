// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnBox.h"

// Sets default values
ASpawnBox::ASpawnBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	SpawnBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnBox"));
	RootComponent = SpawnBox;
}

// Called when the game starts or when spawned
void ASpawnBox::BeginPlay()
{
	Super::BeginPlay();
}


void ASpawnBox::CreateActor()
{
	if (CanBeSpawned)
	{
		auto it = ObjectsToSpawn.CreateConstIterator();
		for (const TPair<TSubclassOf<AActor>, int32>& obj : ObjectsToSpawn)
		{
			for (int i = 0; i < obj.Value; i++)
			{
				int ObjSize = FMath::RandRange(1, 3);

				FTransform Transform;
				Transform.SetScale3D(FVector(ObjSize, ObjSize, ObjSize));

				FBoxSphereBounds BoxBounds = SpawnBox->CalcBounds(GetActorTransform());

				FVector SpawnLocation = BoxBounds.Origin;
				SpawnLocation.X += -BoxBounds.BoxExtent.X + 2 * BoxBounds.BoxExtent.X * FMath::FRand();
				SpawnLocation.Y += -BoxBounds.BoxExtent.Y + 2 * BoxBounds.BoxExtent.Y * FMath::FRand();
				SpawnLocation.Z += -BoxBounds.BoxExtent.Z + 2 * BoxBounds.BoxExtent.Z * FMath::FRand();

				Transform.SetLocation(SpawnLocation);

				GetWorld()->SpawnActor(obj.Key, &Transform);
			}
		}
		CanBeSpawned = false;
	}
}

void ASpawnBox::DestroyActors()
{
	FCollisionShape Sphere = FCollisionShape::MakeSphere(40);

	if (GetWorld()->SweepSingleByChannel(HitResult, GetActorLocation(), GetActorLocation() + FVector::UpVector, FQuat::Identity, ECC_GameTraceChannel2, Sphere) && CanDestroy)
	{
		HitResult.GetActor()->Destroy();
		if (GetWorld()->SweepSingleByChannel(HitResult, GetActorLocation(), GetActorLocation() + FVector::UpVector, FQuat::Identity, ECC_GameTraceChannel2, Sphere))
		{
			HitResult.GetActor()->Destroy();
		}
		CanBeSpawned = true;
	}
}

