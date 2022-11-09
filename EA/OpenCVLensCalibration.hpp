#ifndef UE4SS_SDK_OpenCVLensCalibration_HPP
#define UE4SS_SDK_OpenCVLensCalibration_HPP

class UOpenCVLensCalibrator : public UObject
{
    FVector2D MinimumCornerCoordinates;
    FVector2D MaximumCornerCoordinates;

    bool FeedRenderTarget(class UTextureRenderTarget2D* TextureRenderTarget);
    bool FeedImage(FString FilePath);
    class UOpenCVLensCalibrator* CreateCalibrator(int32 BoardWidth, int32 BoardHeight, float SquareSize, bool bUseFisheyeModel);
    bool CalculateLensParameters(FOpenCVLensDistortionParameters& LensDistortionParameters, float& MarginOfError, FOpenCVCameraViewInfo& CameraViewInfo);
};

#endif
