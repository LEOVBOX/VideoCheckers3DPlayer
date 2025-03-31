#include "VideoPlayer.h"

AVideoPlayer::AVideoPlayer()
{
	PlaneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneMesh"));
	RootComponent = PlaneMesh;

	// Загрузка меша плоскости
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneMeshAsset(TEXT("/Engine/BasicShapes/Plane.Plane"));
	if (PlaneMeshAsset.Succeeded())
	{
		PlaneMesh->SetStaticMesh(PlaneMeshAsset.Object);
	}

	// Установка начального масштаба
	FVector Scale(1.92f, 1.08f, 1.0f); // Масштаб для размера 192x108 единиц
	FRotator Rotation(0, 90, 90);
	PlaneMesh->SetWorldScale3D(Scale);
	PlaneMesh->SetWorldRotation(Rotation);
	
}

void AVideoPlayer::BeginPlay()
{
	SetCamera();
    FVector2D DesiredWindowSize(VideoWidgetResolution.X + WindowResolutionCorrection.X, VideoWidgetResolution.Y + WindowResolutionCorrection.Y);

    GetWorld()->GetGameViewport()->GetWindow()->Resize(DesiredWindowSize);
    // Инициализация MediaPlayer и MediaTexture
    if (MediaPlayer && MediaSource)
    {
        // Создание MediaTexture
        MediaTexture = NewObject<UMediaTexture>(this);
        MediaTexture->SetMediaPlayer(MediaPlayer);
        MediaTexture->UpdateResource();

        VideoMaterial = UMaterialInstanceDynamic::Create(SourceMaterial, this);
        if (VideoMaterial)
        {
            // Назначаем MediaTexture на материал
            VideoMaterial->SetTextureParameterValue("Texture", MediaTexture);
            PlaneMesh->SetMaterial(0, VideoMaterial);
        }
        
        // Открываем и воспроизводим видео
        MediaPlayer->OpenSource(MediaSource);
        MediaPlayer->Play();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("MediaPlayer or MediaSource is not set!"));
    }
}

void AVideoPlayer::SetCamera()
{
    // Получаем PlayerController
    if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0))
    {
        // Находим камеру в сцене
        TArray<AActor*> FoundCameras;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), FoundCameras);

        if (FoundCameras.Num() > 0)
        {
            // Устанавливаем камеру как ViewTarget
            ACameraActor* CameraActor = Cast<ACameraActor>(FoundCameras[0]);
            PlayerController->SetViewTarget(CameraActor);

            // Рассчитываем расстояние до плоскости
            float PlaneWidth = 192.0f; // Ширина плоскости после масштабирования (1.92 * 100)
            float FOV = CameraActor->GetCameraComponent()->FieldOfView; // Поле зрения камеры
            float Distance = (PlaneWidth / 2) / FMath::Tan(FMath::DegreesToRadians(FOV / 2));

            // Устанавливаем положение плоскости
            FVector CameraLocation = CameraActor->GetActorLocation();
            FVector PlaneLocation = CameraLocation + CameraActor->GetActorForwardVector() * Distance;
            SetActorLocation(PlaneLocation);
        }
    }
}

void AVideoPlayer::SetVideo()
{
}
