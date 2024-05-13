// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UI/HUD/HealthWidget.h"
#include "BossHealthWidget.generated.h"

class ABaseCharacter;

UCLASS()
class MAINPROJECT_API UBossHealthWidget : public UHealthWidget
{
	GENERATED_BODY()

public:
    void RebindEvents(ABaseCharacter* Character);

protected:
    UHealthComponent* GetHealthComponent() const override;

private:
    UPROPERTY()
    ABaseCharacter* pOwnerCharacter = nullptr;

    void SetCurrentHealth() override;
    void SetHealth(float Health, float OneCellHealth) override;
};
