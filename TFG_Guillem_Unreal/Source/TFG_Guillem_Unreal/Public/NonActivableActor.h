// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttachableActor.h"
#include "NonActivableActor.generated.h"

/**
 * 
 */
UCLASS()
class TFG_GUILLEM_UNREAL_API ANonActivableActor : public AAttachableActor
{
	GENERATED_BODY()

protected:
	virtual void Connect() override;
	
};
