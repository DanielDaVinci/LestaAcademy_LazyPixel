// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/AIBaseCharacter.h"
#include "Character/Player/Components/AIWeaponComponent.h"
#include "Environment/Room.h"

AAIBaseCharacter::AAIBaseCharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit.SetDefaultSubobjectClass<UAIWeaponComponent>("WeaponComponent"))
{
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}
