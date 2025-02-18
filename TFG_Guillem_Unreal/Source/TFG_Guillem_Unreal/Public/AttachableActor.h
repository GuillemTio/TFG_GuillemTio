// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PhysicsEngine/PhysicsConstraintComponent.h> // segurament necessiti incluir Connector 
#include "AttachableActor.generated.h"

class UConnector;

UCLASS()
class TFG_GUILLEM_UNREAL_API AAttachableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AAttachableActor();

	//Array de connectors per settejar a classes filles
	TArray<UConnector*> Connectors;

protected:
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere)
	int numConnectors;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Connect(UConnector* passedConnector, FVector toAttachLocation);

};
