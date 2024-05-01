// Lazy Pixel. All Rights Reserved.

#pragma once

#include "AITypes.h"
#include "StateTreeTaskBase.h"
#include "Weapon/WeaponCoreTypes.h"
#include "MoveTo_StateTreeTask.generated.h"

class UAITask_MoveTo;

USTRUCT()
struct FMoveTo_StateTreeTaskInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	AActor* GoalActor = nullptr;

	UPROPERTY(EditAnywhere, meta = (ClampMin = -1, Category = "Parameter"))
    float PrepareRadius = 200.f;

    UPROPERTY(EditAnywhere, meta = (ClampMin = 0, Category = "Parameter"))
    float DefaultWalkSpeed = 480.f;

    UPROPERTY(EditAnywhere, meta = (ClampMin = 0, Category = "Parameter"))
    float AttackWalkSpeed = 900.f;

	TWeakObjectPtr<UAITask_MoveTo> MoveToTask;
};

USTRUCT(meta = (DisplayName = "MoveTo", Category = "Boss"))
struct MAINPROJECT_API FMoveTo_StateTreeTask : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

    virtual bool Link(FStateTreeLinker& Linker) override;
	
	using FInstanceDataType = FMoveTo_StateTreeTaskInstanceData;

protected:
    TStateTreeExternalDataHandle<AActor> ActorHandle;
	
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const override;
	virtual EStateTreeRunStatus Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const override;
	virtual void ExitState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const override;

	ACharacter* GetCharacter(FStateTreeExecutionContext& Context) const;
};
