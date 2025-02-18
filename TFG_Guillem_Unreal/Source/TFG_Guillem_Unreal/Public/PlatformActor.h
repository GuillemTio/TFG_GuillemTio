// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NonActivableActor.h"
#include "PlatformActor.generated.h"

UCLASS()
class TFG_GUILLEM_UNREAL_API APlatformActor : public ANonActivableActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PlatformMesh;

	//TEST
	/*AAttachableActor* testActorToAttach;
	AAttachableActor* testActorToAttach2;
	AAttachableActor* testActorToAttach3;
	AAttachableActor* testActorToAttach4;
	AAttachableActor* thrusterToAttach;*/

public:
	APlatformActor();

protected:
	virtual void BeginPlay() override;

private:
	int currentConnector = 0; //HARDCODED

public:
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	virtual void Connect(UConnector* passedConnector, FVector toAttachLocation) override;

};
