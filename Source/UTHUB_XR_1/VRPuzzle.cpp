// Fill out your copyright notice in the Description page of Project Settings.


#include "VRPuzzle.h"

#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"

// Sets default values
AVRPuzzle::AVRPuzzle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Puzzle_box = CreateDefaultSubobject<UBoxComponent>(TEXT("Puzzle_Zone"));
	Puzzle_box->SetCollisionProfileName(FName("Trigger"));

	RootComponent = Puzzle_box;

	Puzzle_box->OnComponentBeginOverlap.AddDynamic(this, &AVRPuzzle::OnOverlapBegin);
	Puzzle_box->OnComponentEndOverlap.AddDynamic(this, &AVRPuzzle::OnOverlapEnd);

	Snap_point = CreateDefaultSubobject<USceneComponent>(TEXT("Snap_point"));
	Snap_point->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AVRPuzzle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVRPuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVRPuzzle::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor->ActorHasTag("key") && OtherComponent->IsSimulatingPhysics())
	{
		OtherActor->AttachToComponent(Snap_point, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		OtherComponent->SetSimulatePhysics(false);

		//OtherActor->SetActorLocation(Snap_point->GetComponentLocation());
		OtherActor->SetActorRotation(FRotator(0.f));

	}
}

void AVRPuzzle::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{


}

