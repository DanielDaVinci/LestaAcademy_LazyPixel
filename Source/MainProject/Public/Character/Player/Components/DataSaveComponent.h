// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Player/PlayerCharacter.h"
#include "Components/ActorComponent.h"
#include "Interface/PrePostBeginInterface.h"
#include "DataSaveComponent.generated.h"

class APlayerCharacter;
class USaveGame;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UDataSaveComponent : public UActorComponent, public IPrePostBeginInterface
{
	GENERATED_BODY()

public:
	UDataSaveComponent();

protected:
    virtual void PreBeginPlay() override;
    virtual void BeginPlay() override;
    virtual void PostBeginPlay() override;
    
    virtual void PreBeginSetupSavedData(const UProgressSaveGame* ProgressSaveGame);
    virtual void PostBeginSetupSavedData(const UProgressSaveGame* ProgressSaveGame);

    void PreSaveCurrentSlot(USaveGame* SaveGame) const;

private:
    void BindEvents();
    
    void LoadDataForHealthComponent(const UProgressSaveGame* ProgressSaveGame) const;
    void LoadDataForAbilityComponent(const UProgressSaveGame* ProgressSaveGame) const;
    void LoadDataForWeaponComponent(const UProgressSaveGame* ProgressSaveGame) const;

    void SaveDataFromHealthComponent(UProgressSaveGame* ProgressSaveGame) const;
    void SaveDataFromAbilityComponent(UProgressSaveGame* ProgressSaveGame) const;
    void SaveDataFromWeaponComponent(UProgressSaveGame* ProgressSaveGame) const;
    
    APlayerCharacter* GetPlayerCharacter() const;
};
