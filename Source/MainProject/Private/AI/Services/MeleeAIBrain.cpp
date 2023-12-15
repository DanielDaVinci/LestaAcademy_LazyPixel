// Lazy Pixel. All Rights Reserved.


#include "AI/Services/MeleeAIBrain.h"

#include "AIController.h"
#include "..\..\..\Public\AI\States\AIStates.h"
#include "AI/Characters/AIBaseCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Environment/Room.h"
#include "Kismet/GameplayStatics.h"

enum EAIStates : uint8;

UMeleeAIBrain::UMeleeAIBrain()
{
    NodeName = "AI Brain";
}

void UMeleeAIBrain::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    const auto blackboard = OwnerComp.GetBlackboardComponent();
    if (blackboard)
    {
        const auto player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
        
        if (player)
        {
            m_isPlayerEnteredRoom = Cast<AAIBaseCharacter>(OwnerComp.GetAIOwner()->GetPawn())->enemyRoom->IsEntered;
            blackboard->SetValueAsBool(isPlayerEnteredRoomKey.SelectedKeyName, m_isPlayerEnteredRoom);
            
            blackboard->SetValueAsObject(playerActorKey.SelectedKeyName, player);

            m_currentDistance = FVector::Dist(OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation(), player->GetActorLocation());
            blackboard->SetValueAsFloat(distanceKey.SelectedKeyName, m_currentDistance);

            blackboard->SetValueAsEnum(aiStateKey.SelectedKeyName, CalculateState());
        }
    }
    
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}

EAIStates UMeleeAIBrain::CalculateState() const
{
    if (m_currentDistance <= attackDistance)
        return Attack;

    if (m_currentDistance >= attackDistance && m_isPlayerEnteredRoom)
        return Chase;

    return Idle;
}
