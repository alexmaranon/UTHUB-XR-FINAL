// Fill out your copyright notice in the Description page of Project Settings.


#include "VRPawn.h"

#include "InputMappingContext.h"
#include "InputAction.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "MotionControllerComponent.h"
#include "TeleportActor.h"

// Sets default values
AVRPawn::AVRPawn()
{

	VRCore = CreateDefaultSubobject<USceneComponent>(TEXT("VR_Body"));

	RootComponent = VRCore;
	//Instance Camera
	VRCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("VR_Camera"));
	//Attach to pawn
	VRCamera->SetupAttachment(RootComponent);

	//Instance MotionController
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	//Attach to pawn
	L_MotionController->SetupAttachment(RootComponent);
	//Assign Hand
	L_MotionController->SetTrackingMotionSource(FName("Left"));

	//Instance MotionController
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	//Attach to pawn
	R_MotionController->SetupAttachment(RootComponent);
	//Assign Hand
	R_MotionController->SetTrackingMotionSource(FName("Right"));


	//Attach to pawn
	//Assign Hand


	/*//Instance Anchor to visualize
	AnchorPoint = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Anchor_Point"));
	//Assign to pawn
	AnchorPoint->SetupAttachment(L_MotionController);

	//Instance Anchor to visualize
	R_AnchorPoint = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("R_Anchor_Point_Test"));
	//Assign to pawn
	R_AnchorPoint->SetupAttachment(R_MotionController);*/


	
}


void AVRPawn::Teleport()
{

	//FVector TeleportLocation;

	FVector TeleportStart = R_MotionController->GetComponentLocation() + (R_MotionController->GetForwardVector() * 20.f);
	FVector TeleportEnd = R_MotionController->GetComponentLocation() + (R_MotionController->GetForwardVector()*3000.f) ;

	FHitResult TeleportHit;
	FActorSpawnParameters SpawnInfo;

	if (ActorVR!=nullptr)
	{
		ActorVR->Destroy();
	}

	if (GetWorld()== nullptr) return;

	if(GetWorld()->LineTraceSingleByChannel(TeleportHit, TeleportStart,TeleportEnd, ECC_GameTraceChannel1))
	{
		
		if(TeleportHit.bBlockingHit)
		{
			if (TeleportHit.GetActor()->ActorHasTag("Floor"))
			{
				DrawDebugLine(GetWorld(), TeleportStart, TeleportEnd, FColor::Red, false, 0.1f);

				ActorVR = GetWorld()->SpawnActor<ATeleportActor>(TeleportHit.ImpactPoint, FRotator(0.f), SpawnInfo);
			}
			
		}
			
	}

}

void AVRPawn::TeleportAction()
{

	if(ActorVR)
	{
		FVector TeleportPosition = ActorVR->GetActorLocation();
		//Aquí añadir el tamaño del player
		TeleportPosition.Z += 120;
		//TeleportPosition.Z += GetComponentsBoundingBox().GetExtent().Z;

		SetActorLocation(TeleportPosition);

		if (ActorVR->Destroy())
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Destroy"));
		}
	}
	}
	

	

