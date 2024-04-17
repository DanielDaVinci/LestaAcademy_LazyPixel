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

    if (!ImpactWidgetClass)
        return;

    const auto impactWidget = CreateWidget(GetWorld(), ImpactWidgetClass);
    if (!impactWidget)
        return;
    
    mainWidget->AddToViewport();
    impactWidget->AddToViewport();
}
