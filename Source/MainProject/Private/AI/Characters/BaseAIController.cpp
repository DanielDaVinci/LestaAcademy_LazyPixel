// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/BaseAIController.h"

#include "AI/Characters/AIBaseCharacter.h"
#include "Navigation/CrowdFollowingComponent.h"

ABaseAIController::ABaseAIController(const FObjectInitializer& ObjInit)
    : Super(ObjInit.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
    
}

void ABaseAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    if (const auto pCharacter = Cast<AAIBaseCharacter>(InPawn))
    {
        RunBehaviorTree(pCharacter->BehaviorTreeAsset);
    }
}
