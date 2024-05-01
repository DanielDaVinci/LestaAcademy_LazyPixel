// Lazy Pixel. All Rights Reserved.

#pragma once

#include "AITypes.h"
#include "StateTreeTaskBase.h"
#include "Weapon/WeaponCoreTypes.h"
#include "Attack_StateTreeTask.generated.h"

class UAITask_MoveTo;

USTRUCT()
struct FAttack_StateTreeTaskInstanceData
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere, Category = "Parameter")
    TArray<FBossComboElement> Combo;

	UPROPERTY(EditAnywhere, Category = "Parameter")
	AActor* GoalActor = nullptr;

	UPROPERTY(EditAnywhere, meta = (ClampMin = 0, Category = "Parameter"))
    float AttackRadius = 150.f;

	uint8 index = 0;
	TWeakObjectPtr<UAITask_MoveTo> MoveToTask;
};

USTRUCT(meta = (DisplayName = "Attack", Category = "Boss"))
struct MAINPROJECT_API FAttack_StateTreeTask : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

    virtual bool Link(FStateTreeLinker& Linker) override;
	
	using FInstanceDataType = FAttack_StateTreeTaskInstanceData;

protected:
    TStateTreeExternalDataHandle<AActor> ActorHandle;
	
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const override;
	virtual EStateTreeRunStatus Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const override;
	virtual void ExitState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const override;  
};
