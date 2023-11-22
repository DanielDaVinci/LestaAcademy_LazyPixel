// Lazy Pixel. All Rights Reserved.


#include "AI/Services/FindPlayerService.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

UFindPlayerService::UFindPlayerService()
{
    NodeName = "Find Player";
}

void UFindPlayerService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    const auto blackboard = OwnerComp.GetBlackboardComponent();
    if (blackboard)
    {
        const auto player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
        if (player)
        {
            blackboard->SetValueAsObject(playerActorKey.SelectedKeyName, player);
            
            float distance = FVector::Dist(OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation(), player->GetActorLocation());
            blackboard->SetValueAsFloat(distanceKey.SelectedKeyName, distance);
            
            if (distance <= attackDistance)
            {
                blackboard->SetValueAsBool(canAttackKey.SelectedKeyName, true);
                blackboard->SetValueAsBool(canMoveKey.SelectedKeyName, false);
            }
            else if (distance <= moveDistance)
            {
                blackboard->SetValueAsBool(canAttackKey.SelectedKeyName, false);
                blackboard->SetValueAsBool(canMoveKey.SelectedKeyName, true);
            }
            else
            {
                blackboard->SetValueAsBool(canAttackKey.SelectedKeyName, false);
                blackboard->SetValueAsBool(canMoveKey.SelectedKeyName, false);
            }
        }
    }
    
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}
