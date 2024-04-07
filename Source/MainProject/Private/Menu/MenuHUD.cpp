// Lazy Pixel. All Rights Reserved.


#include "Menu/MenuHUD.h"

#include "Blueprint/UserWidget.h"

void AMenuHUD::BeginPlay()
{
    Super::BeginPlay();

    if (MenuWidgetClass)
    {
        if (const auto MenuWidget = CreateWidget<UUserWidget>(GetWorld(), MenuWidgetClass))
        {
            MenuWidget->AddToViewport();
        }
    }
}
