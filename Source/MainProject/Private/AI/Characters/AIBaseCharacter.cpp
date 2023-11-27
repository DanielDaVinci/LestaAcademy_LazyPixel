// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/AIBaseCharacter.h"

AAIBaseCharacter::AAIBaseCharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit)
{
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}
