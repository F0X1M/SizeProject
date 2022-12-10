// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnBox.h"
#include "Engine/DecalActor.h"
#include "Components/TimelineComponent.h"
#include "Door.generated.h"

UCLASS()
class SIZEPROJECT_API ADoor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* DoorFrame;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Door;

	UPROPERTY(EditAnywhere)
		UCurveFloat* DoorCurve;

	UFUNCTION()
		void DoorControl();

	UFUNCTION()
		void ToggleDoor();

	UFUNCTION()
		void SetState();

	bool Open;
	bool ReadyState;
	float RotateValue;
	float CurveFloatValue;
	float TimelineValue;

	FRotator DoorRotation;
	
	UPROPERTY(EditAnywhere)
		FTimeline Timeline;

	UPROPERTY()
		class ASpawnBox* CurrentSpawnBox;

	//UPROPERTY(EditAnywhere, Category = "Searching")
	//	TSubclassOf<ADecalActor> DecalClass;

	AActor* ActorToFind;

	TArray<AActor*> FoundActors;
};
