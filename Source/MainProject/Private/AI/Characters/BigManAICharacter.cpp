// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/BigManAICharacter.h"

#include "AI/Characters/BigManAIController.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ABigManAICharacter::ABigManAICharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit)
{
    AIControllerClass = ABigManAIController::StaticClass();
    bUseControllerRotationYaw = false;

    if (GetCharacterMovement())
        GetCharacterMovement()->bUseControllerDesiredRotation = true;
}

void ABigManAICharacter::OnDeath()
{
    Super::OnDeath();

    GetCharacterMovement()->DisableMovement();

    GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Ignore);

    GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetMesh()->SetSimulatePhysics(true);
}
