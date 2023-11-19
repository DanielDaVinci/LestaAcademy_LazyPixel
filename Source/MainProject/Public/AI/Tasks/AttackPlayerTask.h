// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AttackPlayerTask.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API UAttackPlayerTask : public UBTTaskNode
{
	GENERATED_BODY()

public:
    UAttackPlayerTask();
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector DistanceKey;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float DistanceThreshold;
};
