// Fill out your copyright notice in the Description page of Project Settings.


#include "Connector.h"
#include "ThrusterActor.h"

void UConnector::SetConnector(bool isConnectorExternal, AAttachableActor& attachableActorOwner)
{
	isExternal = isConnectorExternal;
	actorOwner = &attachableActorOwner;

	if (isExternal) {
		constraint = NewObject<UPhysicsConstraintComponent>(actorOwner);
	}


}
bool UConnector::GetIsExternal() 
{
	return isExternal;
}

void UConnector::AttachTo(UConnector* connectorToAttach)
{

	//Potser ens interessa colocar l'actor attachat per que es vegi integrat igualant les posicions dels connectors

	constraint->SetWorldLocation(connectorToAttach->actorOwner->GetActorLocation());

	constraint->SetLinearXLimit(LCM_Locked, 0.0f);
	constraint->SetLinearYLimit(LCM_Locked, 0.0f);
	constraint->SetLinearZLimit(LCM_Locked, 0.0f);

	// DEPENDING ON ATTACHABLE ACTOR CLASS!!!!!!!!!! THIS IS JUST A TEST
	// el millor seria que cada connector intern (F) tingui el seu comportament de constraint
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

	constraint->SetConstrainedComponents( // Potser millor tornar a UPrimitiveComponent?
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

