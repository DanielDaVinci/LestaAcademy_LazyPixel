// Lazy Pixel. All Rights Reserved.


#include "MenuGameModeBase.h"

#include "Menu/MenuHUD.h"
#include "Menu/MenuPlayerController.h"

AMenuGameModeBase::AMenuGameModeBase()
{
    HUDClass = AMenuHUD::StaticClass();
    PlayerControllerClass = AMenuPlayerController::StaticClass();
}
