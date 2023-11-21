// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/ActiveAbility.h"
#include "UObject/Object.h"
#include "DashAbility.generated.h"

UCLASS()
class MAINPROJECT_API UDashAbility : public UActiveAbility
{
    GENERATED_BODY()

public:
    virtual void Init(ABaseCharacter* Character) override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
    float dashImpulse = 2000.0f;

    virtual bool NativeActivate() override;
    
private:
    UPROPERTY()
    ABaseCharacter* m_character;
};
