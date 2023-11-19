// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/AttackPlayerTask.h"

#include "AI/MeleeAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UAttackPlayerTask::UAttackPlayerTask()
{
    DistanceThreshold = 100.0f;
    NodeName = "Attack Player";
}

EBTNodeResult::Type UAttackPlayerTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    const auto Controller = Cast<AMeleeAIController>(OwnerComp.GetAIOwner());
    const auto Blackboard = OwnerComp.GetBlackboardComponent();

    if (!Controller || !Blackboard)
        return EBTNodeResult::Failed;

    if (Blackboard->GetValueAsFloat(DistanceKey.SelectedKeyName) > DistanceThreshold)
        return EBTNodeResult::Failed;

    Controller->AttackPlayer();
    return EBTNodeResult::Succeeded;
}

