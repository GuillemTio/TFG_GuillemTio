// Fill out your copyright notice in the Description page of Project Settings.


#include "AttachableActor.h"

AAttachableActor::AAttachableActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AAttachableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAttachableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAttachableActor::Connect(UConnector* passedConnector, FVector toAttachLocation)
{
}
