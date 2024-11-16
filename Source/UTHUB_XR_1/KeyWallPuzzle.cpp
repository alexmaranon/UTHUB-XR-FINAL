// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyWallPuzzle.h"
#include "Components/BoxComponent.h"

// Sets default values
AKeyWallPuzzle::AKeyWallPuzzle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	RootComponent = CollisionBox;

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AKeyWallPuzzle::OnOverlapBegin);

	CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CollisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CollisionBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);


}

// Called when the game starts or when spawned
void AKeyWallPuzzle::BeginPlay()
{
	Super::BeginPlay();
	
}

void AKeyWallPuzzle::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		UE_LOG(LogTemp, Warning, TEXT("Entro"), *OtherActor->GetName());

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Overlapped with: %s"), *OtherActor->GetName()));
	}
}

// Called every frame
void AKeyWallPuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

