// Fill out your copyright notice in the Description page of Project Settings.


#include "PlataformaComponent.h"

// Sets default values for this component's properties
UPlataformaComponent::UPlataformaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	PlatformMesh->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));

	if (CubeMeshAsset.Succeeded())
	{
		PlatformMesh->SetStaticMesh(CubeMeshAsset.Object);
		PlatformMesh->SetRelativeScale3D(FVector(1.4f, 0.8f, 0.15f));
		PlatformMesh->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	}

	PlatformMesh->SetSimulatePhysics(true);
}



void UPlataformaComponent::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UPlataformaComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

