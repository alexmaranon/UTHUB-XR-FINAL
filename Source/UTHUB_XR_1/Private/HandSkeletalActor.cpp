// Fill out your copyright notice in the Description page of Project Settings.


#include "HandSkeletalActor.h"

// Sets default values
AHandSkeletalActor::AHandSkeletalActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHandSkeletalActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHandSkeletalActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

