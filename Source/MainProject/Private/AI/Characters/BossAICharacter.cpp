// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/BossAICharacter.h"

#include "MainProjectCoreTypes.h"
#include "AI/Characters/BossAIController.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Character/Player/Components/AIWeaponComponent.h"
#include "Components/CapsuleComponent.h"
#include "Environment/Room.h"
#include "Gore/GoreComponent.h"
#include "Weapon/RangeWeapons/Gun.h"
#include "UI/HUD/BossPropertyPanelWidget.h"
#include "UI/HUD/WinPanelWidget.h"
#include "UI/HUD/Dialogue/DialogueSystemUserWidget.h"
#include "Environment/EndRoom.h"


void ABossAICharacter::PostInitializeComponents()
{
    Super::PostInitializeComponents();
    
    if (enemyRoom)
        enemyRoom->OnPlayerEnterEvent.AddUObject(this, &ABossAICharacter::StartBossLogic);
}

float ABossAICharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    float Damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

    if (!Cast<AGun>(DamageCauser) && !IsDead())
        SendEventToStateTree();

    return Damage;
}

void ABossAICharacter::OnDeath() 
{
    OnDied();

    GetController()->UnPossess();
    PlayAnimMontage(deathAnimation);
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    pWeaponComponent->DisableAllWeaponsCollision();
    pPropertyWidget->RemoveFromParent();

    GetWorld()->GetTimerManager().SetTimer(m_DeathTimer, this, &ABossAICharacter::OnDeathTimer, 5.f, false);
}

void ABossAICharacter::OnDeathTimer()
{
    AEndRoom* pEndRoom = GetWorld()->SpawnActor<AEndRoom>(endLevelClass, GetMesh()->GetSocketLocation("HeadSocket"), FRotator(), FActorSpawnParameters());
    pEndRoom->OnPlayerInteractEvent.AddUObject(this, &ABossAICharacter::OnDeathInteract);
}

void ABossAICharacter::OnDeathInteract() 
{
    UDialogueSystemUserWidget::GetSingleton()->SetDialogueData(EpilogueDataTable, true, true, true);
    UDialogueSystemUserWidget::GetSingleton()->OnEndDialogue.AddUObject(this, &ABossAICharacter::OnWinWidget);
}

void ABossAICharacter::OnWinWidget() 
{
    if (!winWidgetClass)
        return;

    const auto winWidget = CreateWidget<UWinPanelWidget>(GetWorld(), winWidgetClass);
    winWidget->AddToViewport();
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
        UDialogueSystemUserWidget::GetSingleton()->SetDialogueData(SecondPhaseDataTable, true, true, true);
        GetBossContoller()->SendStateTreeEvent("SecondPhase");
        OnBossSecondPhase();
    }
}

void ABossAICharacter::StartBossLogic() 
{
    GetBossContoller()->StartStateTree();
    OnBossStartFight();
    CreateUI();
}

void ABossAICharacter::CreateUI()
{
    if (!propertyWidgetClass)
        return;

    pPropertyWidget = CreateWidget<UBossPropertyPanelWidget>(GetWorld(), propertyWidgetClass);
    pPropertyWidget->AddToViewport(-1);
    pPropertyWidget->RebindEvents(this);
}

ABossAIController* ABossAICharacter::GetBossContoller() const
{
    return Cast<ABossAIController>(GetController());
}
