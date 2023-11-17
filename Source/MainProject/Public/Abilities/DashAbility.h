// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActiveAbility.h"
#include "UObject/Object.h"
#include "DashAbility.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API UDashAbility : public UActiveAbility
{
    GENERATED_BODY()

    ACharacter* Character;
    
    virtual void Activate() override;
};
