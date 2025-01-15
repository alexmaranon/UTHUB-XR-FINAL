// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PilarPuzzle.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS()
class UTHUB_XR_1_API APilarPuzzle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APilarPuzzle();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Puzzle")
	bool IsAttached;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Puzzle")
	bool RightKey;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Puzzle")
	UBoxComponent* Puzzle_box;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Puzzle")
	AActor* Selected_Key;

	UChildActorComponent* Snap_Pos;

	USceneComponent* Core;

	USceneComponent* Snap_point;

	AActor* PlacedActor;


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
