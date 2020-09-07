// Fill out your copyright notice in the Description page of Project Settings.


#include "MovieRenderStereoCamera.h"

#include "CineCameraComponent.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SphereComponent.h"

// Sets default values
AMovieRenderStereoCamera::AMovieRenderStereoCamera()
	:
	DistanceOfEyes(10.4f),
	bUseParallelMode(true),
	DistanceOfFocus(100.f),
	bUseStereoPreview(false)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCineCameraComponent>(TEXT("MainCamera"));
	RootComponent = Camera;

	LeftCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("LeftCaptureComponent"));
	InitCaptureComponent(LeftCaptureComponent);

	RightCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("RightCaptureComponent"));
	InitCaptureComponent(RightCaptureComponent);

	FString WorldName = GetWorld() ? GetWorld()->GetMapName() : TEXT("");
	FString MaterialName = this->GetName() + TEXT("StereoScopicMaterialDynamicInstance");
	
	//Material'/MovieRenderPipeline/Camera/Mat_StereoScopic.Mat_StereoScopic'
	StereoScopicMaterialOrigin = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("/MovieRenderPipeline/Camera/Mat_StereoScopic.Mat_StereoScopic")).Object;
	StereoScopicPostProcessMaterial = UMaterialInstanceDynamic::Create(StereoScopicMaterialOrigin, this, FName(MaterialName));
	StereoScopicPostProcessMaterial->SetTextureParameterValue(FName(TEXT("LeftEyeTexture")), LeftCaptureComponent->TextureTarget);
	StereoScopicPostProcessMaterial->SetTextureParameterValue(FName(TEXT("RightEyeTexture")), RightCaptureComponent->TextureTarget);

	ZeroFocusVisible = CreateDefaultSubobject<USphereComponent>(TEXT("ZeroFocusVisible"));
	ZeroFocusVisible->SetupAttachment(RootComponent);
	ZeroFocusVisible->SetSphereRadius(10.f);
}

// Called when the game starts or when spawned
void AMovieRenderStereoCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovieRenderStereoCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMovieRenderStereoCamera::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	//Apply Stereo Preview Mode
	if(bUseStereoPreview != OldbUseStereoPreview)
	{
		if (bUseStereoPreview)
		{
			if(IsValid(Camera) && IsValid(StereoScopicPostProcessMaterial))
			{
				Camera->PostProcessSettings.AddBlendable(StereoScopicPostProcessMaterial, 10.f);	
			}
			LeftCaptureComponent->SetVisibility(true);
			RightCaptureComponent->SetVisibility(true);
			LeftCaptureComponent->bTickInEditor = true;
			LeftCaptureComponent->bCaptureEveryFrame = true;
			LeftCaptureComponent->bCaptureOnMovement = true;
			RightCaptureComponent->bTickInEditor = true;
			RightCaptureComponent->bCaptureEveryFrame = true;
			RightCaptureComponent->bCaptureOnMovement = true;
		}
		else
		{
			if (IsValid(Camera) && IsValid(StereoScopicPostProcessMaterial))
			{
				Camera->PostProcessSettings.RemoveBlendable(StereoScopicPostProcessMaterial);
			}
			LeftCaptureComponent->SetVisibility(false);
			RightCaptureComponent->SetVisibility(false);
			LeftCaptureComponent->bTickInEditor = false;
			LeftCaptureComponent->bCaptureEveryFrame = false;
			LeftCaptureComponent->bCaptureOnMovement = false;
			RightCaptureComponent->bTickInEditor = false;
			RightCaptureComponent->bCaptureEveryFrame = false;
			RightCaptureComponent->bCaptureOnMovement = false;
		}
		OldbUseStereoPreview = bUseStereoPreview;
	}

	//Apply Parallel Mode
	if (OldbUseParallelMode != bUseParallelMode)
	{
		if (bUseParallelMode)
		{
			ZeroFocusVisible->SetVisibility(false);
			RightCaptureComponent->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
			LeftCaptureComponent->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
		}
		else
		{
			ZeroFocusVisible->SetVisibility(true);
		}
	}

	//Apply Distance Of Eyes and Set Rotation of CaptureComponent
	if (OldDistanceOfEyes != DistanceOfEyes)
	{
		LeftCaptureComponent->SetRelativeLocation(FVector(0.f, -DistanceOfEyes / 2.f, 0.f));
		CaptureComponentRefresh(LeftCaptureComponent);

		RightCaptureComponent->SetRelativeLocation(FVector(0.f, DistanceOfEyes / 2.f, 0.f));
		CaptureComponentRefresh(RightCaptureComponent);

		if(!bUseParallelMode)
		{
			AlignCaptureComponentsRotationToFocus();
		}
	}

	if (OldDistanceOfFocus != DistanceOfFocus && !bUseParallelMode)
	{
		ZeroFocusVisible->SetRelativeLocation(FVector(DistanceOfFocus, 0.f, 0.f));
		if(!bUseParallelMode)
		{
			AlignCaptureComponentsRotationToFocus();
		}
	}
}

