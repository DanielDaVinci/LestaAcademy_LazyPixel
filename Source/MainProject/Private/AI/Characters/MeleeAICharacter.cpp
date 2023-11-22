// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Characters/MeleeAICharacter.h"

#include "AIController.h"
#include "AI/Characters/MeleeAIController.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


AMeleeAICharacter::AMeleeAICharacter()
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
    
    GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetMesh()->SetSimulatePhysics(true);
}
