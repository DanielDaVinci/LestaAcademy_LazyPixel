// Lazy Pixel. All Rights Reserved.


#include "AI/Tasks/RangeEnemyAttackTask.h"

#include "AIController.h"
#include "NavigationSystem.h"
#include "AI/Characters/AIBaseCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Character/Player/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Navigation/PathFollowingComponent.h"

URangeEnemyAttackTask::URangeEnemyAttackTask()
{
    NodeName = "Range Enemy Attack Task";
}

EBTNodeResult::Type URangeEnemyAttackTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    const auto Controller = OwnerComp.GetAIOwner();
    const auto Blackboard = OwnerComp.GetBlackboardComponent();
    if (!Controller || !Blackboard)
        return EBTNodeResult::Failed;

    const auto PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (!PlayerPawn)
        return EBTNodeResult::Failed;

    const auto NavSys = UNavigationSystemV1::GetNavigationSystem(GetWorld());

    Controller->SetFocus(PlayerPawn);
    
    if (!CheckObstacles(OwnerComp))
    {
        FNavLocation Location;
        NavSys->GetRandomReachablePointInRadius(PlayerPawn->GetActorLocation(), 200, Location);
        Blackboard->SetValueAsVector(LocationKey.SelectedKeyName, Location.Location);
        Controller->MoveTo(Location.Location);
    }
    else
    {
        Controller->StopMovement();   
    }
    
    return EBTNodeResult::Succeeded;
}

bool URangeEnemyAttackTask::CheckObstacles(UBehaviorTreeComponent& OwnerComp)
{
    const auto aiCharacter = Cast<AAIBaseCharacter>(OwnerComp.GetAIOwner()->GetPawn());
    if (!aiCharacter)
        return false;

    FVector start = aiCharacter->GetMesh()->GetSocketLocation("lhWeaponSocket");
    FVector forward = aiCharacter->GetActorForwardVector();
    start = FVector(start.X + (forward.X * 100), start.Y + (forward.Y * 100), start.Z + (forward.Z * 100));
    FVector end = start + forward * 1000;
    FHitResult hitResult;

    bool actorHit = GetWorld()->LineTraceSingleByChannel(hitResult, start, end, ECC_OverlapAll_Deprecated, FCollisionQueryParams(), FCollisionResponseParams());
    DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 2, 0, 5);

    if (actorHit && hitResult.GetActor()->GetClass()->IsChildOf(APlayerCharacter::StaticClass()))
        return true;

    return false;
}