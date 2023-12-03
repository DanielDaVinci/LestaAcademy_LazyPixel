// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

class UBoxComponent;

USTRUCT(BlueprintType)
struct FComboElement
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
    FName attackSectionName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation", meta = (ClampMin = "0.0", ClampMax = "5.0"))
    float sectionRateScale;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
    TEnumAsByte<ERootMotionMode::Type> rootMotionMode;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Damage")
    float damage = 50.0f;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement", meta=(ClampMin="0.0", ClampMax="1.0"))
    float deceleration = 0.0;
};

UCLASS()
class MAINPROJECT_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
    
public:
    ABaseWeapon();

    float GetDamage() const { return damage; }
    float GetAttackSpeed() const { return attackSpeed; }
    float GetRange() const { return range; }
    
    UFUNCTION()
    void OnOffCollision(USkeletalMeshComponent* MeshComp);

    UFUNCTION()
    void DisableCollision(USkeletalMeshComponent* MeshComp);

    UFUNCTION()
    void OnDamageAllOverlapedActors();

    UAnimMontage* GetAttackMontage() { return attackAnimation; }
    TArray<FComboElement> GetComboInfo() { return Combos; }

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponProperties", meta=(ClampMin="0.0"))
    float damage = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponProperties", meta = (ClampMin = "0.0", ClampMax = "10.0"))
    float attackSpeed = 1;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponProperties", meta=(ClampMin="0.0"))
    float range;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Animation")
    UAnimMontage* attackAnimation;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attack")
    TArray<FComboElement> Combos;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="SceneComponent")
    USceneComponent* pSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="WeaponMeshComponent")
    UStaticMeshComponent* pWeaponMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "BoxComponent")
    UBoxComponent* pBoxCollision;

    UFUNCTION()
    void OnMeleeWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
    UPROPERTY()
    TArray<AActor*> EnemyActors;

    void InitBoxCollision(); 
};
