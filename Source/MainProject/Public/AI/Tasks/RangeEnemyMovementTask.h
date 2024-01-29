// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "RangeEnemyMovementTask.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API URangeEnemyMovementTask : public UBTTaskNode
{
	GENERATED_BODY()

public:
    URangeEnemyMovementTask();
    
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AI")
    float stoppingDistance = 1000.0f;
};
