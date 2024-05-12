// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/BossAICharacter.h"

#include "MainProjectCoreTypes.h"
#include "AI/Characters/BossAIController.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Character/Player/Components/AIWeaponComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Environment/Room.h"
#include "Gore/GoreComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "UI/HUD/BossPropertyPanelWidget.h"

ABossAICharacter::ABossAICharacter(const FObjectInitializer& ObjInit) 
    : Super(ObjInit.SetDefaultSubobjectClass<UAIWeaponComponent>("WeaponComponent"))
{
    pGoreComponent = CreateDefaultSubobject<UGoreComponent>("GoreComponent");

    AIControllerClass = ABossAIController::StaticClass();
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    GetMesh()->SetCollisionObjectType(ECC_Enemy);
    GetCapsuleComponent()->SetCollisionObjectType(ECC_Enemy);
    GetCharacterMovement()->bUseControllerDesiredRotation = true;

    bUseControllerRotationYaw = false;
}

void ABossAICharacter::PostInitializeComponents() 
{
    Super::PostInitializeComponents();

    pHealthComponent->OnHealthChanged.AddDynamic(this, &ABossAICharacter::PlayImpactFX);
    
    if (enemyRoom)
        enemyRoom->OnPlayerEnterEvent.AddUObject(this, &ABossAICharacter::StartBossLogic);
}

float ABossAICharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    if (Cast<ASword>(DamageCauser) && !IsDead())
        SendEventToStateTree();

    return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

void ABossAICharacter::OnDeath() 
{
    OnDied();

    GetController()->UnPossess();
    PlayAnimMontage(deathAnimation);
    pWeaponComponent->DisableAllWeaponsCollision();
    pPropertyWidget->RemoveFromViewport();
}

void ABossAICharacter::PlayImpactFX(float DeltaHealth) 
{
    pGoreComponent->PreDismemberment(FName("Spine"), GetActorRotation().Vector());
    pGoreComponent->PostDismemberment(FName("Spine"), GetMesh());
}

void ABossAICharacter::SendEventToStateTree() 
{
    GetBossContoller()->SendStateTreeEvent("BossHealthChanged");
    CheckHealthForSecondPhase(); 
    CheckHealthForStrongAttack();
}

void ABossAICharacter::CheckHealthForStrongAttack() 
{
    if ((isFirstPhase && abilityCharged && pHealthComponent->GetPercentHealth() <= 0.75f) || 
                        (abilityCharged && pHealthComponent->GetPercentHealth() <= 0.25f))
    {
        abilityCharged = false;
        GetBossContoller()->SendStateTreeEvent("StrongAttack");
    }
}

void ABossAICharacter::CheckHealthForSecondPhase() 
{
    if (isFirstPhase && pHealthComponent->GetPercentHealth() <= 0.5f)
    {
        isFirstPhase = false;
        abilityCharged = true;
        GetBossContoller()->SendStateTreeEvent("SecondPhase");
    }
}

void ABossAICharacter::StartBossLogic() 
{
    GetBossContoller()->StartStateTree();
    CreateUI();
}

void ABossAICharacter::CreateUI()
{
    if (!propertyWidgetClass)
        return;

    pPropertyWidget = CreateWidget<UBossPropertyPanelWidget>(GetWorld(), propertyWidgetClass);
    pPropertyWidget->AddToViewport();
    pPropertyWidget->RebindEvents(this);
}

ABossAIController* ABossAICharacter::GetBossContoller() const
{
    return Cast<ABossAIController>(GetController());
}
