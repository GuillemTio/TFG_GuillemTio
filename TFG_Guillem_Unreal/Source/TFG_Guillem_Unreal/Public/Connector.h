// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <PhysicsEngine/PhysicsConstraintComponent.h>
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
	bool isExternal; 

	UPhysicsConstraintComponent* constraint;
	

public: 
	AAttachableActor* actorOwner;

	void SetConnector(bool isConnectorExternal, AAttachableActor& attachableActor);
	bool GetIsExternal();

	void AttachTo(UConnector* attachableActor);
	
};
