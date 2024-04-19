// Lazy Pixel. All Rights Reserved.


#include "Menu/MenuPlayerController.h"


AMenuPlayerController::AMenuPlayerController()
{
    SetShowMouseCursor(true);
}

void AMenuPlayerController::BeginPlay()
{
    Super::BeginPlay();

    SetInputMode(FInputModeUIOnly());
}