// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SpacerWidget.generated.h"

class USpacer;

UCLASS()
class MAINPROJECT_API USpacerWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    void SetSlateChildSize(float Value, ESlateSizeRule::Type Rule);

protected:
    UPROPERTY(meta = (BindWidget))
    USpacer* pSpacer;
};
