#ifndef UE4SS_SDK_SmoothSyncPlugin_HPP
#define UE4SS_SDK_SmoothSyncPlugin_HPP

#include "SmoothSyncPlugin_enums.hpp"

class USmoothSync : public UActorComponent
{
    float interpolationBackTime;
    ExtrapolationMode ExtrapolationMode;
    bool useExtrapolationTimeLimit;
    float extrapolationTimeLimit;
    bool useExtrapolationDistanceLimit;
    float extrapolationDistanceLimit;
    float sendPositionThreshold;
    float sendRotationThreshold;
    float sendScaleThreshold;
    float sendVelocityThreshold;
    float sendAngularVelocityThreshold;
    float receivedPositionThreshold;
    float receivedRotationThreshold;
    float positionSnapThreshold;
    float rotationSnapThreshold;
    float scaleSnapThreshold;
    float timeSmoothing;
    float positionLerpSpeed;
    float rotationLerpSpeed;
    float scaleLerpSpeed;
    SyncMode syncPosition;
    SyncMode syncRotation;
    SyncMode syncScale;
    SyncMode syncVelocity;
    SyncMode syncAngularVelocity;
    bool syncMovementMode;
    bool isPositionCompressed;
    bool isRotationCompressed;
    bool isScaleCompressed;
    bool isVelocityCompressed;
    bool isAngularVelocityCompressed;
    float sendRate;
    bool isUsingOriginRebasing;
    bool alwaysSendOrigin;
    bool syncOwnershipChange;
    class USceneComponent* realComponentToSync;
    float InterpolationTime;
    float atRestPositionThreshold;
    float atRestRotationThreshold;

    void teleport();
    void SmoothSyncTeleportServerToClients(FVector position, FVector Rotation, FVector Scale, float tempOwnerTime);
    void SmoothSyncTeleportClientToServer(FVector position, FVector Rotation, FVector Scale, float tempOwnerTime);
    void SmoothSyncEnableServerToClients(bool enable);
    void SmoothSyncEnableClientToServer(bool enable);
    void setSceneComponentToSync(class USceneComponent* theComponent);
    void ServerSendsTransformToEveryone(const TArray<uint8>& Value);
    void forceStateSendNextFrame();
    void enableSmoothSync(bool enable);
    void ClientSendsTransformToServer(const TArray<uint8>& Value);
    void clearBuffer();
};

#endif
