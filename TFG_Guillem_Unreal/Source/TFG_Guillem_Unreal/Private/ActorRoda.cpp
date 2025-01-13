// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorRoda.h"

// Sets default values
AActorRoda::AActorRoda()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
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

// Called when the game starts or when spawned
void AActorRoda::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AActorRoda::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

