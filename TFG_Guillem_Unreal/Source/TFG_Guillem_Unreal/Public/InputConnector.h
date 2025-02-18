// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Connector.h"
#include "InputConnector.generated.h"

/**
 * 
 */
UCLASS()
class TFG_GUILLEM_UNREAL_API UInputConnector : public UConnector
{
	GENERATED_BODY()
	
private:
	USceneComponent* sceneComponent;

public:
	void SetConnector(AAttachableActor& attachableActor, FVector relativeAttachPosition);
	virtual void AttachTo(UConnector* connectorToAttach, FVector attachPosition) override;
	void AdaptActorOwnerLocation(FVector attachPosition);
};
