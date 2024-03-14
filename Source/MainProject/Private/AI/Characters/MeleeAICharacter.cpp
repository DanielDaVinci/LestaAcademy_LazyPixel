// Lazy Pixel. All Rights Reserved.

#include "AI/Characters/MeleeAICharacter.h"

#include "AIController.h"
#include "AI/Characters/MeleeAIController.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


AMeleeAICharacter::AMeleeAICharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit)
{
    AIControllerClass = AMeleeAIController::StaticClass();
    bUseControllerRotationYaw = false;

    if (GetCharacterMovement())
    {
        GetCharacterMovement()->bUseControllerDesiredRotation = true;
    }
}

void AMeleeAICharacter::OnDeath()
{
    Super::OnDeath();

    GetCharacterMovement()->DisableMovement();

    GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Ignore);

    const AMeleeAIController* MeleeAIController = Cast<AMeleeAIController>(Controller);
    MeleeAIController->BrainComponent->StopLogic("Death");
    
    GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetMesh()->SetSimulatePhysics(true);
}
