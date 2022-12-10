// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADoor::ADoor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Open = false;
	ReadyState = true;

	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door Frame"));
	RootComponent = DoorFrame;

	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	Door->SetupAttachment(RootComponent);

	CurrentSpawnBox = NULL;
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();

	RotateValue = 0.f;

	if (DoorCurve)
	{
		FOnTimelineFloat TimelineCallback;
		FOnTimelineEventStatic TimelineCallbackFinished;

		TimelineCallback.BindUFunction(this, FName("DoorControl"));
		TimelineCallbackFinished.BindUFunction(this, FName("SetState"));

		Timeline.AddInterpFloat(DoorCurve, TimelineCallback);
		Timeline.SetTimelineFinishedFunc(TimelineCallbackFinished);
	}

}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Timeline.TickTimeline(DeltaTime);

}

void ADoor::DoorControl()
{
	TimelineValue = Timeline.GetPlaybackPosition();

	CurveFloatValue = RotateValue * DoorCurve->GetFloatValue(TimelineValue);

	FQuat NewRotation = FQuat(FRotator(0.f, CurveFloatValue, 0.f));

	Door->SetRelativeRotation(NewRotation);
}

void ADoor::SetState()
{
	ReadyState = true;
}

void ADoor::ToggleDoor()
{
	if (ReadyState)
	{
		Open = !Open;

		APawn* Pawn = UGameplayStatics::GetPlayerPawn(this, 0);
		FVector PawnLocation = Pawn->GetActorLocation();
		FVector Direction = GetActorLocation() - PawnLocation;
		Direction = UKismetMathLibrary::LessLess_VectorRotator(Direction, GetActorRotation());

		DoorRotation = Door->GetRelativeRotation();

		if (Open)
		{
			if (Direction.X > 0.f)
			{
				RotateValue = 1.f;
			}
			else
			{
				RotateValue = -1.f;
			}

			ReadyState = false;
			Timeline.PlayFromStart(); 
		}
		else
		{
			ReadyState = false;
			Timeline.Reverse();
		}
	}

	FHitResult Hit;

	if (GetWorld()->LineTraceSingleByObjectType(Hit, GetActorLocation(), -GetActorLocation() + GetActorUpVector() * 2, ECC_WorldDynamic) && Hit.GetActor()->ActorHasTag("SpawnBox"))
	{
		CurrentSpawnBox = Cast<ASpawnBox>(Hit.GetActor());

		CurrentSpawnBox->CanDestroy = false;

		FVector LocationForTeleport = GetActorLocation();

		CurrentSpawnBox->MoveActor(LocationForTeleport);
		
	}
	else
	{
		CurrentSpawnBox = NULL;
	}
}

