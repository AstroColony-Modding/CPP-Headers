#ifndef UE4SS_SDK_MediaIOCore_HPP
#define UE4SS_SDK_MediaIOCore_HPP

#include "MediaIOCore_enums.hpp"

struct FMediaCaptureOptions
{
    EMediaCaptureCroppingType Crop;
    FIntPoint CustomCapturePoint;
    bool bResizeSourceBuffer;
    bool bSkipFrameWhenRunningExpensiveTasks;
    bool bConvertToDesiredPixelFormat;
    bool bForceAlphaToOneOnConversion;

};

struct FMediaIOConfiguration
{
    bool bIsInput;
    FMediaIOConnection MediaConnection;
    FMediaIOMode MediaMode;

};

struct FMediaIOConnection
{
    FMediaIODevice Device;
    FName protocol;
    EMediaIOTransportType TransportType;
    EMediaIOQuadLinkTransportType QuadTransportType;
    int32 PortIdentifier;

};

struct FMediaIODevice
{
    FName DeviceName;
    int32 DeviceIdentifier;

};

struct FMediaIOInputConfiguration
{
    FMediaIOConfiguration MediaConfiguration;
    EMediaIOInputType InputType;
    int32 KeyPortIdentifier;

};

struct FMediaIOMode
{
    FFrameRate FrameRate;
    FIntPoint Resolution;
    EMediaIOStandardType Standard;
    int32 DeviceModeIdentifier;

};

struct FMediaIOOutputConfiguration
{
    FMediaIOConfiguration MediaConfiguration;
    EMediaIOOutputType OutputType;
    int32 KeyPortIdentifier;
    EMediaIOReferenceType OutputReference;
    int32 ReferencePortIdentifier;

};

class UFileMediaCapture : public UMediaCapture
{
};

class UFileMediaOutput : public UMediaOutput
{
    FImageWriteOptions WriteOptions;
    FDirectoryPath FilePath;
    FString BaseFileName;
    bool bOverrideDesiredSize;
    FIntPoint DesiredSize;
    bool bOverridePixelFormat;
    EFileMediaOutputPixelFormat DesiredPixelFormat;

};

class UMediaCapture : public UObject
{
    FMediaCaptureOnStateChanged OnStateChanged;
    void MediaCaptureStateChangedSignature();
    class UMediaOutput* MediaOutput;
    class UTextureRenderTarget2D* CapturingRenderTarget;

    bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);
    void StopCapture(bool bAllowPendingFrameToBeProcess);
    void SetMediaOutput(class UMediaOutput* InMediaOutput);
    EMediaCaptureState GetState();
    FIntPoint GetDesiredSize();
    TEnumAsByte<EPixelFormat> GetDesiredPixelFormat();
    bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, FMediaCaptureOptions CaptureOptions);
    bool CaptureActiveSceneViewport(FMediaCaptureOptions CaptureOptions);
};

class UMediaOutput : public UObject
{
    int32 NumberOfTextureBuffers;

    bool Validate(FString& OutFailureReason);
    class UMediaCapture* CreateMediaCapture();
};

#endif
