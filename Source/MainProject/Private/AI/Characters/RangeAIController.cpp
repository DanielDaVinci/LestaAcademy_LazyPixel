// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/RangeAIController.h"

#include "AI/Characters/AIBaseCharacter.h"

void ARangeAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    if (const auto character = Cast<AAIBaseCharacter>(InPawn))
    {
        RunBehaviorTree(character->BehaviorTreeAsset);
    }
}
