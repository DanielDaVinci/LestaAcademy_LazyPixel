// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "BossAICharacter.generated.h"

class ARoom;
class UGoreComponent;
class ABossAIController;

UCLASS()
class MAINPROJECT_API ABossAICharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
    ABossAICharacter(const FObjectInitializer& ObjInit);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "GoreComponent")
    UGoreComponent* pGoreComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    ARoom* enemyRoom;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
    UAnimMontage* deathAnimation;

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
    virtual void OnDeath();
	
private:
    uint8 shortComboCounter;
    uint8 longComboCounter;
    uint8 prevComboIndex;
    bool  abilityCharged = true;
    bool  isFirstPhase = true;

    void PlayImpactFX(float DeltaHealth);
    void SendEventToStateTree(float DeltaHealth);
    void CheckHealthForStrongAttack();
    void CheckHealthForSecondPhase();
    void StartBossLogic();
    ABossAIController* GetBossContoller() const;
};
