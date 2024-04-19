// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MenuPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API AMenuPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
    AMenuPlayerController();
    
protected:
    virtual void BeginPlay() override;

private:
    
};
