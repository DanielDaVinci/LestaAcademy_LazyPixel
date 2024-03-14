// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HealthCellWidget.generated.h"

class UProgressBar;
/**
 * 
 */
UCLASS()
class MAINPROJECT_API UHealthCellWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    void SetHealthPercent(float Percent);

    void SetSlateChildSize(float Value, ESlateSizeRule::Type Rule);
    
protected:
    UPROPERTY(meta = (BindWidget))
    UProgressBar* pHealthBar;
};
