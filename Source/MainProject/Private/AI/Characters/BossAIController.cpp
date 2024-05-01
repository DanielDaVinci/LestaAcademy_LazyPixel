// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/BossAIController.h"

#include "Navigation/CrowdFollowingComponent.h"
#include "Components/StateTreeComponent.h"

ABossAIController::ABossAIController(const FObjectInitializer& ObjInit)
	: Super(ObjInit.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
    StateTreeComponent = CreateDefaultSubobject<UStateTreeComponent>(TEXT("StateTreeComponent"));
}

void ABossAIController::SendStateTreeEvent() 
{
    FGameplayTag Tag = FGameplayTag::RequestGameplayTag("BossHealthChanged");
    StateTreeComponent->SendStateTreeEvent(Tag);
}
