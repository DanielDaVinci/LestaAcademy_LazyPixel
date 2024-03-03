// Lazy Pixel. All Rights Reserved.

#include "AI/Characters/RangeAICharacter.h"
#include "Pickups/WeaponPickup.h"

void ARangeAICharacter::OnDeath()
{
    Super::OnDeath();

    if (pickupClass)
        GetWorld()->SpawnActor<AWeaponPickup>(pickupClass, GetActorLocation(), FRotator(), FActorSpawnParameters());
}
