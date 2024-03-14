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
}

void AMeleeAICharacter::OnDeath()
{
    Super::OnDeath();

    // GetCharacterMovement()->DisableMovement();

    // const AMeleeAIController* MeleeAIController = Cast<AMeleeAIController>(Controller);
    // MeleeAIController->BrainComponent->StopLogic("Death");
}
