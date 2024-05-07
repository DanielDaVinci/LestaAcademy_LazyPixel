// Lazy Pixel. All Rights Reserved.

#pragma once

#include "StateTreeEvaluatorBase.h"
#include "StateTreeExecutionTypes.h"
#include "Targeting_StateTreeEvaluator.generated.h"

USTRUCT()
struct FTargeting_StateTreeEvaluatorInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = Output)
	AActor* Target;
};

USTRUCT(meta = (DisplayName = "Targeting", Category = "Boss"))
struct MAINPROJECT_API FTargeting_StateTreeEvaluator : public FStateTreeEvaluatorCommonBase
{
	GENERATED_BODY()

	using FInstanceDataType = FTargeting_StateTreeEvaluatorInstanceData;

	virtual bool Link(FStateTreeLinker& Linker) override;
	virtual void Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const override;

protected:
	TStateTreeExternalDataHandle<AActor> ActorHandle;
};
