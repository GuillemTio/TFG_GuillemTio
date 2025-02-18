// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Connector.generated.h"

class AAttachableActor;
/**
 * 
 */
UCLASS()
class TFG_GUILLEM_UNREAL_API UConnector : public UObject
{
	GENERATED_BODY()

private: 

	

public: 
	AAttachableActor* actorOwner;

	virtual void AttachTo(UConnector* connectorToAttach, FVector attachPosition);
	
};
