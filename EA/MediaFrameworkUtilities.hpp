#ifndef UE4SS_SDK_MediaFrameworkUtilities_HPP
#define UE4SS_SDK_MediaFrameworkUtilities_HPP

class UMediaBundle : public UObject
{
    class UMediaSource* MediaSource;
    bool bLoopMediaSource;
    bool bReopenSourceOnError;
    class UMediaPlayer* MediaPlayer;
    class UMediaTexture* MediaTexture;
    class UMaterialInterface* Material;
    FOpenCVLensDistortionParameters LensParameters;
    FOpenCVCameraViewInfo UndistortedCameraViewInfo;
    FOpenCVLensDistortionParameters CurrentLensParameters;
    class UTextureRenderTarget2D* LensDisplacementMap;
    int32 ReferenceCount;

    void OnMediaOpenOpened(FString DeviceUrl);
    void OnMediaOpenFailed(FString DeviceUrl);
    void OnMediaClosed();
    FOpenCVCameraViewInfo GetUndistortedCameraViewInfo();
    class UMediaTexture* GetMediaTexture();
    class UMediaSource* GetMediaSource();
    class UMediaPlayer* GetMediaPlayer();
    class UMaterialInterface* GetMaterial();
    class UTextureRenderTarget2D* GetLensDisplacementTexture();
};

class AMediaBundleActorBase : public AActor
{
    class UTextureRenderTarget2D* GarbageMatteMask;
    class UMediaBundle* MediaBundle;
    bool bAutoPlay;
    bool bPlayWhileEditing;
    class UPrimitiveComponent* PrimitiveCmp;
    class UMediaSoundComponent* MediaSoundCmp;
    class UMaterialInstanceDynamic* Material;
    int32 PrimitiveMaterialIndex;

    void SetComponent(class UPrimitiveComponent* InPrimitive, class UMediaSoundComponent* InMediaSound);
    bool RequestOpenMediaSource();
    void RequestCloseMediaSource();
    class UMediaBundle* GetMediaBundle();
};

class UMediaBundleTimeSynchronizationSource : public UTimeSynchronizationSource
{
    class UMediaBundle* MediaBundle;

};

class UMediaPlayerTimeSynchronizationSource : public UTimeSynchronizationSource
{
    class UMediaSource* MediaSource;
    class UMediaTexture* MediaTexture;

};

class UMediaProfile : public UObject
{
    TArray<class UMediaSource*> MediaSources;
    TArray<class UMediaOutput*> MediaOutputs;
    bool bOverrideTimecodeProvider;
    class UTimecodeProvider* TimecodeProvider;
    bool bOverrideCustomTimeStep;
    class UEngineCustomTimeStep* CustomTimeStep;
    class UTimecodeProvider* AppliedTimecodeProvider;
    class UTimecodeProvider* PreviousTimecodeProvider;
    class UEngineCustomTimeStep* AppliedCustomTimeStep;
    class UEngineCustomTimeStep* PreviousCustomTimeStep;

};

class UMediaProfileBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetMediaProfile(class UMediaProfile* MediaProfile);
    class UMediaProfile* GetMediaProfile();
    TArray<class UProxyMediaSource*> GetAllMediaSourceProxy();
    TArray<class UProxyMediaOutput*> GetAllMediaOutputProxy();
};

class UMediaProfileSettings : public UObject
{
    bool bApplyInCommandlet;
    TArray<TSoftObjectPtr<UProxyMediaSource>> MediaSourceProxy;
    TArray<TSoftObjectPtr<UProxyMediaOutput>> MediaOutputProxy;
    TSoftObjectPtr<UMediaProfile> StartupMediaProfile;

};

class UMediaProfileEditorSettings : public UObject
{
};

class UProxyMediaOutput : public UMediaOutput
{
    class UMediaOutput* DynamicProxy;
    class UMediaOutput* Proxy;

    bool IsProxyValid();
};

class UProxyMediaSource : public UMediaSource
{
    class UMediaSource* DynamicProxy;
    class UMediaSource* Proxy;

    bool IsProxyValid();
};

#endif
