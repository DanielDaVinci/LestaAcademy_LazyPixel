// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "RangeAIController.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API ARangeAIController : public AAIController
{
	GENERATED_BODY()
    
public:
    virtual void OnPossess(APawn* InPawn) override;
};
