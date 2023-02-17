#ifndef UE4SS_SDK_OpenCVLensDistortion_HPP
#define UE4SS_SDK_OpenCVLensDistortion_HPP

struct FOpenCVCameraViewInfo
{
    float HorizontalFOV;
    float VerticalFOV;
    float FocalLengthRatio;

};

struct FOpenCVLensDistortionParameters
{
    float K1;
    float K2;
    float P1;
    float P2;
    float K3;
    float K4;
    float K5;
    float K6;
    FVector2D F;
    FVector2D C;
    bool bUseFisheyeModel;

};

class UOpenCVLensDistortionBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool NotEqual_CompareLensDistortionModels(const FOpenCVLensDistortionParameters& A, const FOpenCVLensDistortionParameters& B);
    bool EqualEqual_CompareLensDistortionModels(const FOpenCVLensDistortionParameters& A, const FOpenCVLensDistortionParameters& B);
    void DrawDisplacementMapToRenderTarget(const class UObject* WorldContextObject, class UTextureRenderTarget2D* OutputRenderTarget, class UTexture2D* PreComputedUndistortDisplacementMap);
    class UTexture2D* CreateUndistortUVDisplacementMap(const FOpenCVLensDistortionParameters& LensParameters, const FIntPoint& ImageSize, const float CroppingFactor, FOpenCVCameraViewInfo& CameraViewInfo);
};

#endif
