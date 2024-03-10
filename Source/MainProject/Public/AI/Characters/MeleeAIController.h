// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MeleeAIController.generated.h"

UCLASS()
class MAINPROJECT_API AMeleeAIController : public AAIController
{
    GENERATED_BODY()
    AMeleeAIController(const FObjectInitializer& ObjInit);

public:
    void AttackPlayer();

protected:
    virtual void OnPossess(APawn* InPawn) override;
};
