#ifndef UE4SS_SDK_BlueManVehiclePhysics_HPP
#define UE4SS_SDK_BlueManVehiclePhysics_HPP

#include "BlueManVehiclePhysics_enums.hpp"

struct FFrictionData
{
    float SidewaysSlip;
    float SidewaysForceApplied;
    float BrakingForceApplied;
    float WheelSpin;
    float WheelTorque;
    bool HandbrakeEnabled;

};

struct FGears
{
    float GearRatio;
    float GearUpRatio;
    float GearDownRatio;
    FString GearName;
    int32 GearNumber;

};

struct FHistoryBuffer
{
    TArray<class USuspensionPhysics_Component*> Wheels;
    TArray<class USuspensionPhysics_Component*> SteeringWheels;
    TArray<float> SuspensionPositions;
    TArray<float> SteeringPerWheel;
    TArray<float> EngineForcePerWheel;
    TArray<float> BrakingForcePerWheel;
    FVector StoredLocation;
    FVector StoredLinearVelocity;
    FVector StoredAngularVelocity;
    FRotator StoredRotation;
    float Timestamp;
    float StoredDeltaTime;
    float TimeStampOffset;
    float StoredSteeringInput;
    float StoredThrottleInput;
    float StoredBrakingInput;
    FGears CurrentGear;

};

struct FHistoryBufferMinimum
{
    FVector StoredLocation;
    FVector StoredLinearVelocity;
    FVector StoredAngularVelocity;
    FRotator StoredRotation;

};

struct FInputInfo
{
    float StoredSteeringInput;
    float StoredThrottleInput;
    float StoredBrakingInput;

};

struct FReplayData
{
    float SentTime;
    FHistoryBuffer Correction;

};

struct FWheelDataStruct
{
    FVector VisualWheelOffset;
    bool DoNotUseRestPositionAsCamberNeautralPosition;
    float CamberNeautralPosition;
    float CamberPositiveAngle;
    float CamberNegativeAngle;
    bool UseHandbrakeGripCurve;
    class UCurveFloat* HandbrakeGripCurve;
    FVector WheelOffset;
    TEnumAsByte<ECollisionChannel> SuspensionTraceChannel;
    bool Debug;
    bool SphereTrace;
    bool AffectedByHandbrake;
    class UStaticMesh* WheelMeshComponent;
    bool FlipWheelRotation;
    float Scale;
    bool IsDriveWheel;
    float AckermanRatio;
    bool InvertAckermanSteering;
    float NormalSteeringAngle;
    class UCurveFloat* SteeringCurve;
    bool Handbrake;
    float Handbrake_Multiplier;
    float Handbrake_Grip;
    float Handbrake_GripLimit;
    float BrakingForce;
    float BrakingForce_Multiplier;
    float MaxBrakingForce;
    float SuspensionStiffness;
    float Multiplier;
    float Damping;
    float TireRadius;
    float SuspensionLength;
    float RestPosition;
    float StickyTiresActivationSpeed;
    float StickyTiresSpeedMultiplier;
    float StickyTiresMaxForceMultiplier;
    float StickyTiresRollingResistanceMultiplier;
    float CorneringStiffness;
    float MaxLat;
    float SeeringSensitivity;
    float SeeringFrictionMultiplier;
    float MinGrip;
    bool ApplyForceAtContactPoint;
    float SlipMultiplier;
    float CompressionGripRatioMax;
    float CompressionGripRatioMin;
    float EngineForce;
    float WheelRollingResistance;
    float MinDrivewheelGrip;
    float Roll;
    float RollB;
    float MaxSpring;
    float FullThrottleSlipRatio;
    float FullThrottleSlipRatioReverse;
    float FullThrottleSlipLimit;
    bool HasEngineComponent;

};

