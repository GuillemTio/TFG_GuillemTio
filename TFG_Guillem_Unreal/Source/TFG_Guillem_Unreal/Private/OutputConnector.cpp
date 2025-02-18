// Fill out your copyright notice in the Description page of Project Settings.


#include "OutputConnector.h"
#include "ThrusterActor.h"
#include "InputConnector.h"

void UOutputConnector::SetConnector(AAttachableActor& attachableActor)
{
	actorOwner = &attachableActor;
	constraint = NewObject<UPhysicsConstraintComponent>(&attachableActor);
}

void UOutputConnector::AttachTo(UConnector* connectorToAttach, FVector attachPosition)
{
	Super::AttachTo(connectorToAttach, attachPosition);

	if (Cast<UInputConnector>(connectorToAttach)) 
	{
		Cast<UInputConnector>(connectorToAttach)->AdaptActorOwnerLocation(attachPosition);

		constraint->SetWorldLocation(connectorToAttach->actorOwner->GetActorLocation());

		constraint->SetLinearXLimit(LCM_Locked, 0.0f);
		constraint->SetLinearYLimit(LCM_Locked, 0.0f);
		constraint->SetLinearZLimit(LCM_Locked, 0.0f);

		// DEPENDING ON ATTACHABLE ACTOR CLASS!!!!!!!!!! THIS IS JUST A TEST
		// el millor seria que cada connector input) tingui el seu comportament de constraint
		if (connectorToAttach->actorOwner->IsA(AThrusterActor::StaticClass())) {

			constraint->SetAngularSwing1Limit(ACM_Locked, 0.0f);
			constraint->SetAngularSwing2Limit(ACM_Locked, 0.0f);
			constraint->SetAngularTwistLimit(ACM_Locked, 0.0f);
		}
		else {
			constraint->SetAngularSwing1Limit(ACM_Locked, 0.0f);
			constraint->SetAngularSwing2Limit(ACM_Locked, 0.0f);
			constraint->SetAngularTwistLimit(ACM_Free, 0.0f);
		}

		constraint->SetConstrainedComponents(
			actorOwner->FindComponentByClass<UPrimitiveComponent>(), NAME_None,
			connectorToAttach->actorOwner->FindComponentByClass<UPrimitiveComponent>(), NAME_None
		);

		constraint->UpdateConstraintFrames();

		actorOwner->AddInstanceComponent(constraint);
		constraint->RegisterComponent();
		constraint->AttachToComponent(actorOwner->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);

		/* DEBUG TO SEE CONNECTIONS
		DrawDebugPoint(GetWorld(), constraint->GetComponentLocation(), 30.0f, FColor::Green, false, 20.0f);
		DrawDebugLine(GetWorld(), constraint->GetComponentLocation(), actorOwner->GetActorLocation(), FColor::Red, true, 20.0f, 0, 5.0f);
		DrawDebugLine(GetWorld(), constraint->GetComponentLocation(), attachableActor->GetActorLocation(), FColor::Blue, true, 20.0f, 0, 5.0f);*/
	}
}
