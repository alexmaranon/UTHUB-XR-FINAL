// Fill out your copyright notice in the Description page of Project Settings.


#include "Keypad.h"

// Sets default values
AKeypad::AKeypad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AKeypad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKeypad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AKeypad::actualValue(FString actualNumber)
{
	if(actualNumber==NeededValue)
	{
		return true;
	}
	else
	{
		return false;
	}
}