void AMovieRenderStereoCamera::InitCaptureComponent(USceneCaptureComponent2D* InCaptureComponent)
{
	InCaptureComponent->SetVisibility(true);
	InCaptureComponent->SetHiddenInGame(false);
	InCaptureComponent->FOVAngle = Camera->FieldOfView;
	InCaptureComponent->bTickInEditor = false;
	InCaptureComponent->bCaptureEveryFrame = true;
	InCaptureComponent->bAlwaysPersistRenderingState = true;
	InCaptureComponent->bCaptureOnMovement = false;
	InCaptureComponent->CaptureSource = ESceneCaptureSource::SCS_FinalColorLDR;
	InCaptureComponent->SetupAttachment(RootComponent);

	const FName TargetName = MakeUniqueObjectName(this, UTextureRenderTarget2D::StaticClass(), TEXT("SceneCaptureTextureTarget"));
	if (InCaptureComponent->TextureTarget == nullptr)
	{
		InCaptureComponent->TextureTarget = NewObject<UTextureRenderTarget2D>(this, TargetName);
	}
	InCaptureComponent->TextureTarget->InitCustomFormat(1920.f, 1068.f, PF_FloatRGBA, false);
	InCaptureComponent->TextureTarget->ClearColor = FLinearColor::Red;
	InCaptureComponent->TextureTarget->TargetGamma = 2.2f;
	
	CopyCameraSettingToCaptureComponent(Camera, InCaptureComponent);
}

void AMovieRenderStereoCamera::CaptureComponentRefresh(USceneCaptureComponent2D* InCaptureComponent)
{
	InCaptureComponent->FOVAngle = Camera->FieldOfView;
	InCaptureComponent->TextureTarget->InitCustomFormat(1920.f, 1068.f, PF_FloatRGBA, false);
	CopyCameraSettingToCaptureComponent(Camera, InCaptureComponent);
}

void AMovieRenderStereoCamera::CopyCameraSettingToCaptureComponent(UCameraComponent* OriginCamera,
	USceneCaptureComponent2D* DstCaptureComponent)
{
	if(OriginCamera && DstCaptureComponent)
	{
		DstCaptureComponent->FOVAngle = OriginCamera->FieldOfView;
		FMinimalViewInfo CameraViewInfo;
		OriginCamera->GetCameraView(0.f, CameraViewInfo);

		const FPostProcessSettings& OriginPPSettings = CameraViewInfo.PostProcessSettings;
		FPostProcessSettings& DstPPSettings = DstCaptureComponent->PostProcessSettings;

		FWeightedBlendables DstWeightBlendables = DstPPSettings.WeightedBlendables;

		DstPPSettings = OriginPPSettings;

		DstPPSettings.WeightedBlendables = DstWeightBlendables;
	}
}

void AMovieRenderStereoCamera::AlignCaptureComponentsRotationToFocus()
{
	float CorrectionAngle = atan2(DistanceOfEyes / 2.f, DistanceOfFocus) * (180 / PI);

	RightCaptureComponent->SetRelativeRotation(FRotator(0, -CorrectionAngle, 0.f));
	LeftCaptureComponent->SetRelativeRotation(FRotator(0, CorrectionAngle, 0.f));
}

