// Fill out your copyright notice in the Description page of Project Settings.


#include "TeleportActor.h"

// Sets default values
ATeleportActor::ATeleportActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	TeleportActor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleportImpact"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/SM_TeleportMeshActor.SM_TeleportMeshActor'"));

	UStaticMesh* TeleporterAsset = MeshAsset.Object;

	TeleportActor->SetStaticMesh(TeleporterAsset);
	TeleportActor->SetWorldScale3D(FVector(0.2f));

	RootComponent = TeleportActor;

}

// Called when the game starts or when spawned
void ATeleportActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATeleportActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RootComponent->AddWorldRotation(FRotator(0.f, 0.1f, 0.f), false, nullptr, ETeleportType::None);


}

