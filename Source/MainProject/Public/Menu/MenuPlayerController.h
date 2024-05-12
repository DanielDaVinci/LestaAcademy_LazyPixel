// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Player/BasePlayerController.h"
#include "GameFramework/PlayerController.h"
#include "MenuPlayerController.generated.h"

UCLASS()
class MAINPROJECT_API AMenuPlayerController : public ABasePlayerController
{
	GENERATED_BODY()

public:
    AMenuPlayerController();
    
protected:
    virtual void BeginPlay() override;
    
};
