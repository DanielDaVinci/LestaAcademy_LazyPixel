// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseAbility.generated.h"

class ABaseCharacter;
class UAbilityComponent;

UCLASS(Abstract, meta=(Blueprintable))
class MAINPROJECT_API UBaseAbility : public UObject
{
    GENERATED_BODY()

public:
    void Initialize(ABaseCharacter* Character);

protected:
    ABaseCharacter* GetCharacter() const { return m_character; }

    virtual void NativeInitialize() {}
    virtual void BeginPlay() {}

private:
    UPROPERTY()
    ABaseCharacter* m_character = nullptr;

protected:
    friend UAbilityComponent;
    
    virtual UWorld* GetWorld() const override;
};
