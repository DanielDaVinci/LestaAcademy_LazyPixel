// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"


UCLASS()
class MAINPROJECT_API AGameHUD : public AHUD
{
	GENERATED_BODY()

protected:

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Game|UI")
    TSubclassOf<UUserWidget> MainWidgetClass;

    virtual void BeginPlay() override;
    
private:
    void AddMainWidgetToViewport() const;
};
