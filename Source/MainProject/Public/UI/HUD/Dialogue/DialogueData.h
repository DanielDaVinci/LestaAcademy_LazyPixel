// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DialogueData.generated.h"

USTRUCT()
struct FPersonParameter
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    FText Name;

    UPROPERTY(EditAnywhere)
    UTexture2D* Image = nullptr;
};

USTRUCT()
struct FMonologParameters
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    bool bWithAnimation = true;

    UPROPERTY(EditAnywhere)
    UTexture2D* Image = nullptr;
};

USTRUCT()
struct FDialogParameters
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    FText Text;

    UPROPERTY(EditAnywhere, meta = (InlineEditConditionToggle))
    bool bLeftDisplay = true;

    UPROPERTY(EditAnywhere, meta = (EditCondition = "bLeftDisplay"))
    FPersonParameter LeftPersonParameters;
    
    UPROPERTY(EditAnywhere, meta = (EditCondition = "!bLeftDisplay"))
    FPersonParameter RightPersonParameters;
};

UENUM()
enum class EDialogueView : uint8
{
    Monolog,
    Dialog
};

USTRUCT(BlueprintType)
struct FDialogueTableRow : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    EDialogueView View = EDialogueView::Monolog;
    
    UPROPERTY(EditAnywhere, meta = (EditConditionHides, EditCondition = "View==EDialogueView::Monolog"))
    FMonologParameters MonologParameters;

    UPROPERTY(EditAnywhere, meta = (EditConditionHides, EditCondition = "View==EDialogueView::Dialog"))
    FDialogParameters DialogParameters;
};