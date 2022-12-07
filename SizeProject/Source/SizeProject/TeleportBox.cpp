#include "TeleportBox.h"

ATeleportBox::ATeleportBox()
{
	OnActorBeginOverlap.AddDynamic(this, &ATeleportBox::EnterTeleport);
	OnActorEndOverlap.AddDynamic(this, &ATeleportBox::ExitTeleport);
	Teleporting = false;
}

void ATeleportBox::BeginPlay()
{
	Super::BeginPlay();
}

void ATeleportBox::EnterTeleport(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor && OtherActor != this)
	{
		if (OtherTele)
		{
			ASizeProjectCharacter* Character = Cast<ASizeProjectCharacter>(OtherActor);

			if (Character && !OtherTele->Teleporting)
			{
				Teleporting = true;
				Character->SetActorRotation(OtherTele->GetActorRotation());
				Character->GetController()->SetControlRotation(Character->GetActorRotation());
				Character->SetActorLocation(OtherTele->GetActorLocation());
			}
		}
	}
}

void ATeleportBox::ExitTeleport(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor && OtherActor != this)
	{
		if (OtherTele && !Teleporting)
		{
			OtherTele->Teleporting = false;
		}
	}
}

void ATeleportBox::FindOtherTele()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), TeleportClass, FoundActors);
	
	for (auto actor : FoundActors)
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor: %s"), *actor->GetActorNameOrLabel());
	}
}

// sprawdzanie czy jest wiêcej od 0 je¿eli tak to ma przypisaæ OtherTele,
// Dodanie wizualizacji portalu, 