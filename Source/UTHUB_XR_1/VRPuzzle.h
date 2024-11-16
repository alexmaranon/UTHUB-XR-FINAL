// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VRPuzzle.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS()
class UTHUB_XR_1_API AVRPuzzle : public AActor
{
	GENERATED_BODY()



private:


public:	
	// Sets default values for this actor's properties
	AVRPuzzle();


	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Puzzle")
	UBoxComponent* Puzzle_box;

	USceneComponent* Snap_point;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);

};
