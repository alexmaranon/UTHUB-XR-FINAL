// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Puzzle_Laberinto.generated.h"

UCLASS()
class UTHUB_XR_1_API APuzzle_Laberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuzzle_Laberinto();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Puzzle")
	UStaticMesh* BaseMesh;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "KeyPad")
	AActor* SelectedDoor;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Static mesh for the base of the puzzle

	



};
