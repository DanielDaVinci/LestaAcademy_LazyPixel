// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAbility.h"
#include "UObject/Object.h"
#include "ActiveAbility.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API UActiveAbility : public UBaseAbility
{
    GENERATED_BODY()

    virtual void Activate(){};
};
