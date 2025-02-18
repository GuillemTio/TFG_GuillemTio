// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformActor.h"
#include "WheelActor.h"
#include "ThrusterActor.h"
#include "OutputConnector.h"
#include <Kismet/GameplayStatics.h>

APlatformActor::APlatformActor()
{
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

	numConnectors = 5; // De prova, tot i que s'haurien d'establir amb certa logica del mesh
}

void APlatformActor::BeginPlay()
{
	Super::BeginPlay();

	//TEST
	//testActorToAttach = GetWorld()->SpawnActor<AWheelActor>(AWheelActor::StaticClass(), GetActorLocation() + FVector(70.0, 70.0, 0.0),
	//FRotator(0.0, 0.0, 0.0));
	//testActorToAttach2 = GetWorld()->SpawnActor<AWheelActor>(AWheelActor::StaticClass(), GetActorLocation() + FVector(-70.0, 70.0, 0.0),
	//	FRotator(0.0, 0.0, 0.0)); 
	//testActorToAttach3 = GetWorld()->SpawnActor<AWheelActor>(AWheelActor::StaticClass(), GetActorLocation() + FVector(70.0, -70.0, 0.0),
	//	FRotator(0.0, 0.0, 0.0)); 
	//testActorToAttach4 = GetWorld()->SpawnActor<AWheelActor>(AWheelActor::StaticClass(), GetActorLocation() + FVector(-70.0, -70.0, 0.0),
	//	FRotator(0.0, 0.0, 0.0)); 
	//thrusterToAttach = GetWorld()->SpawnActor<AThrusterActor>(AThrusterActor::StaticClass(), GetActorLocation() + FVector(0.0, 120.0, 0.0),
	//	FRotator(0.0, 90.0, 0.0));

	for (size_t i = 0; i < numConnectors; i++)
	{
		Connectors.Add(NewObject<UOutputConnector>(this));
		Cast<UOutputConnector>(Connectors[0])->SetConnector(*this);
	}

}

void APlatformActor::Connect(UConnector* passedConnector, FVector toAttachLocation)
{

	Connectors[currentConnector]->AttachTo(passedConnector, toAttachLocation);
	currentConnector++;

	if (currentConnector > Connectors.Max() - 1) currentConnector = 0;

	// Aixo va fora, el player input s'hauria d'encarregar de fer els attach pertinents
	//Connectors[0]->AttachTo(testActorToAttach->Connectors[0]);
	//Connectors[1]->AttachTo(testActorToAttach2->Connectors[0]);
	//Connectors[2]->AttachTo(testActorToAttach3->Connectors[0]);
	//Connectors[3]->AttachTo(testActorToAttach4->Connectors[0]);
	//Connectors[4]->AttachTo(thrusterToAttach->Connectors[0]);
}

void APlatformActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


