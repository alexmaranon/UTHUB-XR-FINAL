// Fill out your copyright notice in the Description page of Project Settings.


#include "PilarPuzzle.h"

#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"

#include "Kismet/GameplayStatics.h"
#include "UTHUB_XR_1/VRPawn.h"
// Sets default values
APilarPuzzle::APilarPuzzle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Core = CreateDefaultSubobject<USceneComponent>(TEXT("Core"));

	RootComponent = Core;

	Puzzle_box = CreateDefaultSubobject<UBoxComponent>(TEXT("Puzzle_Zone"));
	Puzzle_box->SetCollisionProfileName(FName("Trigger"));

	Puzzle_box->OnComponentBeginOverlap.AddDynamic(this, &APilarPuzzle::OnOverlapBegin);
	Puzzle_box->OnComponentEndOverlap.AddDynamic(this, &APilarPuzzle::OnOverlapEnd);

	Puzzle_box->SetupAttachment(RootComponent);

	Snap_Pos = CreateDefaultSubobject<UChildActorComponent>(TEXT("Snap_pos"));
	Snap_Pos->SetupAttachment(RootComponent);
	//Snap_point = CreateDefaultSubobject<USceneComponent>(TEXT("Snap_point"));
	//Snap_point->SetupAttachment(RootComponent);

}

void APilarPuzzle::CheckOnExitCol()
{
	if(PlacedActor)
	{
		
		if (FVector::Dist(PlacedActor->GetActorLocation(), Puzzle_box->GetComponentLocation())>40)
		{
			IsAttached = false;
			PlacedActor = nullptr;
			RightKey = false;
		}
	}
	
}

// Called when the game starts or when spawned
void APilarPuzzle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APilarPuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APilarPuzzle::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor->ActorHasTag("key"))
	{
		APawn* MiPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		AVRPawn* VRPawn = Cast<AVRPawn>(MiPawn);

		if (VRPawn)
		{
			VRPawn->DropObj();
		}

		if (OtherActor == Selected_Key)
		{
			PlacedActor = OtherActor;
			OtherActor->SetActorLocation(Puzzle_box->GetComponentLocation());
			OtherActor->SetActorRotation(FRotator(0.f));

			OtherComponent->SetSimulatePhysics(false);

			IsAttached = true;
			RightKey = true;

		}
		else
		{
			PlacedActor = OtherActor;
			OtherActor->SetActorLocation(Puzzle_box->GetComponentLocation());
			OtherActor->SetActorRotation(FRotator(0.f));
			OtherComponent->SetSimulatePhysics(false);

			IsAttached = true;
			RightKey = false;
		}
	}
	

}

void APilarPuzzle::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
	
}



