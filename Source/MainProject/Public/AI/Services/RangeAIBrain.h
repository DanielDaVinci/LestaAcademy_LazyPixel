// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "../States/AIStates.h"
#include "BehaviorTree/BTService.h"
#include "RangeAIBrain.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API URangeAIBrain : public UBTService
{
	GENERATED_BODY()

public:
    URangeAIBrain();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector playerActorKey;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector distanceKey;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector isPlayerEnteredRoomKey;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector aiStateKey;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float attackDistance = 1000.0f;

    virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
private:
    EAIStates CalculateState() const;
    float m_currentDistance;
    bool m_isPlayerEnteredRoom;

    void UpdateValues(UBehaviorTreeComponent& OwnerComp);
};
