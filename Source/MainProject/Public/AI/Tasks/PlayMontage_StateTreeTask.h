// Lazy Pixel. All Rights Reserved.

#pragma once

#include "AITypes.h"
#include "StateTreeTaskBase.h"
#include "Weapon/WeaponCoreTypes.h"
#include "PlayMontage_StateTreeTask.generated.h"

class ABaseCharacter;

USTRUCT()
struct FPlayMontage_StateTreeTaskInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
    UAnimMontage* AnimMontage;

	UPROPERTY(EditAnywhere, meta = (ClampMin = 0.0, Category = "Parameter"))
    float AnimationTime = 1.f;

	UPROPERTY(EditAnywhere, meta = (ClampMin = 0.0, Category = "Parameter"))
    float Damage = 10.0f;

	UPROPERTY(EditAnywhere, Category = "Parameter")
    AActor* GoalActor = nullptr;

	UPROPERTY(EditAnywhere, Category = "Parameter")
    bool isNeedRotation;
};

USTRUCT(meta = (DisplayName = "PlayMontage", Category = "Boss"))
struct MAINPROJECT_API FPlayMontage_StateTreeTask : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

    virtual bool Link(FStateTreeLinker& Linker) override;
	
	using FInstanceDataType = FPlayMontage_StateTreeTaskInstanceData;

protected:
    TStateTreeExternalDataHandle<AActor> ActorHandle;
	
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const override;
    virtual EStateTreeRunStatus Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const override;

	ABaseCharacter* GetCharacter(FStateTreeExecutionContext& Context) const;
};
