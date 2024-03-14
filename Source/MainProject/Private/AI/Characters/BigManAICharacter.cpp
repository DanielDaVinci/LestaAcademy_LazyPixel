// Lazy Pixel. All Rights Reserved.

#include "AI/Characters/BigManAICharacter.h"

#include "AI/Characters/BigManAIController.h"

ABigManAICharacter::ABigManAICharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit)
{
    AIControllerClass = ABigManAIController::StaticClass();
}
