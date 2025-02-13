// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActivableActor.h"
#include <PhysicsEngine/PhysicsThrusterComponent.h>
#include "ThrusterActor.generated.h"

/**
 * 
 */
UCLASS()
class TFG_GUILLEM_UNREAL_API AThrusterActor : public AActivableActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ThrusterMesh;

public:
	AThrusterActor();

	virtual void Activate() override;
	
private:
	UPhysicsThrusterComponent* thruster;

	float thrusterPower = 80000.0;

protected: 	
	virtual void BeginPlay() override;
};
