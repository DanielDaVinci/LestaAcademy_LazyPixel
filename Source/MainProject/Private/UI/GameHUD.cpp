// Lazy Pixel. All Rights Reserved.


#include "UI/GameHUD.h"

#include "Blueprint/UserWidget.h"

void AGameHUD::BeginPlay()
{
    Super::BeginPlay();

    AddMainWidgetToViewport();
}

void AGameHUD::AddMainWidgetToViewport()
{
    if (!MainWidgetClass)
        return;

    const auto mainWidget = CreateWidget(GetWorld(), MainWidgetClass);
    if (!MainWidgetClass)
        return;

    m_mainWidget = mainWidget;
    mainWidget->AddToViewport();
}
