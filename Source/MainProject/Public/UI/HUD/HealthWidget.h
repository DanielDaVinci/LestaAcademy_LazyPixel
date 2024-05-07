// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HealthWidget.generated.h"

class UHealthCellWidget;
class UHealthComponent;
class APlayerCharacter;
class UHorizontalBox;
class UProgressBar;


UCLASS()
class MAINPROJECT_API UHealthWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UHorizontalBox* pHealthBox;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> healthBarClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> spacerClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (ClampMin = "1"))
    int32 cellsCount = 10.0f;
    
    virtual void NativeOnInitialized() override;

private:
    void InitializeBars();
    void BindEvents();

protected:
    UFUNCTION()
    void OnHealthChanged(float DeltaHealth);

private:
    UPROPERTY()
    TArray<UHealthCellWidget*> m_healthCells;
    
    void SetCurrentHealth();
    void SetHealth(float Health, float OneCellHealth);

protected:
    APlayerCharacter* GetPlayerCharacter() const;
    UHealthComponent* GetHealthComponent() const;
};
