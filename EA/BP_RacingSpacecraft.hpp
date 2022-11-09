#ifndef UE4SS_SDK_BP_RacingSpacecraft_HPP
#define UE4SS_SDK_BP_RacingSpacecraft_HPP

class ABP_RacingSpacecraft_C : public ABP_WorldInteractiveVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* BP_RocketFlareR1;
    class UChildActorComponent* BP_RocketFlareL1;
    class UStaticMeshComponent* SM_SpaceFighterWingRight;
    class UStaticMeshComponent* SM_SpaceFighterWingLeft;
    class UAudioComponent* SC_CockpitGlass_A;
    class UAudioComponent* SC_CockpitGlass_B;
    class UStaticMeshComponent* SM_SpaceFighterWindshield;
    class UBP_ModularStaticMeshComponent_C* Shuttle;
    class UVoxelSimpleInvokerComponent* VoxelInvoker;
    class USceneComponent* PlayerLeavePoint;
    class USceneComponent* UniversalComponents;
    class USpringArmComponent* SpringArm;
    class UAudioComponent* S_Rocket_Cue;
    class UAudioComponent* S_RocketLight_Cue;
    class UAudioComponent* S_RocketHeavy_Cue;
    class UParticleSystemComponent* Player_FlyingMotes;
    class UCameraComponent* Camera;
    float Delta seconds;
    bool Boost ready;
    float Movement speed;
    float Camera speed;
    bool Possessed;
    bool EnterEnable;
    bool CanMove;
    float MoveRight;
    float Turn;
    float LookUp;
    float MoveUp;
    TArray<class ABP_SquareFlare_C*> BP_RocketFlares;
    class UMaterialInstanceDynamic* DynamicMaterial;
    FLinearColor RocketFlareColor;
    float BoostMultiplier;
    float Thruster_MaterialGlow_Min;
    float Thruster_MaterialGlow_Max;
    float Thruster X Axis Turning - Interpolation amount;
    float RocketFlare_Turning_Intensity;
    float BoostAxis;
    float RocketFlare_LightIntensity_Max;
    float RocketFlare_PointLight_Radius;
    float MostDistant_RocketFlare_Y_Location;
    float RocketFlare_Interpolated;
    float Thruster X Axis Turning;
    bool IsMovingToDestination;
    FVector Destination;
    FVector DestinationDirection;
    FRotator SpringArmRotation;
    class ABP_LandingLegs_C* LandingLegs;
    int32 LandingFlag;
    bool IsLanding;
    class UBP_ModularStaticMeshComponent_C* Windshield;
    bool CanStrafeLeft;
    bool CanStrafeRight;
    float RotationInterpolationSpeed;
    TArray<class ABP_Thruster_C*> Thrusters;
    bool HasLegsOpened;

    void ControlLegs(bool Open);
    void UpdateThrusterFlares(FVector Direction);
    void UpdateAction(bool Value, EEHVehicleAction Enum);
    TMap<class EPlayerActionType, class FText> GetActionNames();
    void InitDynamicComponents();
    void InitFlares();
    void StopMovement();
    void UserConstructionScript();
    void InpActEvt_Turbo_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Turbo_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_0(FKey Key);
    void ReceivePossessed(class AController* NewController);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_3(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue);
    void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_5(float AxisValue);
    void OnWorldActorInteract();
    void OnWorldActorSpawned(bool ShouldMoveToDestination, FVector DestinationOffset);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_RacingSpacecraft(int32 EntryPoint);
};

#endif
