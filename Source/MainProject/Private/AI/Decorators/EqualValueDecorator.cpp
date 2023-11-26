// Lazy Pixel. All Rights Reserved.


#include "AI/Decorators/EqualValueDecorator.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"

UEqualValueDecorator::UEqualValueDecorator()
{
    NodeName = "Equal Value";
}

bool UEqualValueDecorator::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
    const auto blackboard = OwnerComp.GetBlackboardComponent();
    if (!blackboard)
        return false;

    const auto value = blackboard->GetValueAsEnum(targetKey.SelectedKeyName);

    return value == targetValue;
}