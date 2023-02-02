// Copyright Epic Games, Inc. All Rights Reserved.

#include "SizeProjectCharacter.h"
#include "SizeProjectProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "DrawDebugHelpers.h"


//////////////////////////////////////////////////////////////////////////
// ASizeProjectCharacter

ASizeProjectCharacter::ASizeProjectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	TurnRateGamepad = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	CurrentDoor = NULL;
}

void ASizeProjectCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

void ASizeProjectCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();

	

	if (PhysicsHandle && PhysicsHandle->GetGrabbedComponent())
	{
		PhysicsHandle->SetTargetLocationAndRotation(TargetLocation(&HitResult),FirstPersonCameraComponent->GetComponentRotation());
	}
}

//////////////////////////////////////////////////////////////////////////// Input

void ASizeProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("PickUp", IE_Pressed, this, &ASizeProjectCharacter::PickUp);
	PlayerInputComponent->BindAction("OnAction", IE_Pressed, this, &ASizeProjectCharacter::OnAction);

	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ASizeProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ASizeProjectCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &ASizeProjectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &ASizeProjectCharacter::LookUpAtRate);
}

void ASizeProjectCharacter::OnPrimaryAction()
{
	// Trigger the OnItemUsed Event
	OnUseItem.Broadcast();
}

void ASizeProjectCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnPrimaryAction();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void ASizeProjectCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

void ASizeProjectCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ASizeProjectCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ASizeProjectCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ASizeProjectCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

bool ASizeProjectCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ASizeProjectCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &ASizeProjectCharacter::EndTouch);

		return true;
	}
	
	return false;
}

void ASizeProjectCharacter::OnAction()
{
	if (!Picked)
	{
		UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();

		if (PhysicsHandle && !bHoldingItem)
		{
			FVector Start = FirstPersonCameraComponent->GetComponentLocation();
			FVector End = Start + FirstPersonCameraComponent->GetForwardVector() * 4000;

			if (GetWorld()->LineTraceSingleByObjectType(HitResult, Start, End, ECC_PhysicsBody))
			{
				bHoldingItem = !bHoldingItem;

				PhysicsHandle->GrabComponentAtLocation(HitResult.GetComponent(), NAME_None, HitResult.ImpactPoint);
				CurrentItem = PhysicsHandle->GetGrabbedComponent();
				OriginalDistance = FVector::Dist(FirstPersonCameraComponent->GetComponentLocation(), CurrentItem->GetComponentLocation());

				CurrentItem->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
			}
		}
		else
		{
			bHoldingItem = !bHoldingItem;
			CurrentItem->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
			CurrentItem->SetAllPhysicsLinearVelocity(FVector(0, 0, 0));
			PhysicsHandle->ReleaseComponent();
		}
	}
	else
		PickUp();
}

void ASizeProjectCharacter::PickUp()
{
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();

	if (PhysicsHandle && !bHoldingItem)
	{
		FVector Start = FirstPersonCameraComponent->GetComponentLocation();
		FVector End = Start + FirstPersonCameraComponent->GetForwardVector() * 4000;
		
		if (GetWorld()->LineTraceSingleByObjectType(HitResult, Start, End, ECC_PhysicsBody))
		{
			bHoldingItem = !bHoldingItem;
			Picked = true;

			PhysicsHandle->GrabComponentAtLocation(HitResult.GetComponent(), NAME_None, HitResult.ImpactPoint);
			CurrentItem = PhysicsHandle->GetGrabbedComponent();
			OriginalDistance = FVector::Dist(FirstPersonCameraComponent->GetComponentLocation(), CurrentItem->GetComponentLocation());

			CurrentItem->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
		}	
		else if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility) && HitResult.GetActor()->ActorHasTag("Door"))
		{
			DrawDebugLine(GetWorld(), Start, End, FColor::Red, 1, 10, 1);
			if (HitResult.GetActor()->GetClass()->IsChildOf(ADoor::StaticClass()))
			{

				CurrentDoor = Cast<ADoor>(HitResult.GetActor());
				CurrentDoor->ToggleDoor();
				
			}
		}
	}
	else
	{
		bHoldingItem = !bHoldingItem;
		CurrentItem->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
		CurrentItem->SetAllPhysicsLinearVelocity(FVector(0, 0, 0));
		PhysicsHandle->ReleaseComponent();
		Picked = false;
		CurrentDoor = NULL;
	}
}

FVector ASizeProjectCharacter::TargetLocation(FHitResult* Hit)
{
	if (!Picked)
	{
		FVector FinishLine = FirstPersonCameraComponent->GetComponentLocation() + FirstPersonCameraComponent->GetForwardVector() * 10000;
	
		FHitResult ThisHit;
	
		GetWorld()->LineTraceSingleByObjectType(ThisHit, FirstPersonCameraComponent->GetComponentLocation(), FinishLine, ECC_WorldStatic);

		float CurrentDistance = FVector::Dist(FirstPersonCameraComponent->GetComponentLocation(), CurrentItem->GetComponentLocation());
		float S = CurrentDistance / OriginalDistance;

		TargetScale = FVector(S, S, S);
		CurrentItem->SetWorldScale3D(TargetScale);

		return ThisHit.ImpactPoint - (FirstPersonCameraComponent->GetForwardVector() * Offset * TargetScale.X);
	}
	else
	{
		return FirstPersonCameraComponent->GetComponentLocation() + FirstPersonCameraComponent->GetForwardVector() * OriginalDistance;
	}
}

UPhysicsHandleComponent* ASizeProjectCharacter::GetPhysicsHandle() const
{
	UPhysicsHandleComponent* Result = FindComponentByClass<UPhysicsHandleComponent>();

	if (Result == nullptr)
		UE_LOG(LogTemp, Warning, TEXT("Physics handle component required !!!"));

	return Result;
}

// zabroniæ niszczenia obiektu,
// otwieranie drzwi,
// podnoszenie obiektu bez skalowania ###Zrobione