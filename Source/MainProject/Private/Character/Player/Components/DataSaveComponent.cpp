// Lazy Pixel. All Rights Reserved.


#include "Character/Player/Components/DataSaveComponent.h"

#include "MainProjectGameInstance.h"
#include "Abilities/ActiveAbilities/StrongAttackAbility.h"
#include "Character/Player/Components/AbilityComponent.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Character/Player/Components/PlayerWeaponComponent.h"

UDataSaveComponent::UDataSaveComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UDataSaveComponent::PreBeginPlay()
{
    if (const auto gameInstance = GetWorld()->GetGameInstance<UMainProjectGameInstance>())
    {
        PreBeginSetupSavedData(gameInstance->GetCurrentSlot<UProgressSaveGame>());
    }
}

void UDataSaveComponent::BeginPlay()
{
    Super::BeginPlay();

    BindEvents();
}

void UDataSaveComponent::PostBeginPlay()
{
    if (const auto gameInstance = GetWorld()->GetGameInstance<UMainProjectGameInstance>())
    {
        PostBeginSetupSavedData(gameInstance->GetCurrentSlot<UProgressSaveGame>());
    }
}

void UDataSaveComponent::PreBeginSetupSavedData(const UProgressSaveGame* ProgressSaveGame)
{
    if (!ProgressSaveGame)
        return;

    LoadDataForHealthComponent(ProgressSaveGame);
    LoadDataForAbilityComponent(ProgressSaveGame);
    LoadDataForWeaponComponent(ProgressSaveGame);
}

void UDataSaveComponent::PreSaveCurrentSlot(USaveGame* SaveGame) const
{
    const auto progressSaveGame = Cast<UProgressSaveGame>(SaveGame);
    if (!progressSaveGame)
        return;
    
    SaveDataFromHealthComponent(progressSaveGame);
    SaveDataFromAbilityComponent(progressSaveGame);
    SaveDataFromWeaponComponent(progressSaveGame);
}

void UDataSaveComponent::PostBeginSetupSavedData(const UProgressSaveGame* ProgressSaveGame)
{
    if (!ProgressSaveGame)
        return;

    LoadDataForHealthComponent(ProgressSaveGame);
    LoadDataForAbilityComponent(ProgressSaveGame);
    LoadDataForWeaponComponent(ProgressSaveGame);
}

void UDataSaveComponent::BindEvents()
{
    if (const auto gameInstance = GetWorld()->GetGameInstance<UMainProjectGameInstance>())
    {
        gameInstance->OnPreSaveCurrentSlotEvent.AddUObject(this, &UDataSaveComponent::PreSaveCurrentSlot);
    }
}

void UDataSaveComponent::LoadDataForHealthComponent(const UProgressSaveGame* ProgressSaveGame) const
{
    const auto pPlayerCharacter = GetPlayerCharacter();
    if (!pPlayerCharacter)
        return;

    if (const auto pHealthComponent = pPlayerCharacter->GetHealthComponent())
    {
        const float health = pHealthComponent->GetMaxHealth() * ProgressSaveGame->ProgressData.HealthPercent;
        pHealthComponent->SetHealth(health, false);
    }
}

void UDataSaveComponent::LoadDataForAbilityComponent(const UProgressSaveGame* ProgressSaveGame) const
{
    const auto pPlayerCharacter = GetPlayerCharacter();
    if (!pPlayerCharacter)
        return;

    if (const auto pAbilityComponent = pPlayerCharacter->GetAbilityComponent())
    {
        if (const auto customAbility = pAbilityComponent->GetCustomAbility<UStrongAttackAbility>())
        {
            customAbility->SetAbilityCharge(ProgressSaveGame->ProgressData.AbilityCharge);
        }
    }
}

void UDataSaveComponent::LoadDataForWeaponComponent(const UProgressSaveGame* ProgressSaveGame) const
{
    const auto pPlayerCharacter = GetPlayerCharacter();
    if (!pPlayerCharacter)
        return;

    if (const auto pWeaponComponent = pPlayerCharacter->GetPlayerWeaponComponent())
    {
        if (ProgressSaveGame->ProgressData.BulletsNum > 0)
        {
            const auto& data = pWeaponComponent->FindDataByBaseWeaponClass(AGun::StaticClass());
            if (data && !pWeaponComponent->FindWeapon<AGun>())
            {
                const auto weapon = pWeaponComponent->AddWeapon(data->WeaponClass);
                if (const auto pRangeWeapon = Cast<AGun>(weapon))
                {
                    pRangeWeapon->SetBullets(ProgressSaveGame->ProgressData.BulletsNum);
                }
            }
        }
    }
}

void UDataSaveComponent::SaveDataFromHealthComponent(UProgressSaveGame* ProgressSaveGame) const
{
    const auto pPlayerCharacter = GetPlayerCharacter();
    if (!pPlayerCharacter)
        return;

    if (const auto pHealthComponent = pPlayerCharacter->GetHealthComponent())
    {
        UE_LOG(LogTemp, Error, TEXT("Save health: %f"), pHealthComponent->GetPercentHealth());
        ProgressSaveGame->ProgressData.HealthPercent = pHealthComponent->GetPercentHealth();
    }
}

void UDataSaveComponent::SaveDataFromAbilityComponent(UProgressSaveGame* ProgressSaveGame) const
{
    const auto pPlayerCharacter = GetPlayerCharacter();
    if (!pPlayerCharacter)
        return;

    if (const auto pAbilityComponent = pPlayerCharacter->GetAbilityComponent())
    {
        if (const auto customAbility = pAbilityComponent->GetCustomAbility<UStrongAttackAbility>())
        {
            UE_LOG(LogTemp, Error, TEXT("Save Custom ability: %f"), customAbility->GetCurrentAbilityCharge());
            ProgressSaveGame->ProgressData.AbilityCharge = customAbility->GetCurrentAbilityCharge();
        }
    }
}

void UDataSaveComponent::SaveDataFromWeaponComponent(UProgressSaveGame* ProgressSaveGame) const
{
    const auto pPlayerCharacter = GetPlayerCharacter();
    if (!pPlayerCharacter)
        return;

    if (const auto pWeaponComponent = pPlayerCharacter->GetPlayerWeaponComponent())
    {
        if (const auto rangeWeapon = pWeaponComponent->GetRangeWeapon())
        {
            UE_LOG(LogTemp, Error, TEXT("Save bullets num: %d"), rangeWeapon->GetBullets());
            ProgressSaveGame->ProgressData.BulletsNum = rangeWeapon->GetBullets();
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Save bullets num: %d"), 0);
            ProgressSaveGame->ProgressData.BulletsNum = 0;
        }
    }
}

APlayerCharacter* UDataSaveComponent::GetPlayerCharacter() const
{
    return GetOwner<APlayerCharacter>();
}

