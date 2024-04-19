// Lazy Pixel. All Rights Reserved.


#include "MenuGameModeBase.h"

#include "Menu/MenuPlayerController.h"
#include "UI/GameHUD.h"

AMenuGameModeBase::AMenuGameModeBase()
{
    HUDClass = AGameHUD::StaticClass();
    PlayerControllerClass = AMenuPlayerController::StaticClass();
}

