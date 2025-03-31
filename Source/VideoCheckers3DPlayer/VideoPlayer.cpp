#include "VideoPlayer.h"

AVideoPlayer::AVideoPlayer()
{
	PlaneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneMesh"));
	RootComponent = PlaneMesh;

	// �������� ���� ���������
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneMeshAsset(TEXT("/Engine/BasicShapes/Plane.Plane"));
	if (PlaneMeshAsset.Succeeded())
	{
		PlaneMesh->SetStaticMesh(PlaneMeshAsset.Object);
	}

	// ��������� ���������� ��������
	FVector Scale(1.92f, 1.08f, 1.0f); // ������� ��� ������� 192x108 ������
	FRotator Rotation(0, 90, 90);
	PlaneMesh->SetWorldScale3D(Scale);
	PlaneMesh->SetWorldRotation(Rotation);
	
}

void AVideoPlayer::BeginPlay()
{
	SetCamera();
    FVector2D DesiredWindowSize(VideoWidgetResolution.X + WindowResolutionCorrection.X, VideoWidgetResolution.Y + WindowResolutionCorrection.Y);

    GetWorld()->GetGameViewport()->GetWindow()->Resize(DesiredWindowSize);
    // ������������� MediaPlayer � MediaTexture
    if (MediaPlayer && MediaSource)
    {
        // �������� MediaTexture
        MediaTexture = NewObject<UMediaTexture>(this);
        MediaTexture->SetMediaPlayer(MediaPlayer);
        MediaTexture->UpdateResource();

        VideoMaterial = UMaterialInstanceDynamic::Create(SourceMaterial, this);
        if (VideoMaterial)
        {
            // ��������� MediaTexture �� ��������
            VideoMaterial->SetTextureParameterValue("Texture", MediaTexture);
            PlaneMesh->SetMaterial(0, VideoMaterial);
        }
        
        // ��������� � ������������� �����
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
    // �������� PlayerController
    if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0))
    {
        // ������� ������ � �����
        TArray<AActor*> FoundCameras;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), FoundCameras);

        if (FoundCameras.Num() > 0)
        {
            // ������������� ������ ��� ViewTarget
            ACameraActor* CameraActor = Cast<ACameraActor>(FoundCameras[0]);
            PlayerController->SetViewTarget(CameraActor);

            // ������������ ���������� �� ���������
            float PlaneWidth = 192.0f; // ������ ��������� ����� ��������������� (1.92 * 100)
            float FOV = CameraActor->GetCameraComponent()->FieldOfView; // ���� ������ ������
            float Distance = (PlaneWidth / 2) / FMath::Tan(FMath::DegreesToRadians(FOV / 2));

            // ������������� ��������� ���������
            FVector CameraLocation = CameraActor->GetActorLocation();
            FVector PlaneLocation = CameraLocation + CameraActor->GetActorForwardVector() * Distance;
            SetActorLocation(PlaneLocation);
        }
    }
}

void AVideoPlayer::SetVideo()
{
}
