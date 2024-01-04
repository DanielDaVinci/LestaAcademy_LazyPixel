// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/AIBaseCharacter.h"
#include "Character/Player/Components/AIWeaponComponent.h"
#include "Components/CapsuleComponent.h"
#include "Environment/Room.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

AAIBaseCharacter::AAIBaseCharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit.SetDefaultSubobjectClass<UAIWeaponComponent>("WeaponComponent"))
{
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}
