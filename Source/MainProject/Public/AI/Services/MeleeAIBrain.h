// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "MeleeAIBrain.generated.h"

class ARoom;
enum EAIStates : uint8;

UCLASS()
class MAINPROJECT_API UMeleeAIBrain : public UBTService
{
	GENERATED_BODY()

public:
    UMeleeAIBrain();

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
    float aggroDistance = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float attackDistance = 150.0f;

    virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:
    EAIStates CalculateState() const;
    float m_currentDistance;
    bool m_isPlayerEnteredRoom;

    void UpdateValues(UBehaviorTreeComponent& OwnerComp);
};
