// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/RangeAICharacter.h"

#include "AI/Characters/RangeAIController.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Pickups/WeaponPickup.h"

ARangeAICharacter::ARangeAICharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit)
{
    AIControllerClass = ARangeAIController::StaticClass();
    bUseControllerRotationYaw = false;

    if (GetCharacterMovement())
    {
        GetCharacterMovement()->bUseControllerDesiredRotation = true;
    }
}

void ARangeAICharacter::OnDeath()
{
    Super::OnDeath();

    GetCharacterMovement()->DisableMovement();

    GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Ignore);
    GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetMesh()->SetSimulatePhysics(true);

    if (pickupClass)
        GetWorld()->SpawnActor<AWeaponPickup>(pickupClass, GetActorLocation(), FRotator(), FActorSpawnParameters());
}
