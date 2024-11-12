// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Camera/CameraComponent.h"
//#include "MotionControllerComponent.h"

#include "GameFramework/Pawn.h"
#include "VRPawn.generated.h"

class UCameraComponent;
class UMotionControllerComponent;
class ATeleportActor;
class UInputMappingContext;
class UInputAction;


UCLASS()
class UTHUB_XR_1_API AVRPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRPawn();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* TeleportInput;

	USceneComponent* VRCore;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR Set")
	UCameraComponent* VRCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR Controllers")
	UMotionControllerComponent* L_MotionController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR Controllers")
	UMotionControllerComponent* R_MotionController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR Controllers")
	USkeletalMeshComponent* AnchorPoint;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR Controllers")
	USkeletalMeshComponent* R_AnchorPoint;



	ATeleportActor* ActorVR;

	FVector TeleportLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* PickUpInput;


	void Teleport();

	void TeleportAction();

	void PickUpObj();

	void DropObj();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	bool bObjectGrabbed;
	
	FHitResult GrabHit;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
