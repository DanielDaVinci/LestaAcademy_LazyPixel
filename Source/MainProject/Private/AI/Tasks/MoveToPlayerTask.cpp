// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/MoveToPlayerTask.h"

#include "AIController.h"
#include "ClassViewerFilter.h"
#include "AI/Tasks/AttackPlayerTask.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

UMoveToPlayerTask::UMoveToPlayerTask()
{
    NodeName = "Move To Player";
}

EBTNodeResult::Type UMoveToPlayerTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    const auto Controller = OwnerComp.GetAIOwner();
    const auto Blackboard = OwnerComp.GetBlackboardComponent();

    if (!Controller || !Blackboard)
        return EBTNodeResult::Failed;

    const auto PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    if (!PlayerPawn)
        return EBTNodeResult::Failed;
    
    const auto Distance = FVector::Dist(Controller->GetNavAgentLocation(), PlayerPawn->GetActorLocation());
    Blackboard->SetValueAsFloat(DistanceKey.SelectedKeyName, Distance);

    Controller->MoveToActor(PlayerPawn);
    return EBTNodeResult::Succeeded;
}
