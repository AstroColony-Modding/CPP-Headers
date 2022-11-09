#ifndef UE4SS_SDK_TGCoreInterfaceTypes_HPP
#define UE4SS_SDK_TGCoreInterfaceTypes_HPP

#include "TGCoreInterfaceTypes_enums.hpp"

class ITGIAbility : public IInterface
{
};

class ITGIAbilityComponent : public IInterface
{
};

class ITGICamera : public IInterface
{
};

class ITGICameraController : public IInterface
{
};

class ITGICameraTarget : public IInterface
{
};

class ITGIGameInstanceUI : public IInterface
{
};

class ITGILifecycleStateOwner : public IInterface
{
};

class ITGILoadingScreen : public IInterface
{
};

class ITGIStatusEffect : public IInterface
{
};

class ITGIUIDataProvider : public IInterface
{
};

class ITGIUISystem : public IInterface
{
};

class ITGIWidgetValidation : public IInterface
{
};

struct FTGCameraState
{
    float FOV;
    FVector Location;
    FRotator Rotation;

};

struct FTGCameraAttachmentInfo
{
    class USceneComponent* Component;
    FName SocketName;

};

struct FTGCameraTransition
{
    float TransitionTime;
    class UCurveFloat* TransitionCurve;

};

struct FTGCameraTransitionConfig
{
    FTGCameraTransition FOVTransition;
    FTGCameraTransition OffsetTransition;

};

struct FTGDesiredCameraState
{
    float FOV;
    FVector Offset;

};

#endif