class AVehiclePhysicsActor : public APawn
{
    int32 InputNetUpdates;
    float ServerThrottle;
    bool ServerHandbrake;
    float ServerSteering;
    class ULandVehicle_EngineComponent* ServerEngineComponent;
    class UWheelManager_Component* ServerWheelManager;
    class ULandVehicle_EngineComponent* EngineComponent;
    EMovementReplicationMethod MovementReplicationMethod;
    class UClientSidePrediction_Component* StoredPredictionComponent;
    class ULandVehicle_DragComponent* StoredDragComponent;
    class UPrimitiveComponent* MeshComponent;
    class UWheelManager_Component* StoredWheelManager;
    class ULandVehicle_EngineComponent* StoredEngineComponent;

    void UpdateComponents(class ULandVehicle_EngineComponent* Engine, class UWheelManager_Component* Manager);
    void SetSteering(float Steering);
    void SetHandbrake(bool Handbrake);
    void SetEngineThrottle(float ThrottleInput);
    void SendMovementDataToServer(FInputInfo Data);
    void SendMovementDataToAll(FInputInfo Data);
    void ReplicateThrottleToServer(float ThrottleToReplicate);
    void ReplicateSteeringToServer(float SteeringToReplicate);
    void ReplicateHandbrakeToServer(bool HandbrakeToReplicate);
    void InitializeAllSystems();
};

class UClientSidePrediction_Component : public UActorComponent
{
    class UPrimitiveComponent* BPMesh;
    class UWheelManager_Component* WheelManager;
    TArray<class USuspensionPhysics_Component*> Allwheels;
    class ULandVehicle_EngineComponent* EngineComponent;
    int32 AverageContainerSize;
    int32 AverageErrorTolerance;
    int32 ErrorLimit;
    float NetUpdates;
    float RoundTripMultiplier;
    float AllowedError;
    float ErrorCorrection;
    float ErrorCorrectionHigh;
    float AllowedError_Rotation;
    float ErrorCorrection_Rotation;
    float ErrorCorrectionHigh_Rotation;
    bool Wait;
    bool Debug;
    bool Draw;
    bool Persistent;
    bool Red;
    bool Green;
    bool Blue;
    FClientSidePrediction_ComponentClientUpdate ClientUpdate;
    void ClientUpdate(FVector RedLocation, FVector GreenLocation, FVector BlueLocation, FRotator RedRotation, FRotator GreenRotation, FRotator BlueRotation);
    class APawn* Pawn;
    class UWorld* SuspensionTraceWorld;

    void SendServerTimeRequest(float SentTime, class UPrimitiveComponent* Comp);
    void ClientReceiveTimeRequest(float ReceivedServerTime, float SentTime, FHistoryBufferMinimum Correction);
    void AllReceiveTimeRequest(FHistoryBufferMinimum Correction);
};

class ULandVehicle_DragComponent : public USceneComponent
{
    bool Debug;
    float AirResistanceMultiplier;
    class UPrimitiveComponent* Mesh;

};

class ULandVehicle_EngineComponent : public USceneComponent
{
    FLandVehicle_EngineComponentGearChangeStarted GearChangeStarted;
    void GearChangeStarted();
    FLandVehicle_EngineComponentGearChangeCompleted GearChangeCompleted;
    void GearChangeCompleted();
    class UPrimitiveComponent* Mesh;
    class UCurveFloat* TorqueCurve;
    bool AutomaticGearbox;
    float ReverseSpeed;
    float MaxSpeedInReverse;
    float MaxForwardSpeed;
    float MaxRPM;
    float RPMMultiplier;
    float EngineNeutralRevTime;
    float TransmissionEfficiency;
    float DifferentialRatio;
    float EngineShaft_SlowdownMultiplier;
    float GearChangeTime;
    float ThrottleSensitivity;
    TArray<FGears> Gears;
    TArray<class USuspensionPhysics_Component*> DriveWheels;
    TArray<class USuspensionPhysics_Component*> Allwheels;
    float RPM;
    FGears CurrentGear;
    float Speed;
    float SpeedKPH;

    void SetGearNumber(int32 GearNumber);
    void SetEngineThrottleInput(float ThrottleInput);
    void GearUp();
    void GearDown();
};