void AVRPawn::PickUpObj()
{

	

	
	if(!bObjectGrabbed)
	{
		FVector TeleportStart = R_MotionController->GetComponentLocation() + (R_MotionController->GetForwardVector() * 20.f);
		FVector TeleportEnd = TeleportStart + (R_MotionController->GetForwardVector() * 3000.f);

		if (GetWorld()->LineTraceSingleByChannel(GrabHit, TeleportStart, TeleportEnd, ECC_GameTraceChannel1))
		{
			DrawDebugLine(GetWorld(), TeleportStart, TeleportEnd, FColor::Red, false, 3.f);

			if (GrabHit.GetComponent()->IsSimulatingPhysics() && GrabHit.GetActor()->ActorHasTag("Pickable"))
			{
				GrabHit.GetComponent()->SetSimulatePhysics(false);
				GrabHit.GetActor()->AttachToComponent(R_MotionController, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Destroy"));


				bObjectGrabbed = true;
			}

			if (GrabHit.GetActor()->ActorHasTag("Lever"))
			{
				if(!LeverComponent)
				{
					LeverComponent = Cast<UStaticMeshComponent>(GrabHit.GetComponent());

					InitialHandPosition = R_MotionController->GetComponentLocation() - LeverComponent->GetComponentLocation();
					InitialHandPosition = InitialHandPosition.GetSafeNormal(); // Normalizamos el vector

					// Guardar la rotación inicial de la rueda
					InitialLeverRotation = LeverComponent->GetComponentRotation();
				}

			}
		}
		if (LeverComponent)
		{
			FVector CurrentHandPosition = R_MotionController->GetComponentLocation() - LeverComponent->GetComponentLocation();
			CurrentHandPosition = CurrentHandPosition.GetSafeNormal(); // Normalizamos el vector

			// Calcular el ángulo entre la posición inicial y la actual usando el producto escalar
			float Angle = FMath::Acos(FVector::DotProduct(InitialHandPosition, CurrentHandPosition));

			// Determinar la dirección de la rotación (hacia adelante o atrás)
			FVector CrossProduct = FVector::CrossProduct(InitialHandPosition, CurrentHandPosition);
			float Direction = (CrossProduct.Z > 0) ? 1.0f : -1.0f; // Asumiendo que la rueda rota en el eje Z

			// Aplicar la rotación acumulativa a la rueda
			FRotator NewRotation = InitialLeverRotation;
			NewRotation.Pitch += FMath::RadiansToDegrees(Angle) * Direction; // Convertimos de radianes a grados

			LeverComponent->SetWorldRotation(NewRotation);
		}
	}

}

void AVRPawn::DropObj()
{
	if(bObjectGrabbed)
	{
		GrabHit.GetComponent()->SetSimulatePhysics(true);
		GrabHit.GetActor()->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		bObjectGrabbed = false;
	}
	if(LeverComponent)
	{
		LeverComponent = nullptr;
	}

}

// Called when the game starts or when spawned
void AVRPawn::BeginPlay()
{
	Super::BeginPlay();


	if(APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if(UEnhancedInputLocalPlayerSubsystem* InputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			InputSystem->AddMappingContext(DefaultMappingContext, 0);
			InputSystem->AddMappingContext(MappingHands, 1);
		}
	}

	
}

// Called every frame
void AVRPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AVRPawn:: MoveForward(float value)
{
	if(value!= 0.0f)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Me Muevo"));
		FVector ForwardDirection = GetActorForwardVector();
		FVector NewLocation = GetActorLocation() + (ForwardDirection * value * 1000.f * GetWorld()->GetDeltaSeconds());

		// Establece la nueva posición del actor
		SetActorLocation(NewLocation);
		//AddMovementInput(GetPaw)
	}
}

// Called to bind functionality to input
void AVRPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &AVRPawn::MoveForward);

	if(UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Bind
		EnhancedInputComponent->BindAction(TeleportInput, ETriggerEvent::Triggered, this,&AVRPawn::Teleport);
		EnhancedInputComponent->BindAction(TeleportInput, ETriggerEvent::Completed, this,&AVRPawn::TeleportAction);


		EnhancedInputComponent->BindAction(PickUpInput, ETriggerEvent::Triggered, this,&AVRPawn::PickUpObj);

		EnhancedInputComponent->BindAction(PickUpInput, ETriggerEvent::Completed, this,&AVRPawn::DropObj);

		



		//EnhancedInputComponent->BindAction(PickUpInput, ETriggerEvent::Completed, this,&AVRPawn::DropObj);

		//EnhancedInputComponent->BindAction(GripInputAction, ETriggerEvent::Triggered, this, &AVRPawn::GripHand);
		//EnhancedInputComponent->BindAction(ReleaseInputAction, ETriggerEvent::Triggered, this, &AVRPawn::ReleaseHand);


	}

}
