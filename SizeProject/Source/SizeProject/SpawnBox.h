// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "SpawnBox.generated.h"

UCLASS()
class SIZEPROJECT_API ASpawnBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	UFUNCTION(BlueprintCallable) bool SpawnActor();

	UFUNCTION(BlueprintCallable) void EnableActorSpawning(bool Enable);

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float AvgSpawnTime = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float RandomSpawnTime = 1.f;


private:

	void ScheduleActorSpawn();

	UFUNCTION() void SpawnActorScheduled();
	
	UPROPERTY(EditDefaultsOnly) UBoxComponent* SpawnBox;
	
	UPROPERTY(EditAnywhere)	TSubclassOf<AActor> ActorClassToSpawn; //Zmieniæ na Tablicê obiektów do spawnowania.

	UPROPERTY(EditAnywhere) bool ShouldSpawn = true;

	FTimerHandle SpawnTimerHandle;
};
