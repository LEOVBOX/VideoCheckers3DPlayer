// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticCamerasCharacter.h"

// Sets default values
AStaticCamerasCharacter::AStaticCamerasCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStaticCamerasCharacter::BeginPlay()
{
	Super::BeginPlay();

		////Cast to Player Character's PlayerController

		//if (APlayerController* PlayerCharacterController = Cast<APlayerController>(this->GetController()))
		//{
		//	//Array to contain found Camera Actors
		//	TArray<AActor*> FoundActors;

		//	//Utility function to populate array with all Camera Actors in the level

		//	UGameplayStatics::GetAllActorsOfClass(GetWorld(), CameraToFind, FoundActors);

		//	//Sets Player Controller view to the first CameraActor found
		//	PlayerCharacterController->SetViewTarget(FoundActors[0]);
		//}
}

// Called every frame
void AStaticCamerasCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStaticCamerasCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

