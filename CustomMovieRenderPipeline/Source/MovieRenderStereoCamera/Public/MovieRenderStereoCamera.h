// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovieRenderStereoCamera.generated.h"

class UCameraComponent;
class UCineCameraComponent;
class USphereComponent;

UCLASS()
class MOVIERENDERSTEREOCAMERA_API AMovieRenderStereoCamera : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovieRenderStereoCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform) override;

private:
	void InitCaptureComponent(USceneCaptureComponent2D* InCaptureComponent);
	void CaptureComponentRefresh(USceneCaptureComponent2D* InCaptureComponent);
	void CopyCameraSettingToCaptureComponent(UCameraComponent* OriginCamera, USceneCaptureComponent2D* DstCaptureComponent);

	void AlignCaptureComponentsRotationToFocus();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
	UCineCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, Category = "StereoSetting", meta = (ClampMin = "0", ForceUnits = cm))
	float DistanceOfEyes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, Category = "StereoSetting")
	bool bUseParallelMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, Category = "StereoSetting", meta = (ClampMin = "0", FocreUnits = cm))
	float DistanceOfFocus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, Category = "StereoSetting")
	bool bUseStereoPreview;

	float OldDistanceOfEyes;
	bool OldbUseParallelMode;
	float OldDistanceOfFocus;
	bool OldbUseStereoPreview;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Hide")
	USceneCaptureComponent2D* LeftCaptureComponent;
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Hide")
	USceneCaptureComponent2D* RightCaptureComponent;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Hide")
	UTextureRenderTarget2D* LeftRenderTarget;
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Hide")
	UTextureRenderTarget2D* RightRenderTarget;

	USphereComponent* ZeroFocusVisible;

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Hide")
	UMaterialInstanceDynamic* StereoScopicPostProcessMaterial;
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Hide")
	UMaterial* StereoScopicMaterialOrigin;



	
};
