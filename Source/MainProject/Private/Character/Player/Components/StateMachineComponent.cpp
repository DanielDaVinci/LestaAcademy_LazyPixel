// Lazy Pixel. All Rights Reserved.


#include "Character/Player/Components/StateMachineComponent.h"

UStateMachineComponent::UStateMachineComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UStateMachineComponent::AddState(const FState& State)
{
    if (State.Priority == EStatePriority::Force)
    {
        StopCurrentState(EStateResult::Aborted);
        ClearQueue();
    }

    FState* pNewState = new FState(State);
    m_queueStates.push(pNewState);
    
    if (!m_pCurrentState)
    {
        NextState();
    }
}

void UStateMachineComponent::SkipCurrentState()
{
    NextState();
}

FState UStateMachineComponent::GetCurrentState() const
{
    return m_pCurrentState? *m_pCurrentState : FState();
}

FState UStateMachineComponent::GetNextState() const
{
    return HasNextState() ? *m_queueStates.top() : FState();
}

bool UStateMachineComponent::HasNextState() const
{
    return !m_queueStates.empty();
}

void UStateMachineComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    ClearQueue();
}

void UStateMachineComponent::StopCurrentState(EStateResult StateResult)
{
    if (!m_pCurrentState)
        return;

    ClearStateTimer();
    
    const FState* currentState = m_pCurrentState;
    m_pCurrentState = nullptr;
    currentState->OnEndState.Broadcast(StateResult);
    delete currentState;
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
    if (m_pCurrentState)
    {
        StopCurrentState(EStateResult::Successed);
    }
    
    if (m_queueStates.empty())
        return;

    const auto pNextState = m_queueStates.top();
    m_queueStates.pop();
    StartState(pNextState);
}

void UStateMachineComponent::ClearStateTimer()
{
    if (!GetWorld())
        return;

    GetWorld()->GetTimerManager().ClearTimer(m_currentStateTimer);
}

void UStateMachineComponent::ClearQueue()
{
    while (!m_queueStates.empty())
    {
        delete m_queueStates.top();
        m_queueStates.pop();
    }
}

void UStateMachineComponent::OnEndStateTimer()
{
    NextState();
}

