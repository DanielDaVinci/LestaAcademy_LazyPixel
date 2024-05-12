// Lazy Pixel. All Rights Reserved.


#include "Menu/MenuPlayerController.h"


AMenuPlayerController::AMenuPlayerController()
{
    bShowMouseCursor = true;
}

void AMenuPlayerController::BeginPlay()
{
    Super::BeginPlay();

    SetUIModeControl();
}
