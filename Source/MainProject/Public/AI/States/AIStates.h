// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIStates.generated.h"

UENUM()
enum EAIStates : uint8
{
    Idle = 0,
    Moving = 1,
    Attack = 2,
};
