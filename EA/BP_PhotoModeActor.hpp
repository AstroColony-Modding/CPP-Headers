#ifndef UE4SS_SDK_BP_PhotoModeActor_HPP
#define UE4SS_SDK_BP_PhotoModeActor_HPP

class ABP_PhotoModeActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    class USceneComponent* DefaultSceneRoot;
    class UActorComponent* SelectedComponent;
    class UActorComponent* HoveredComponent;
    int32 HoveredIndex;
    int32 SelectedIndex;
    FRotator DesiredRotation;
    float RotationInterpolationSpeed;
    float MaxTargetArmLength;
    float DefaultArmLength;
    FRotator DefaultRotation;
    float ArmPitchMin;
    float ArmPitchMax;
    FBP_PhotoModeActor_COnActiveStateChanged OnActiveStateChanged;
    void OnActiveStateChanged(bool Active);
    float CameraControlRate;

    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_2(float AxisValue);
    void ExecuteUbergraph_BP_PhotoModeActor(int32 EntryPoint);
    void OnActiveStateChanged__DelegateSignature(bool Active);
};

#endif
