// Lazy Pixel. All Rights Reserved.


#include "Environment/Components/WavesSystemComponent.h"

UWavesSystemComponent::UWavesSystemComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UWavesSystemComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


void UWavesSystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    
}

