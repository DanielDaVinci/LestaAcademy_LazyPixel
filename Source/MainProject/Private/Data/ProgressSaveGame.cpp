// Lazy Pixel. All Rights Reserved.


#include "Data/ProgressSaveGame.h"

FString UProgressSaveGame::GetLevelPath() const
{
    return "/Game/Levels/" + GetLevelName();
}

FString UProgressSaveGame::GetLevelName() const
{
    switch (ProgressData.LevelIndex)
    {
        case 0:
            return "FirstLevel";
        case 1:
            return "SecondLevel";
        case 2:
            return "ThirdLevel";
        default:
            return "MenuLevel";
    }
}
