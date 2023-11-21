// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "GameFramework/Character.h"
#include "MeleeAICharacter.generated.h"

UCLASS()
class MAINPROJECT_API AMeleeAICharacter : public ABaseCharacter
{
    GENERATED_BODY()

public:
    AMeleeAICharacter(const FObjectInitializer& ObjInit);

};
