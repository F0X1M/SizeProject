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

public:
	UFUNCTION(BlueprintCallable) void CreateActor();
	UFUNCTION(BlueprintCallable) void DestroyActors();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Object To Spawn") TMap<TSubclassOf<AActor>, int32> ObjectsToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanBeSpawned = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanDestroy = true;
	
private:
	UPROPERTY(EditDefaultsOnly) UBoxComponent* SpawnBox;

	FHitResult HitResult;

};
