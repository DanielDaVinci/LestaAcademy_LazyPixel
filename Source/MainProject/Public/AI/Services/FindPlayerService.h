// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FindPlayerService.generated.h"

enum EAIStates : uint8;

UCLASS()
class MAINPROJECT_API UFindPlayerService : public UBTService
{
	GENERATED_BODY()

public:
    UFindPlayerService();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector playerActorKey;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector distanceKey;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float aggroDistance = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float attackDistance = 150.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FBlackboardKeySelector aiStateKey;

    virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:
    EAIStates CalculateState() const;
    float m_currentDistance;
};
