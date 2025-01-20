// Fill out your copyright notice in the Description page of Project Settings.


#include "ProvaVehicle.h"
#include "ActorPlataforma.h"
#include "ActorRoda.h"
#include "PlataformaComponent.h"
#include "RodaComponent.h"



// Sets default values
AProvaVehicle::AProvaVehicle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//PlatformComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PlatformComponent"));
	//PlatformComponent->SetupAttachment(RootComponent);
	//PlatformComponent->SetChildActorClass(AActorPlataforma::StaticClass());
	
	//Add(basePlatform, wheel1);

	UPlataformaComponent::StaticClass(); //si funciona, hauria de ser un a funcio que fa els constructors de tots els comps
	URodaComponent::StaticClass();

}

// Called when the game starts or when spawned
void AProvaVehicle::BeginPlay()
{
	Super::BeginPlay();

	//AActorPlataforma* basePlatform = GetWorld()->SpawnActor<AActorPlataforma>(AActorPlataforma::StaticClass(), 
	//	startPosition + FVector(0.0,0.0,200.0), FRotator(0.0, 0.0, 0.0));
	//
	//AActorRoda* wheel1 = GetWorld()->SpawnActor<AActorRoda>(AActorRoda::StaticClass(), startPosition + FVector(90.0, 90.0, 180.0), 
	//	FRotator(0.0, 0.0, 0.0));
	//
	//AActorRoda* wheel2 = GetWorld()->SpawnActor<AActorRoda>(AActorRoda::StaticClass(), startPosition + FVector(-90.0, 90.0, 180.0),
	//	FRotator(0.0, 0.0, 0.0));
	//
	//AActorRoda* wheel3 = GetWorld()->SpawnActor<AActorRoda>(AActorRoda::StaticClass(), startPosition + FVector(90.0, -90.0, 180.0),
	//	FRotator(0.0, 0.0, 0.0));
	//
	//AActorRoda* wheel4 = GetWorld()->SpawnActor<AActorRoda>(AActorRoda::StaticClass(), startPosition + FVector(-90.0, -90.0, 180.0),
	//	FRotator(0.0, 0.0, 0.0));

	UPlataformaComponent* basePlatform = NewObject<UPlataformaComponent>(this, UPlataformaComponent::StaticClass(), TEXT("PlatformComponent"));
	basePlatform->RegisterComponent();
	basePlatform->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	basePlatform->SetWorldLocation(basePlatform->GetComponentLocation() + startPosition);

	URodaComponent* wheel1 = NewObject<URodaComponent>(this, URodaComponent::StaticClass(), TEXT("Roda1"));
	wheel1->RegisterComponent();
	wheel1->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	wheel1->SetWorldLocation(basePlatform->GetComponentLocation() + startPosition);
	
	URodaComponent* wheel2 = NewObject<URodaComponent>(this, URodaComponent::StaticClass(), TEXT("Roda2"));
	wheel2->RegisterComponent();
	wheel2->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	wheel2->SetWorldLocation(basePlatform->GetComponentLocation() + startPosition);

	URodaComponent* wheel3 = NewObject<URodaComponent>(this, URodaComponent::StaticClass(), TEXT("Roda3"));
	wheel3->RegisterComponent();
	wheel3->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	wheel3->SetWorldLocation(basePlatform->GetComponentLocation() + startPosition);

	URodaComponent* wheel4 = NewObject<URodaComponent>(this, URodaComponent::StaticClass(), TEXT("Roda4"));
	wheel4->RegisterComponent();
	wheel4->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	wheel4->SetWorldLocation(basePlatform->GetComponentLocation() + startPosition);

	//basePlatform->AttachComponent(RootComponent);
	//wheel1->SetupAttachment(RootComponent);
	//wheel2->SetRootComponent(RootComponent);
	//wheel3->SetRootComponent(RootComponent);
	//wheel4->SetRootComponent(RootComponent);

	AddConstraint(basePlatform, wheel1);
	AddConstraint(basePlatform, wheel2);
	AddConstraint(basePlatform, wheel3);
	AddConstraint(basePlatform, wheel4);

}

// Called every frame
void AProvaVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProvaVehicle::AddConstraint(USceneComponent* actorCompA, USceneComponent* actorCompB) //entenc que el * fa una copia innecesaria?
{
	UPhysicsConstraintComponent* newConstraint = NewObject<UPhysicsConstraintComponent>(this);
	newConstraint->RegisterComponent();
	newConstraint->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

	Constraints.Add(newConstraint);

	//newConstraint->ConstraintActor1 = actorA;
	//newConstraint->ConstraintActor2 = actorB;
	newConstraint->SetConstrainedComponents(Cast<UPrimitiveComponent>(actorCompA), NAME_None,
		Cast<UPrimitiveComponent>(actorCompB), NAME_None);

	
	newConstraint->SetWorldLocation(actorCompB->GetComponentLocation());

		//pot ser que les posicions es canviin al no ser component, les posicions del const estan fixes pero els actors es van movent

	if(actorCompB->IsA(URodaComponent::StaticClass())){ //aixo hauria de ser un switch i que depenent del component actui diferent
		newConstraint->SetLinearXLimit(LCM_Locked, 0.0f);
		newConstraint->SetLinearYLimit(LCM_Locked, 0.0f);
		newConstraint->SetLinearZLimit(LCM_Locked, 0.0f);

		newConstraint->SetAngularSwing1Limit(ACM_Locked, 0.0f);
		newConstraint->SetAngularSwing2Limit(ACM_Locked, 0.0f);
		newConstraint->SetAngularTwistLimit(ACM_Free, 0.0f);

		//newConstraint->SetAngularSwing1Limit(ACM_Locked, 0.0f);
		//newConstraint->SetAngularSwing2Limit(ACM_Free, 360.0f);
		//newConstraint->SetAngularTwistLimit(ACM_Locked, 0.0f);
	}

	// crear constraint
	// que agafi el nom dels dos
	// posar els ajustos necessaris en funcio de actorB, que seria la roda en aquest cas
}


