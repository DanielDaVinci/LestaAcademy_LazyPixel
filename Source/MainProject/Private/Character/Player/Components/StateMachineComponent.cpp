// Lazy Pixel. All Rights Reserved.


#include "Character/Player/Components/StateMachineComponent.h"

UStateMachineComponent::UStateMachineComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UStateMachineComponent::SetMaxNumStates(SIZE_T MaxNum)
{
    if (MaxNum <= 0)
        return;

    m_maxNumStates = MaxNum;
}

void UStateMachineComponent::AddState(const FState& State)
{
    if (State.Priority == EStatePriority::Force)
    {
        StopCurrentState(EStateResult::Aborted);
        ClearQueue();
    }
    
    m_queueStates.Insert(new FState(State), FindLastStateByPriority(State.Priority));
    
    if (m_queueStates.Num() > m_maxNumStates)
    {
        RemoveLastState();
    }
    
    if (!InternalGetCurrentState())
    {
        NextState();
    }
}

void UStateMachineComponent::SkipCurrentState()
{
    NextState();
}

const FState* UStateMachineComponent::GetCurrentState() const
{
    return InternalGetCurrentState();
}

const FState* UStateMachineComponent::GetNextState() const
{
    return InternalGetNextState();
}

bool UStateMachineComponent::HasNextState() const
{
    return !m_queueStates.IsEmpty();
}

void UStateMachineComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    ClearQueue();
}

void UStateMachineComponent::StopCurrentState(const EStateResult StateResult)
{
    if (!InternalGetCurrentState())
        return;

    ClearStateTimer();
    
    const FState* currentState = m_pCurrentState;
    m_pCurrentState = nullptr;
    currentState->OnEndState.Broadcast(StateResult);
    delete currentState;
}

void UStateMachineComponent::RemoveLastState()
{
    if (m_queueStates.IsValidIndex(m_queueStates.Num() - 1))
    {
        const FState* state = m_queueStates[m_queueStates.Num() - 1];
        state->OnEndState.Broadcast(EStateResult::Cancel);
        delete state;
        
        m_queueStates.RemoveAt(m_queueStates.Num() - 1);
    }
}

FState* UStateMachineComponent::RemoveNextStateFromQueue()
{
    FState* nextState = InternalGetNextState();
    if (nextState && m_queueStates.IsValidIndex(0))
    {
        m_queueStates.RemoveAt(0);
    }

    return nextState;
}

void UStateMachineComponent::StartState(FState* State)
{
    if (!GetWorld() || !State)
        return;

    m_pCurrentState = State;
    
    GetWorld()->GetTimerManager().ClearTimer(m_currentStateTimer);
    GetWorld()->GetTimerManager().SetTimer(m_currentStateTimer, this, &UStateMachineComponent::OnEndStateTimer, m_pCurrentState->LifeTime, false);
    m_pCurrentState->OnStartState.Broadcast();
}


void UStateMachineComponent::NextState()
{
    if (InternalGetCurrentState())
    {
        StopCurrentState(EStateResult::Successed);
    }
    
    if (FState* pNextState = RemoveNextStateFromQueue())
    {
        StartState(pNextState);
    }
}

SIZE_T UStateMachineComponent::FindLastStateByPriority(EStatePriority StatePriority)
{
    SIZE_T i;
    for (i = 0; i < m_queueStates.Num(); i++)
    {
        if (StatePriority > m_queueStates[i]->Priority)
        {
            return i;
        }
    }

    return i;
}

FState* UStateMachineComponent::InternalGetCurrentState() const
{
    return m_pCurrentState;
}

FState* UStateMachineComponent::InternalGetNextState() const
{
    return HasNextState() ? m_queueStates[0] : nullptr;
}

void UStateMachineComponent::ClearStateTimer()
{
    if (!GetWorld())
        return;

    GetWorld()->GetTimerManager().ClearTimer(m_currentStateTimer);
}

void UStateMachineComponent::ClearQueue()
{
    for (const FState* state: m_queueStates)
    {
        if (!state)
            continue;

        state->OnEndState.Broadcast(EStateResult::Cancel);
        delete state;
    }

    m_queueStates.Reset();
}

void UStateMachineComponent::OnEndStateTimer()
{
    NextState();
}

