// Copyright Epic Games, Inc. All Rights Reserved.

#include "SizeProjectCharacter.h"
#include "SizeProjectProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"


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
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("PrimaryAction", IE_Pressed, this, &ASizeProjectCharacter::OnPrimaryAction);
	PlayerInputComponent->BindAction("OnAction", IE_Pressed, this, &ASizeProjectCharacter::OnAction);


	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ASizeProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ASizeProjectCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "Mouse" versions handle devices that provide an absolute delta, such as a mouse.
	// "Gamepad" versions are for devices that we choose to treat as a rate of change, such as an analog joystick
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
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ASizeProjectCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ASizeProjectCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ASizeProjectCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
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
		else if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility) && HitResult.GetActor()->ActorHasTag("Door"))
		{
			OpenDoor(HitResult);
		}
	}
	else
	{
		bHoldingItem = !bHoldingItem;
		CurrentItem->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
		CurrentItem->SetAllPhysicsLinearVelocity(FVector(0,0,0));
		PhysicsHandle->ReleaseComponent();
	}
}

FVector ASizeProjectCharacter::TargetLocation(FHitResult* Hit)
{
	FVector FinishLine = FirstPersonCameraComponent->GetComponentLocation() + FirstPersonCameraComponent->GetForwardVector() * 10000;
	
	FHitResult ThisHit;

	GetWorld()->LineTraceSingleByObjectType(ThisHit, FirstPersonCameraComponent->GetComponentLocation(), FinishLine, ECC_WorldStatic);

	float CurrentDistance = FVector::Dist(FirstPersonCameraComponent->GetComponentLocation(), CurrentItem->GetComponentLocation());
	float S = CurrentDistance / OriginalDistance;

	TargetScale = FVector(S,S,S);
	CurrentItem->SetWorldScale3D(TargetScale);

	return ThisHit.ImpactPoint - (FirstPersonCameraComponent->GetForwardVector() * Offset * TargetScale.X);
}

void ASizeProjectCharacter::OpenDoor(FHitResult Hit)
{
	
}

UPhysicsHandleComponent* ASizeProjectCharacter::GetPhysicsHandle() const
{
	UPhysicsHandleComponent* Result = FindComponentByClass<UPhysicsHandleComponent>();

	if (Result == nullptr)
		UE_LOG(LogTemp, Warning, TEXT("Physics handle component required !!!"));

	return Result;
}