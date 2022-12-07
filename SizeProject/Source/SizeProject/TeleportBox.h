// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "GameFramework/Actor.h"
#include "SizeProjectCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/SpringArmComponent.h"
#include "TeleportBox.generated.h"

/**
 * 
 */
UCLASS()
class SIZEPROJECT_API ATeleportBox : public ATriggerBox
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	ATeleportBox();

	UFUNCTION()
		void EnterTeleport(AActor* OvelapedActor, AActor* OtherActor);
	UFUNCTION()
		void ExitTeleport(AActor* OvelapedActor, AActor* OtherActor);

	UFUNCTION(BlueprintCallable) void FindOtherTele();

	UPROPERTY(EditAnywhere, Category = "Teleport")
		ATeleportBox* OtherTele;

	UPROPERTY()
		bool Teleporting;


	UPROPERTY(EditAnywhere, Category = "Teleport")
		TSubclassOf<AActor> TeleportClass;

	TArray<AActor*> FoundActors;
};
