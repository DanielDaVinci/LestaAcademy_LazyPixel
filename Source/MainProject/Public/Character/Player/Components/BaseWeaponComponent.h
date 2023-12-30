// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseWeaponComponent.generated.h"

class ASword;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UBaseWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBaseWeaponComponent();

    UFUNCTION()
    void DisableMeleeCollision();

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TSubclassOf<ASword> WeaponClass;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    FName WeaponAttachPointName;

    ASword* m_pMeleeWeapon;

    virtual void SpawnWeapons();
    virtual void InitAnimations();

    void OnStartAttackState(USkeletalMeshComponent* MeshComp);
    void OnEndAttackState();

	virtual void BeginPlay() override;	
};
