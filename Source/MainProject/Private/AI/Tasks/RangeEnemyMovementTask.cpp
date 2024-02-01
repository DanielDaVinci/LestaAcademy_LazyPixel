// Lazy Pixel. All Rights Reserved.


#include "AI/Tasks/RangeEnemyMovementTask.h"

#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Navigation/PathFollowingComponent.h"

URangeEnemyMovementTask::URangeEnemyMovementTask()
{
    NodeName = "Range Enemy Movement";
}

EBTNodeResult::Type URangeEnemyMovementTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    const auto Controller = OwnerComp.GetAIOwner();
    const auto Blackboard = OwnerComp.GetBlackboardComponent();
    if (!Controller || !Blackboard)
        return EBTNodeResult::Failed;

    const auto PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (!PlayerPawn)
        return EBTNodeResult::Failed;
    
    Controller->MoveTo(PlayerPawn->GetActorLocation());

    if (FVector::Dist(PlayerPawn->GetActorLocation(), Controller->GetPawn()->GetActorLocation()) < stoppingDistance)
        Controller->StopMovement();

    return EBTNodeResult::Succeeded;
}
