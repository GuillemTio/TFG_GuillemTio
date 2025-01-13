// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorPlataforma.generated.h"

UCLASS()
class TFG_GUILLEM_UNREAL_API AActorPlataforma : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PlatformMesh;

public:
	// Sets default values for this actor's properties
	AActorPlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
