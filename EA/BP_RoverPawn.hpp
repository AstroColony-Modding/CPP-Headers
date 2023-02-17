#ifndef UE4SS_SDK_BP_RoverPawn_HPP
#define UE4SS_SDK_BP_RoverPawn_HPP

class ABP_RoverPawn_C : public ABP_VehiclePawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_SkeletalModularComponent_C* RoverSK;
    class USceneComponent* RoverRoot;
    class UBP_SuspensionPhysicsComponent_C* RL;
    class UBP_SuspensionPhysicsComponent_C* RR;
    class UBP_SuspensionPhysicsComponent_C* FL;
    class UBP_SuspensionPhysicsComponent_C* FR;
    class USceneComponent* RLRoot;
    class USceneComponent* RRRoot;
    class USceneComponent* FLRoot;
    class USceneComponent* FRRoot;
    class UVoxelSimpleInvokerComponent* VoxelInvoker;
    class UAudioComponent* BreakSound;
    class UAudioComponent* ElectricEngineSound;
    class ULandVehicle_DragComponent* LandVehicle_Drag;
    class ULandVehicle_EngineComponent* LandVehicle_Engine;
    class USpringArmComponent* SpringArm;
    class UCameraComponent* Camera;
    class ABP_ManipulatorRobot_C* ManipulatorRobot;
    FVector ManipilatorPoint;
    float ManipulatorHeight;
    int32 ManipulatorFlags;
    FVector BoostDirection;
    TArray<class ABP_Thruster_C*> Boosters;
    float LastBoostTime;

    void StartSimulatePhysics();
    void UpdateAction(bool Value, EEHVehicleAction Enum);
    void InitDynamicComponents();
    void ControlManipulator(bool Active);
    void GetManipulatorPoint(FVector& Location, float& Angle);
    void InpActEvt_ActionSelect_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_ActionSelect_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Turbo_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void ReceivePossessed(class AController* NewController);
    void ReceiveUnpossessed(class AController* OldController);
    void InitVehicle(const FEHVehicleDefinition& VehicleDefinition);
    void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_5(float AxisValue);
    void SavegameObjectSerializeDataLoaded();
    void ExecuteUbergraph_BP_RoverPawn(int32 EntryPoint);
};

#endif
