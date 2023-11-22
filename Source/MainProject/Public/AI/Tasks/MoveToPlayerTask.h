// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "MoveToPlayerTask.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API UMoveToPlayerTask : public UBTTaskNode
{
    GENERATED_BODY()

public:
    UMoveToPlayerTask();
    
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector DistanceKey;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector PlayerKey;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float Threshold = 200.0f;
};
