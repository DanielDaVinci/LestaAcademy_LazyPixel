// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/BossAICharacter.h"

#include "MainProjectCoreTypes.h"
#include "AI/Characters/BossAIController.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Character/Player/Components/AIWeaponComponent.h"
#include "Environment/Room.h"
#include "Gore/GoreComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "UI/HUD/BossPropertyPanelWidget.h"


void ABossAICharacter::PostInitializeComponents() 
{
    Super::PostInitializeComponents();
    
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
