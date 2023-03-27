// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "TestFeroxGE.generated.h"

/**
 * 
 */
UCLASS()
class TESTGAS_API UTestFeroxGE : public UGameplayEffect
{
	GENERATED_BODY()

	virtual void PostInitProperties() override;
};
