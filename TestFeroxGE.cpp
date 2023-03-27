// Fill out your copyright notice in the Description page of Project Settings.


#include "TestFeroxGE.h"

namespace FeroxGE
{
	const FName FeroxTag = TEXT("State.FeroxTag");
}

void UTestFeroxGE::PostInitProperties()
{
	Super::PostInitProperties();
	InheritableOwnedTagsContainer.AddTag(FGameplayTag::RequestGameplayTag(FeroxGE::FeroxTag));
	DurationPolicy = EGameplayEffectDurationType::Infinite;
}
