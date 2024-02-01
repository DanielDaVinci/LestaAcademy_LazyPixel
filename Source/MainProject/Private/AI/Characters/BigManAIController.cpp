// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/BigManAIController.h"

#include "AI/Characters/AIBaseCharacter.h"

void ABigManAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    const auto character = Cast<AAIBaseCharacter>(InPawn);
    if (character)
    {
        RunBehaviorTree(character->BehaviorTreeAsset);
    }
}
