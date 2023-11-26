// Lazy Pixel. All Rights Reserved.


#include "AI/Services/FindPlayerService.h"

#include "AIController.h"
#include "..\..\..\Public\AI\States\AIStates.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

enum EAIStates : uint8;

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

            m_currentDistance = FVector::Dist(OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation(), player->GetActorLocation());
            blackboard->SetValueAsFloat(distanceKey.SelectedKeyName, m_currentDistance);

            blackboard->SetValueAsEnum(aiStateKey.SelectedKeyName, CalculateState());
        }
    }
    
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}

EAIStates UFindPlayerService::CalculateState() const
{
    if (m_currentDistance <= attackDistance)
        return Attack;

    if (m_currentDistance >= attackDistance && m_currentDistance < aggroDistance)
        return Chase;

    return Idle;
}
