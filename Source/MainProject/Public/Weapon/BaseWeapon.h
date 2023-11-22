// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

class UBoxComponent;

UCLASS()
class MAINPROJECT_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
    
public:
    ABaseWeapon();

    int GetDamage() const { return damage; }
    float GetAttackSpeed() const { return attackSpeed; }
    float GetRange() const { return range; }
    
    // public, потому что подписывается на Notify в WeaponComponent
    UFUNCTION()
    void OnOffCollision(USkeletalMeshComponent* MeshComp);

    UAnimMontage* GetAttackMontage() { return attackAnimation; }

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponProperties")
    int32 damage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponProperties")
    float attackSpeed;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponProperties")
    float range;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Animation")
    UAnimMontage* attackAnimation;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="SceneComponent")
    USceneComponent* pSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="StaticMeshComponent")
    UStaticMeshComponent* PStaticMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "BoxComponent")
    UBoxComponent* pBoxCollision;

    // Возможно, этот метод нужно реализовывать в Sword, пока для теста оставлю здесь. Вызывается, когда у pBoxComponent срабатывает OnBeginOverlap
    UFUNCTION()
    void OnMeleeWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
    void InitBoxCollision();
    
};
