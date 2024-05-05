
#include "AI/Tasks/GetRandomCombo_StateTreeTask.h"

#include "StateTreeExecutionContext.h"
#include "StateTreeLinker.h"
#include "AI/Characters/BossAICharacter.h"


FGetRandomCombo_StateTreeTask::FGetRandomCombo_StateTreeTask()
{
	bShouldCallTick = false;
}

bool FGetRandomCombo_StateTreeTask::Link(FStateTreeLinker& Linker)
{
	Linker.LinkExternalData(ActorHandle);
	return true;
}

EStateTreeRunStatus FGetRandomCombo_StateTreeTask::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const
{
    FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
    AActor& ReferenceActor = Context.GetExternalData(ActorHandle);
    ABossAICharacter* pCharacter = Cast<ABossAICharacter>(&ReferenceActor);

	int32 minIndex = 0;
    int32 maxIndex = InstanceData.attackCombos.Num() - 1;

	if (pCharacter->GetShortCounter() == InstanceData.maxOneTypeComboInARow)
    {
        minIndex = InstanceData.attackCombos.Num() / 2;
        maxIndex = InstanceData.attackCombos.Num() - 1;
    }
	if (pCharacter->GetLongCounter() == InstanceData.maxOneTypeComboInARow)
    {
        minIndex = 0;
        maxIndex = InstanceData.attackCombos.Num() / 2 - 1;
    }

	int32 ComboNum = FMath::RandRange(minIndex, maxIndex);
    if (ComboNum == pCharacter->GetPrevComboIndex())
        ComboNum == maxIndex ? ComboNum-- : ComboNum++;
      
    InstanceData.ResultCombo = InstanceData.attackCombos[ComboNum].Combo;
    InstanceData.isLongComboResult = InstanceData.attackCombos[ComboNum].isLongCombo;
    pCharacter->SetPrevComboIndex(ComboNum);

	if (InstanceData.isLongComboResult)
	{
        pCharacter->ClearShortCounter();
        pCharacter->IncreaseLongCounter();
	}
	else
	{
        pCharacter->ClearLongCounter();
        pCharacter->IncreaseShortCounter();    
	}

	//UE_LOG(LogTemp, Warning, TEXT("Short count %d"), pCharacter->GetShortCounter());
    //UE_LOG(LogTemp, Warning, TEXT("Long count %d"), pCharacter->GetLongCounter());
	//UE_LOG(LogTemp, Warning, TEXT("Combo #%d"), ComboNum);

	return EStateTreeRunStatus::Succeeded; 
}

