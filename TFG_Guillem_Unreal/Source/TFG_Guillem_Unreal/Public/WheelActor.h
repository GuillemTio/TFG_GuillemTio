// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NonActivableActor.h"
#include "WheelActor.generated.h"

UCLASS()
class TFG_GUILLEM_UNREAL_API AWheelActor : public ANonActivableActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* WheelMesh;


public:
	// Sets default values for this actor's properties
	AWheelActor();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Connect() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
