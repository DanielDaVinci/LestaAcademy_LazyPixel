// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/ExitWidget.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UExitWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void UExitWidget::BindActions()
{
    if (Agree)
    {
        Agree->OnClicked.AddDynamic(this, &UExitWidget::OnAgree);
    }

    if (Deny)
    {
        Deny->OnClicked.AddDynamic(this, &UExitWidget::OnDeny);
    }
}

void UExitWidget::OnAgree()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), GetOwningPlayer(), EQuitPreference::Quit, true);
}

void UExitWidget::OnDeny()
{
    SetVisibility(ESlateVisibility::Hidden);
}
