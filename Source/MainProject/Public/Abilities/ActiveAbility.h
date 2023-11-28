// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAbility.h"
#include "UObject/Object.h"
#include "ActiveAbility.generated.h"

UCLASS()
class MAINPROJECT_API UActiveAbility : public UBaseAbility
{
    GENERATED_BODY()

public:
    virtual void Init(ABaseCharacter* Character) override;

    /** Activate ability and reload */
    virtual void Activate();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveAbility", meta = (ClampMin="0.0"))
    float reloadTime = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveAbility", meta = (ClampMin="1"))
    int activationAmount = 1;

    float m_timerTimeUpdate = 0.01;
    
    /**
     * Called when activation is possible
     * @return Is activation successful
     */
    virtual bool NativeActivate() { return true; }

private:
    FTimerHandle m_reloadTimerHandle;
    
    float m_currentReloadTime;
    float m_currentActivationAmount;

    /** Called every timer update */
    void TickReloadTimer();
};
