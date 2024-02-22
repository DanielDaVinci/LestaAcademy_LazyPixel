// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Player/PlayerCoreTypes.h"
#include "Components/ActorComponent.h"
#include "StateMachineComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UStateMachineComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UStateMachineComponent();

    void AddState(const FState& State);

protected:
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    
private:
    std::priority_queue<FState*, std::vector<FState*>, FState::Comparator> m_queueStates;
    FState* m_pCurrentState = nullptr;
    
    FTimerHandle m_currentStateTimer;
    void OnEndStateTimer();

    void StopCurrentState();
    void StartState(FState* State);
    void NextState();

    void ClearStateTimer();
    void ClearQueue();
};
