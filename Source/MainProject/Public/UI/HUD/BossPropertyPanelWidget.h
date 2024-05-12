// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BossPropertyPanelWidget.generated.h"

class ABaseCharacter;
class UBossHealthWidget;

UCLASS()
class MAINPROJECT_API UBossPropertyPanelWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    void RebindEvents(ABaseCharacter* Character);

protected:
    UPROPERTY(meta = (BindWidget))
    UBossHealthWidget* BossHealthWidget;
};
