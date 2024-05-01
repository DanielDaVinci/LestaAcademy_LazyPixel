// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BossAIController.generated.h"

class UStateTreeComponent;

UCLASS()
class MAINPROJECT_API ABossAIController : public AAIController
{
	GENERATED_BODY()
	
public:
    ABossAIController(const FObjectInitializer& ObjInit);

	UPROPERTY(EditDefaultsOnly)
    UStateTreeComponent* StateTreeComponent;

	void SendStateTreeEvent();
};
