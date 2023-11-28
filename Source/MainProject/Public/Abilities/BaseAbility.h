// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseAbility.generated.h"

class ABaseCharacter;

UCLASS(Blueprintable)
class MAINPROJECT_API UBaseAbility : public UObject
{
    GENERATED_BODY()

public:
    virtual void Init(ABaseCharacter* Character);

protected:
    ABaseCharacter* GetCharacter() const { return m_character; };

private:
    UPROPERTY()
    ABaseCharacter* m_character = nullptr;

protected:
    virtual UWorld* GetWorld() const override;
};
