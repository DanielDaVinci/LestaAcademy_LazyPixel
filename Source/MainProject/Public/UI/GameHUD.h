// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"


UCLASS()
class MAINPROJECT_API AGameHUD : public AHUD
{
	GENERATED_BODY()

public:
    template<typename T> requires std::is_base_of_v<UUserWidget, T>
    T* GetMainUserWidget() const;

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Game|UI")
    TSubclassOf<UUserWidget> MainWidgetClass;
    
    virtual void BeginPlay() override;
    
private:
    UPROPERTY()
    UUserWidget* m_mainWidget = nullptr;
    
    void AddMainWidgetToViewport();
};

template <typename T> requires std::is_base_of_v<UUserWidget, T>
T* AGameHUD::GetMainUserWidget() const
{
    return Cast<T>(m_mainWidget);
}
