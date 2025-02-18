
#include "WheelActor.h"
#include "InputConnector.h"

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

	Connectors.Add(NewObject<UInputConnector>(this));
	Cast<UInputConnector>(Connectors[0])->SetConnector(*this, FVector(0.0,5.0,0.0));

}

void AWheelActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWheelActor::Connect(UConnector* passedConnector, FVector toAttachLocation)
{
	Connectors[0]->AttachTo(passedConnector, toAttachLocation);
}
