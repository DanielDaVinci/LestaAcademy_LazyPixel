// Lazy Pixel. All Rights Reserved.


#include "Data/ProgressSaveGame.h"

FString UProgressSaveGame::GetLevelName() const
{
    switch (ProgressData.LevelIndex)
    {
        case 0:
            return "/Game/Levels/FirstLevel";
        case 1:
            return "/Game/Levels/SecondLevel";
        case 2:
            return "/Game/Levels/ThirdLevel";
        default:
            return "";
    }
}
