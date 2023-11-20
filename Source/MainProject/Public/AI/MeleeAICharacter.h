// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MeleeAICharacter.generated.h"

UCLASS()
class MAINPROJECT_API AMeleeAICharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AMeleeAICharacter(const FObjectInitializer& ObjInit);
};
