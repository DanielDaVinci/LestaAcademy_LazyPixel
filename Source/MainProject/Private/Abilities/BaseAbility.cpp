// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/BaseAbility.h"

void UBaseAbility::Init(ABaseCharacter* Character)
{
    m_character = Character;
}

UWorld* UBaseAbility::GetWorld() const
{
    if (GIsEditor && !GIsPlayInEditorWorld)
        return nullptr;
    
    if (GetOuter())
        return GetOuter()->GetWorld();
    
    return nullptr;
}
