// Lazy Pixel. All Rights Reserved.

#include "AI/Evaluators/Targeting_StateTreeEvaluator.h"

#include "StateTreeExecutionContext.h"
#include "StateTreeLinker.h"
#include "Kismet/GameplayStatics.h"

bool FTargeting_StateTreeEvaluator::Link(FStateTreeLinker& Linker)
{
	Linker.LinkExternalData(ActorHandle);
	return true;
}

void FTargeting_StateTreeEvaluator::Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const
{
	AActor& ReferenceActor = Context.GetExternalData(ActorHandle);

	const auto PlayerPawn = UGameplayStatics::GetPlayerPawn(ReferenceActor.GetWorld(), 0);
    if (!PlayerPawn)
        return;
    
	FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
    InstanceData.Target = Cast<AActor>(PlayerPawn);
}
