// Fill out your copyright notice in the Description page of Project Settings.


#include "ProvaVehicle.h"
#include "ActorPlataforma.h"
#include "ActorRoda.h"


// Sets default values
AProvaVehicle::AProvaVehicle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//PlatformComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PlatformComponent"));
	//PlatformComponent->SetupAttachment(RootComponent);
	//PlatformComponent->SetChildActorClass(AActorPlataforma::StaticClass());



	//Add(basePlatform, wheel1);

}

// Called when the game starts or when spawned
void AProvaVehicle::BeginPlay()
{
	Super::BeginPlay();

	AActorPlataforma* basePlatform = GetWorld()->SpawnActor<AActorPlataforma>(AActorPlataforma::StaticClass(), 
		startPosition + FVector(0.0,0.0,200.0), FRotator(0.0, 0.0, 0.0));
	
	AActorRoda* wheel1 = GetWorld()->SpawnActor<AActorRoda>(AActorRoda::StaticClass(), startPosition + FVector(70.0, 70.0, 180.0), 
		FRotator(0.0, 0.0, 0.0));

	AActorRoda* wheel2 = GetWorld()->SpawnActor<AActorRoda>(AActorRoda::StaticClass(), startPosition + FVector(-70.0, 70.0, 180.0),
		FRotator(0.0, 0.0, 0.0));

	AActorRoda* wheel3 = GetWorld()->SpawnActor<AActorRoda>(AActorRoda::StaticClass(), startPosition + FVector(70.0, -70.0, 180.0),
		FRotator(0.0, 0.0, 0.0));

	AActorRoda* wheel4 = GetWorld()->SpawnActor<AActorRoda>(AActorRoda::StaticClass(), startPosition + FVector(-70.0, -70.0, 180.0),
		FRotator(0.0, 0.0, 0.0));

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

void AProvaVehicle::AddConstraint(AActor* actorA, AActor* actorB) //entenc que el * fa una copia innecesaria?
{
	UPhysicsConstraintComponent* newConstraint = NewObject<UPhysicsConstraintComponent>(this);

	Constraints.Add(newConstraint);

	newConstraint->ConstraintActor1 = actorA;
	newConstraint->ConstraintActor2 = actorB;
	newConstraint->SetConstrainedComponents(actorA->FindComponentByClass<UPrimitiveComponent>(), NAME_None,
		actorB->FindComponentByClass<UPrimitiveComponent>(), NAME_None);

	
	newConstraint->SetWorldLocation(actorB->GetActorLocation());

	if(actorB->IsA(AActorRoda::StaticClass())){ //aixo hauria de ser un switch i que depenent del component actui diferent
		newConstraint->SetLinearXLimit(LCM_Locked, 0.0f);
		newConstraint->SetLinearYLimit(LCM_Locked, 0.0f);
		newConstraint->SetLinearZLimit(LCM_Locked, 0.0f);

		newConstraint->SetAngularSwing1Limit(ACM_Locked, 0.0f);
		newConstraint->SetAngularSwing2Limit(ACM_Free, 360.0f);
		newConstraint->SetAngularTwistLimit(ACM_Locked, 0.0f);
	}

	// crear constraint
	// que agafi el nom dels dos
	// posar els ajustos necessaris en funcio de actorB, que seria la roda en aquest cas
}

