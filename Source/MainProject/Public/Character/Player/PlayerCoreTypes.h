﻿#pragma once

#include "PlayerCoreTypes.generated.h"

class ABaseWeapon;

USTRUCT(BlueprintType)
struct FWeaponData
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TSubclassOf<ABaseWeapon> WeaponClass;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    FName WeaponAttachPointName;
};

UENUM()
enum EStatePriority: int32
{
    Light  = 0,
    Medium = 1,
    Hard   = 2,
    Force  = 3
};

DECLARE_MULTICAST_DELEGATE(FOnStartStateSignature)
DECLARE_MULTICAST_DELEGATE(FOnEndStateSignature)

USTRUCT()
struct FState
{
    GENERATED_BODY()

public:
    float LifeTime;
    EStatePriority Priority;
    
private:
    int32 Id;

public:
    explicit FState(const float LifeTime = 0.1f, const EStatePriority& Priority = EStatePriority::Light)
    {
        static int32 idIterator = 0;
        Id = idIterator++;

        this->LifeTime = LifeTime;
        this->Priority = Priority;
    }

    bool operator == (const FState& Other) const
    {
        return Id == Other.Id;
    }

    auto operator < (const FState& Other) const
    {
        return Priority < Other.Priority || (Priority == Other.Priority && Id > Other.Id);
    }

    static class Comparator
    {
    public:
        bool operator () (FState* left, FState* right) const
        {
            return *left < *right;
        }
    };
    
    FOnStartStateSignature OnStartState;
    FOnEndStateSignature OnEndState;
};