
#include "ThrusterActor.h"
#include "Connector.h"

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

	Connectors.Add(NewObject<UConnector>(this));
	Connectors[0]->SetConnector(true, *this);


	//No aniria aqui, vindria activat per input del jugador
	Activate();

}
