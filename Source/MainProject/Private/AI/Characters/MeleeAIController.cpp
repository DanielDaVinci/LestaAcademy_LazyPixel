// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Characters/MeleeAIController.h"

#include "AI/Characters/AIBaseCharacter.h"
#include "AI/Characters/MeleeAICharacter.h"
#include "Navigation/CrowdFollowingComponent.h"

AMeleeAIController::AMeleeAIController(const FObjectInitializer& ObjInit)
    : Super(ObjInit.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
}

void AMeleeAIController::AttackPlayer()
{
    GEngine->AddOnScreenDebugMessage(1, 1.0f, FColor::Red, TEXT("Attacking"));
}

void AMeleeAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    const auto character = Cast<AMeleeAICharacter>(InPawn);
    if (character)
    {
        RunBehaviorTree(character->BehaviorTreeAsset);
    }
}
