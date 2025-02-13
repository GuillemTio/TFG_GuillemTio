
#include "WheelActor.h"
#include "Connector.h"

AWheelActor::AWheelActor()
{
	PrimaryActorTick.bCanEverTick = true;

	WheelMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WheelMesh"));
	WheelMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMeshAsset(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));

	if (CylinderMeshAsset.Succeeded())
	{
		WheelMesh->SetStaticMesh(CylinderMeshAsset.Object);
		WheelMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 0.3f));
		WheelMesh->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
	}

	WheelMesh->SetSimulatePhysics(true);

}

void AWheelActor::BeginPlay()
{
	Super::BeginPlay();

	Connectors.Add(NewObject<UConnector>(this));
	Connectors[0]->SetConnector(true, *this);

}

void AWheelActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWheelActor::Connect()
{
	Super::Connect();
}
