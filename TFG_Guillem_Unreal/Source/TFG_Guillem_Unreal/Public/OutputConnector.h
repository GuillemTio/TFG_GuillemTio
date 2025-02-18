// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Connector.h"
#include "OutputConnector.generated.h"

class UPhysicsConstraintComponent;

UCLASS()
class TFG_GUILLEM_UNREAL_API UOutputConnector : public UConnector
{
	GENERATED_BODY()
	
private:
	UPhysicsConstraintComponent* constraint;

public:

	void SetConnector(AAttachableActor& attachableActor);
	virtual void AttachTo(UConnector* connectorToAttach, FVector attachPosition) override;
};
