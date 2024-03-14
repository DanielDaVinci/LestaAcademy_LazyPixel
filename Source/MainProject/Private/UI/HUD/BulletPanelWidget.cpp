// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/BulletPanelWidget.h"

#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/WeaponComponent.h"
#include "Components/HorizontalBox.h"

void UBulletPanelWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindEvents();
}

void UBulletPanelWidget::BindEvents()
{
    if (const auto pWeaponComponent = Cast<UWeaponComponent>(GetWeaponComponent()))
    {
        UE_LOG(LogTemp, Warning, TEXT("WeaponComponent"));
        auto pRangeWeapon = pWeaponComponent->FindWeapon<AGun>();
        if (pRangeWeapon)
        {
            UE_LOG(LogTemp, Warning, TEXT("Range weapon"));
            pRangeWeapon->OnAmmoChanged.AddUObject(this, &UBulletPanelWidget::OnGunAmmoChanged);
        }
    }
}

void UBulletPanelWidget::UpdateBullets(uint32 BulletsNum)
{
    if (!pBulletsBox)
        return;

    const uint32 childrenCount = pBulletsBox->GetChildrenCount();
    if (BulletsNum > childrenCount)
    {
        for (SIZE_T i = 0; i < BulletsNum - childrenCount; i++)
        {
            AddBullet();
        }
    }
    else
    {
        for (SIZE_T i = 0; i < childrenCount - BulletsNum; i++)
        {
            RemoveBullet();
        }
    }
}

void UBulletPanelWidget::AddBullet() const
{
    if (!pBulletsBox || !bulletWidgetClass)
        return;
        
    const auto bulletWidget = CreateWidget(GetWorld(), bulletWidgetClass);
    if (!bulletWidget)
        return;

    pBulletsBox->AddChild(bulletWidget);
}

void UBulletPanelWidget::RemoveBullet() const
{
    if (!(pBulletsBox && pBulletsBox->GetChildrenCount()))
        return;
    
    pBulletsBox->RemoveChildAt(0);
}

void UBulletPanelWidget::OnGunAmmoChanged(int32 BulletsNum)
{
    UE_LOG(LogTemp, Warning, TEXT("Bullets: %d"), BulletsNum);
    UpdateBullets(BulletsNum);
}

APlayerCharacter* UBulletPanelWidget::GetOwningPlayerCharacter() const
{
    return Cast<APlayerCharacter>(GetOwningPlayerPawn());
}

ABasePlayerController* UBulletPanelWidget::GetBasePlayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}

UBaseWeaponComponent* UBulletPanelWidget::GetWeaponComponent() const
{
    const auto pPlayerCharacter = GetOwningPlayerCharacter();
    return pPlayerCharacter ? pPlayerCharacter->GetWeaponComponent() : nullptr;
}
