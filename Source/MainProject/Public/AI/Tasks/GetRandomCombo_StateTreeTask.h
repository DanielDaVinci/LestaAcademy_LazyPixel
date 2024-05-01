#pragma once

#include "StateTreeTaskBase.h"
#include "Weapon/WeaponCoreTypes.h"
#include "GetRandomCombo_StateTreeTask.generated.h"


USTRUCT()
struct FAttackCombosData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Category = "Parameter")
    TArray<FBossComboElement> Combo;

	UPROPERTY(EditAnywhere, Category = "Parameter")
    bool isLongCombo;
};

USTRUCT()
struct FGetRandomCombo_StateTreeTaskInstanceData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, Category = Parameter)
    TArray<FAttackCombosData> attackCombos;

	UPROPERTY(EditAnywhere, Category = Parameter)
    uint8 maxOneTypeComboInARow;

	UPROPERTY(EditAnywhere, Category = Output)
    TArray<FBossComboElement> ResultCombo;

	UPROPERTY(EditAnywhere, Category = Output)
    bool isLongComboResult;
};

USTRUCT(meta = (DisplayName = "Get Random Combo", Category = "Boss"))
struct MAINPROJECT_API FGetRandomCombo_StateTreeTask : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

	using FInstanceDataType = FGetRandomCombo_StateTreeTaskInstanceData;
	
	FGetRandomCombo_StateTreeTask();	
	virtual bool Link(FStateTreeLinker& Linker) override;
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const override;

protected:
	TStateTreeExternalDataHandle<AActor> ActorHandle;
};
