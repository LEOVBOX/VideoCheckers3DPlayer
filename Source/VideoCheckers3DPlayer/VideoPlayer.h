#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "MediaPlayer.h"
#include "MediaTexture.h"
#include "FileMediaSource.h"
#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"
#include "VideoPlayer.generated.h"

UCLASS()
class AVideoPlayer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AVideoPlayer();

protected:
	//Camera Actor which the Actor sets Viewtarget
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACameraActor> CameraToFind;

    UPROPERTY(EditAnywhere, Category = "Video")
    FVector2D VideoWidgetResolution = FVector2D(1920.0f, 1080.0f);

    UPROPERTY(EditAnywhere, Category = "Video")
    FVector2D WindowResolutionCorrection = FVector2D(-12, -12);

    UPROPERTY(EditAnywhere, Category = "Video")
    FString VideoFilePath;

    UStaticMeshComponent* PlaneMesh;


    UPROPERTY(EditAnywhere, Category = "Video")
    UMediaPlayer* MediaPlayer;

    UPROPERTY(EditAnywhere, Category = "Video")
    UFileMediaSource* MediaSource;

    UPROPERTY()
    UMaterialInstanceDynamic* VideoMaterial;

    UPROPERTY(EditAnywhere, Category="Video")
    UMaterial* SourceMaterial;

    UPROPERTY(EditAnywhere, Category="Video")
    UMediaTexture* MediaTexture;

   	virtual void BeginPlay() override;
private:
	void SetCamera();
    void SetVideo();
};