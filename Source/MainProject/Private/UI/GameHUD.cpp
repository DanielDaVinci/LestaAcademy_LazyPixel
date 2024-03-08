// Lazy Pixel. All Rights Reserved.


#include "UI/GameHUD.h"

#include "Blueprint/UserWidget.h"

void AGameHUD::BeginPlay()
{
    Super::BeginPlay();

    AddMainWidgetToViewport();
}

void AGameHUD::AddMainWidgetToViewport() const
{
    if (!MainWidgetClass)
        return;

    const auto mainWidget = CreateWidget(GetWorld(), MainWidgetClass);
    if (!MainWidgetClass)
        return;

    mainWidget->AddToViewport();
}
