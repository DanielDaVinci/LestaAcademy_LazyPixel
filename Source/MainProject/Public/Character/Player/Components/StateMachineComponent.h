// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Player/PlayerCoreTypes.h"
#include "Components/ActorComponent.h"
#include "Containers/Deque.h"
#include "StateMachineComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UStateMachineComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UStateMachineComponent();

    void SetMaxNumStates(SIZE_T MaxNum);

    void AddState(const FState& State);
    void SkipCurrentState();
    
    const FState* GetCurrentState() const;
    const FState* GetNextState() const;
    bool HasNextState() const;

protected:
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    
private:
    TArray<FState*> m_queueStates;
    
    mutable FState* m_pCurrentState = nullptr;
    
    SIZE_T m_maxNumStates = 1;
    
    FTimerHandle m_currentStateTimer;
    void OnEndStateTimer();

    FState* InternalGetCurrentState() const;
    FState* InternalGetNextState() const;
    
    void RemoveLastState();
    FState* RemoveNextStateFromQueue();

    void StopCurrentState(EStateResult StateResult);
    void StartState(FState* State);
    void NextState();

    SIZE_T FindLastStateByPriority(EStatePriority StatePriority);

    void ClearStateTimer();
    void ClearQueue();
};
