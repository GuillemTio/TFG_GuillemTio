// Fill out your copyright notice in the Description page of Project Settings.


#include "InputConnector.h"
#include "OutputConnector.h"
#include "AttachableActor.h"

void UInputConnector::SetConnector(AAttachableActor& attachableActor, FVector relativeAttachPosition)
{
	actorOwner = &attachableActor;
	sceneComponent = NewObject<USceneComponent>(actorOwner);
	actorOwner->AddInstanceComponent(sceneComponent);
	sceneComponent->RegisterComponent();
	sceneComponent->AttachToComponent(actorOwner->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	sceneComponent->SetRelativeLocation(relativeAttachPosition);
}

void UInputConnector::AttachTo(UConnector* connectorToAttach, FVector attachPosition)
{
	if (Cast<UOutputConnector>(connectorToAttach)) {
		connectorToAttach->AttachTo(this, attachPosition);
	}
}

void UInputConnector::AdaptActorOwnerLocation(FVector attachPosition)
{
	// aqui potser podem agafar el punt del input on ha clickat el cursor i així hi ha més llibertat
	// aixo si no hi ha snap de posició per connector output de moment
	actorOwner->SetActorLocation(sceneComponent->GetRelativeLocation()+attachPosition);
}
