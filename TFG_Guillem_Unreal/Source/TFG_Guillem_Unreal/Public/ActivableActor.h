// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttachableActor.h"
#include "ActivableActor.generated.h"

/**
 * 
 */
UCLASS()
class TFG_GUILLEM_UNREAL_API AActivableActor : public AAttachableActor
{
	GENERATED_BODY()
	
protected:
	virtual void Connect(UConnector* passedConnector, FVector toAttachLocation) override;

public:
	virtual void Activate();

};
