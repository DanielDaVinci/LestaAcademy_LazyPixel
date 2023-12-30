// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/BaseAbility.h"

void UBaseAbility::Initialize(ABaseCharacter* Character)
{
    m_character = Character;

    if (m_character)
        NativeInitialize();
}

UWorld* UBaseAbility::GetWorld() const
{
    if (GIsEditor && !GIsPlayInEditorWorld)
        return nullptr;
    
    if (GetOuter())
        return GetOuter()->GetWorld();
    
    return nullptr;
}
