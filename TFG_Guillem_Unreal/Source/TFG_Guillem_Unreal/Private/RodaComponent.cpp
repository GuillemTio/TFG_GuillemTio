// Fill out your copyright notice in the Description page of Project Settings.


#include "RodaComponent.h"

// Sets default values for this component's properties
URodaComponent::URodaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	WheelMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WheelMesh"));
	WheelMesh->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMeshAsset(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));

	if (CylinderMeshAsset.Succeeded())
	{
		WheelMesh->SetStaticMesh(CylinderMeshAsset.Object);
		WheelMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 0.3f));
		WheelMesh->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
	}

	WheelMesh->SetSimulatePhysics(true);

}


// Called when the game starts
void URodaComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void URodaComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

