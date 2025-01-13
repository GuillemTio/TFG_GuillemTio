// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorPlataforma.h"

// Sets default values
AActorPlataforma::AActorPlataforma()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	PlatformMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));

	if (CubeMeshAsset.Succeeded())
	{
		PlatformMesh->SetStaticMesh(CubeMeshAsset.Object);
		PlatformMesh->SetRelativeScale3D(FVector(1.4f, 0.8f, 0.15f));
		PlatformMesh->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	}

	PlatformMesh->SetSimulatePhysics(true);

}

// Called when the game starts or when spawned
void AActorPlataforma::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorPlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

