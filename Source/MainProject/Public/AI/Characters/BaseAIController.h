// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

UCLASS()
class MAINPROJECT_API ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:
    ABaseAIController(const FObjectInitializer& ObjInit);
    
protected:
    virtual void OnPossess(APawn* InPawn) override;
};
