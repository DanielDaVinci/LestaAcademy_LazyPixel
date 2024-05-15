// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AI/Characters/AIBaseCharacter.h"
#include "BossAICharacter.generated.h"

class ABossAIController;
class UBossPropertyPanelWidget;
class AEndRoom;

UCLASS()
class MAINPROJECT_API ABossAICharacter : public AAIBaseCharacter
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
    UAnimMontage* deathAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> propertyWidgetClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> winWidgetClass;

    UPROPERTY(EditAnywhere, Category = "Datatables")
    UDataTable* SecondPhaseDataTable;

    UPROPERTY(EditAnywhere, Category = "Datatables")
    UDataTable* EpilogueDataTable;

    UPROPERTY(EditAnywhere, Category = "EndLevel")
    TSubclassOf<AEndRoom> endLevelClass;

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

    UFUNCTION()
    void OnDeathInteract();

    UFUNCTION()
    void OnWinWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnBossStartFight();

    UFUNCTION(BlueprintImplementableEvent)
    void OnBossSecondPhase();
	
private:
    UPROPERTY()
    AEndRoom* pEndRoom = nullptr;
    
    uint8 shortComboCounter;
    uint8 longComboCounter;
    uint8 prevComboIndex;
    bool  abilityCharged = true;
    bool  isFirstPhase = true;
    FTimerHandle m_DeathTimer;
    void OnDeathTimer();

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
