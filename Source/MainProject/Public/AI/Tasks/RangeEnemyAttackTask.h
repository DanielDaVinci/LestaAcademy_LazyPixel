// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Engine/SkeletalMeshSocket.h"
#include "RangeEnemyAttackTask.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API URangeEnemyAttackTask : public UBTTaskNode
{
	GENERATED_BODY()

public:
    URangeEnemyAttackTask();
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector LocationKey;
private:
    bool CheckObstacles(UBehaviorTreeComponent& OwnerComp);
};
