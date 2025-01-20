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
//class UInputMappingHands;
class UInputAction;
class USkeletalMeshComponent;
class UAnimInstance;


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
	UInputMappingContext* MappingHands;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* TeleportInput;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* MoveInput;


	USceneComponent* VRCore;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR Set")
	UCameraComponent* VRCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR Controllers")
	UMotionControllerComponent* L_MotionController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR Controllers")
	UMotionControllerComponent* R_MotionController;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR Controllers")
	USkeletalMeshComponent* AnchorPoint;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR Controllers")
	USkeletalMeshComponent* R_AnchorPoint;

	UFUNCTION(BlueprintCallable, Category = "Movimiento")
	void MoveForward(float value);



	ATeleportActor* ActorVR;

	FVector TeleportLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* PickUpInput;


	void Teleport();

	void TeleportAction();

	void PickUpObj();

	UFUNCTION(BlueprintCallable, Category = "KeyPad")
	void DropObj();

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Valor")
	float valorMovimiento;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Valor")
	float valorMovimientoatras;

	
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	UStaticMeshComponent* LeverComponent;
	
	bool bObjectGrabbed;


	
	
	
	
	FHitResult GrabHit;
	FHitResult TeleportHit;
	FActorSpawnParameters SpawnInfo;
	FVector InitialHandPosition;
	FRotator InitialLeverRotation;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
