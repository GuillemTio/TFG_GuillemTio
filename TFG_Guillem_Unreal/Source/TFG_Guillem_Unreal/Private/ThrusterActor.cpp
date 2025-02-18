
#include "ThrusterActor.h"
#include "InputConnector.h"

AThrusterActor::AThrusterActor()
{
	ThrusterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ThrusterMesh"));
	SetRootComponent(ThrusterMesh);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));

	if (CubeMeshAsset.Succeeded())
	{
		ThrusterMesh->SetStaticMesh(CubeMeshAsset.Object);
		ThrusterMesh->SetRelativeScale3D(FVector(0.4f, 0.4f, 0.4f));
	}

	ThrusterMesh->SetSimulatePhysics(true);

	thruster = CreateDefaultSubobject<UPhysicsThrusterComponent>(TEXT("ThrusterComponent"));
	thruster->SetupAttachment(RootComponent);
	thruster->ThrustStrength = thrusterPower;
}

void AThrusterActor::Activate()
{
	Super::Activate();
	thruster->Activate();
}


void AThrusterActor::BeginPlay()
{
	Super::BeginPlay();

	Connectors.Add(NewObject<UInputConnector>(this));
	Cast<UInputConnector>(Connectors[0])->SetConnector(*this, FVector(5.0, 0.0, 0.0));


	//No aniria aqui, vindria activat per input del jugador
	Activate();

}

void AThrusterActor::Connect(UConnector* passedConnector, FVector toAttachLocation)
{
	Connectors[0]->AttachTo(passedConnector, toAttachLocation);
}