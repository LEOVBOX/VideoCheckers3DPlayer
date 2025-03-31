// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "StaticCamerasCharacter.generated.h"

UCLASS()
class VIDEOCHECKERS3DPLAYER_API AStaticCamerasCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AStaticCamerasCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACameraActor> CameraToFind;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
