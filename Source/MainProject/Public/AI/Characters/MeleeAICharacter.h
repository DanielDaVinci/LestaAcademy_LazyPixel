// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIBaseCharacter.h"
#include "MeleeAICharacter.generated.h"

class UBehaviorTree;

UCLASS()
class MAINPROJECT_API AMeleeAICharacter : public AAIBaseCharacter
{
    GENERATED_BODY()

public:
    AMeleeAICharacter();

    virtual void OnDeath() override;
};
