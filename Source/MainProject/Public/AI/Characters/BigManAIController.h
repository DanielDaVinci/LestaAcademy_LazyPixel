// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BigManAIController.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API ABigManAIController : public AAIController
{
	GENERATED_BODY()

protected:
    virtual void OnPossess(APawn* InPawn) override;
};
