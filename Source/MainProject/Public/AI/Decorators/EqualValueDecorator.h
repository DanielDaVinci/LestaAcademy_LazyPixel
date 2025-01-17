// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EqualValueDecorator.generated.h"

enum EAIStates : uint8;

UCLASS()
class MAINPROJECT_API UEqualValueDecorator : public UBTDecorator
{
	GENERATED_BODY()

public:
    UEqualValueDecorator();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector targetKey;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    TEnumAsByte<EAIStates> targetValue;
    
    virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};
