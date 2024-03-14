// Lazy Pixel. All Rights Reserved.

#include "AI/Characters/RangeAICharacter.h"

#include "AI/Characters/RangeAIController.h"
#include "Pickups/WeaponPickup.h"

ARangeAICharacter::ARangeAICharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit)
{
    AIControllerClass = ARangeAIController::StaticClass();
}

void ARangeAICharacter::OnDeath()
{
    Super::OnDeath();

    SpawnPickup();
}

void ARangeAICharacter::SpawnPickup() const
{
    if (!GetWorld() || !pickupClass)
        return;
    
    GetWorld()->SpawnActor<AWeaponPickup>(pickupClass, GetActorLocation(), FRotator(), FActorSpawnParameters());
}
