// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AI/Characters/AIBaseCharacter.h"
#include "BossAICharacter.generated.h"

class ABossAIController;
class UBossPropertyPanelWidget;

UCLASS()
class MAINPROJECT_API ABossAICharacter : public AAIBaseCharacter
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
    UAnimMontage* deathAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> propertyWidgetClass;

    uint8 GetShortCounter()      { return shortComboCounter; }
    uint8 GetLongCounter ()      { return longComboCounter;  }
    void  IncreaseShortCounter() { shortComboCounter++;      }
    void  IncreaseLongCounter()  { longComboCounter++;       }
    void  ClearShortCounter()    { shortComboCounter = 0;    }
    void  ClearLongCounter()     { longComboCounter = 0;     }
    uint8 GetPrevComboIndex()    { return prevComboIndex;    }
    void  SetPrevComboIndex(uint8 Index) { prevComboIndex = Index; }  

protected:
    virtual void PostInitializeComponents() override;
    virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
    virtual void OnDeath();
	
private:
    uint8 shortComboCounter;
    uint8 longComboCounter;
    uint8 prevComboIndex;
    bool  abilityCharged = true;
    bool  isFirstPhase = true;

    UPROPERTY()
    UBossPropertyPanelWidget* pPropertyWidget = nullptr;

    UFUNCTION()
    void SendEventToStateTree();
    
    void CheckHealthForStrongAttack();
    void CheckHealthForSecondPhase();
    void StartBossLogic();
    void CreateUI();
    ABossAIController* GetBossContoller() const;
};