class USuspensionPhysics_Component : public USceneComponent
{
    TEnumAsByte<ECollisionChannel> SuspensionTraceChannel;
    bool Debug;
    bool SphereTrace;
    bool AffectedByHandbrake;
    FFrictionData FrictionData;
    class UStaticMesh* WheelMeshComponent;
    TSubclassOf<class UStaticMeshComponent> WheelTemplate;
    class UStaticMesh* CollisionMesh;
    bool FlipWheelRotation;
    float Scale;
    FVector WheelOffset;
    bool IsDriveWheel;
    float InAirWheelRotationMultiplier;
    float AckermanRatio;
    bool InvertAckermanSteering;
    bool DoNotUseRestPositionAsCamberNeautralPosition;
    float CamberNeautralPosition;
    float CamberPositiveAngle;
    float CamberNegativeAngle;
    float NormalSteeringAngle;
    class UCurveFloat* SteeringCurve;
    class UCurveFloat* GripCurve_Speed;
    bool SpeedGrip_IgnoreSteeringAngle;
    bool UseHandbrakeGripCurve;
    class UCurveFloat* HandbrakeGripCurve;
    bool Handbrake;
    float Handbrake_Multiplier;
    float Handbrake_Grip;
    float Handbrake_GripLimit;
    float BrakingForce;
    float BrakingForce_Multiplier;
    float MaxBrakingForce;
    float SuspensionStiffness;
    float Multiplier;
    float Damping;
    float TireRadius;
    float SuspensionLength;
    float RestPosition;
    float StickyTiresSpeedMultiplier;
    float StickyTiresMaxForceMultiplier;
    float StickyTiresRollingResistanceMultiplier;
    float CorneringStiffness;
    float MaxLat;
    float SeeringSensitivity;
    float SeeringFrictionMultiplier;
    float MinGrip;
    float FullThrottleSlipRatio;
    float FullThrottleSlipRatioReverse;
    float FullThrottleSlipLimit;
    bool ApplyForceAtContactPoint;
    float ForceOffset;
    float SlipMultiplier;
    float CompressionGripRatioMax;
    float CompressionGripRatioMin;
    float EngineForce;
    float WheelRollingResistance;
    float MinDrivewheelGrip;
    float Roll;
    float RollB;
    float MaxSpring;
    class USuspensionPhysics_Component* RightSuspensionComponent;
    class USuspensionPhysics_Component* OtherSuspensionComponent;
    bool HasEngineComponent;
    FHitResult Hit;
    class APawn* Owner;
    float Compression;
    float Angle;
    float CamberCompression;
    FVector SuspensionLocation;
    float AckermanLeftSide;
    float AckermanRightSide;
    class UStaticMeshComponent* Wheel;
    class UStaticMeshComponent* WheelCollision;
    class UPrimitiveComponent* Mesh;
    class UWorld* TraceWorld;

    void SetWheelData(FWheelDataStruct Data);
    void SetSteering(float Steering);
    void SetMesh(class UPrimitiveComponent* Mesh_Input);
    void SetHandbrake(bool HandbrakeInput);
    void SetDriveForce(float ForceInput);
    void SetBrakingForce(float ForceInput);
    float GetWheelSuspensionOffset();
    class UPrimitiveComponent* GetWheelMesh();
    FVector GetWheelLocation();
    FWheelDataStruct GetWheelData();
    void DestroyWheel();
    void CreateConstraint();
};

class UWheelManager_Component : public UActorComponent
{
    float StickyTiresMultiplier;
    float StickyTiresActivationSpeed;
    float StickyTiresHandbrakeMultiplier;
    float LockdownActivationSpeed;
    float LockdownMultiplier;
    TArray<class USuspensionPhysics_Component*> Wheels;
    TArray<class USuspensionPhysics_Component*> SteeringWheels;
    TArray<class USuspensionPhysics_Component*> HandbrakeWheels;
    class UPrimitiveComponent* Mesh;
    TArray<class USuspensionPhysics_Component*> LeftSide;
    TArray<class USuspensionPhysics_Component*> RightSide;

    void SetSteering(float SteeringInput);
    void SetHandbrake(bool HandbrakeInput);
    class USuspensionPhysics_Component* AddWheel(FWheelDataStruct WheelData);
};

#endif
