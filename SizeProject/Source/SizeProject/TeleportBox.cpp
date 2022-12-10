#include "TeleportBox.h"

ATeleportBox::ATeleportBox()
{
	OnActorBeginOverlap.AddDynamic(this, &ATeleportBox::EnterTeleport);
	OnActorEndOverlap.AddDynamic(this, &ATeleportBox::ExitTeleport);
	Teleporting = false;
	FindOtherTele();
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
	
	
}

// sprawdzanie czy jest wiêcej od 0 je¿eli tak to ma przypisaæ OtherTele,
// Dodanie wizualizacji portalu, 