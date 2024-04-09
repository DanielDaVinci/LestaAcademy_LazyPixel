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

    if (UpdateDropRate())
        SpawnPickup();
}

void ARangeAICharacter::SpawnPickup() const
{
    if (!GetWorld() || !pickupClass)
        return;
    
    GetWorld()->SpawnActor<AWeaponPickup>(pickupClass, GetActorLocation(), FRotator(), FActorSpawnParameters());
}

bool ARangeAICharacter::UpdateDropRate()
{
    bool result = false;
    float initRate = curDropRate; 
    
    float Rand = FMath::RandRange(minDropRate, maxDropRate);
    //UE_LOG(LogTemp, Warning, TEXT("Roll %f of %f"), Rand, curDropRate);
    if (Rand >= curDropRate)
    {
        curDropRate += dropRateStep;
        result = true;
    }
    else
    {
        curDropRate -= dropRateStep;
        result = false;
    }

    if (initRate == minDropRate || initRate == maxDropRate)
        InitDropRate();

    return result;
}
