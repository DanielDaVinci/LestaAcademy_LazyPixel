// Lazy Pixel. All Rights Reserved.


#include "AI/Services/RangeAIBrain.h"

#include "AIController.h"
#include "AIHelpers.h"
#include "AI/Characters/AIBaseCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Character/Player/PlayerCharacter.h"
#include "Environment/Room.h"
#include "Kismet/GameplayStatics.h"

URangeAIBrain::URangeAIBrain()
{
    NodeName = "Range AI Brain";
}

void URangeAIBrain::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    UpdateValues(OwnerComp);
    
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}

EAIStates URangeAIBrain::CalculateState() const
{
    if (m_currentDistance > attackDistance && m_isPlayerEnteredRoom)
        return Moving;
        
    if (m_currentDistance <= attackDistance)
        return Attack;

    return Idle;
}

void URangeAIBrain::UpdateValues(UBehaviorTreeComponent& OwnerComp)
{
    const auto blackboard = OwnerComp.GetBlackboardComponent();
    if (!blackboard)
        return;
    
    const auto player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (!player)
        return;

    const auto aiCharacter = Cast<AAIBaseCharacter>(OwnerComp.GetAIOwner()->GetPawn());
    if (!aiCharacter)
        return;

    const auto room = aiCharacter->enemyRoom;
    if (!room)
        return;

    m_isPlayerEnteredRoom = room->IsEntered();
    blackboard->SetValueAsBool(isPlayerEnteredRoomKey.SelectedKeyName, m_isPlayerEnteredRoom);
        
    blackboard->SetValueAsObject(playerActorKey.SelectedKeyName, player);

    m_currentDistance = FVector::Dist(OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation(), player->GetActorLocation());
    blackboard->SetValueAsFloat(distanceKey.SelectedKeyName, m_currentDistance);

    blackboard->SetValueAsEnum(aiStateKey.SelectedKeyName, CalculateState());
}

