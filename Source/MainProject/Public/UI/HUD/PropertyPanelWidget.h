// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PropertyPanelWidget.generated.h"


class UTextBlock;
class UHealthWidget;
class UHealthComponent;
class ABaseCharacter;
class UProgressBar;

UCLASS()
class MAINPROJECT_API UPropertyPanelWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UProgressBar* pAbilityBar;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* pHealthText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* pBulletsText;

    virtual void NativeOnInitialized() override;

private:
    void BindEvents();
    void OnHealthChanged(float DeltaHealth);
    void SetCurrentHealthText();
    
protected:
    ABaseCharacter* GetOwningBaseCharacter() const;
    UHealthComponent* GetHealthComponent() const;
};
