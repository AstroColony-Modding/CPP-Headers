#ifndef UE4SS_SDK_BP_Antenna_HPP
#define UE4SS_SDK_BP_Antenna_HPP

class ABP_Antenna_C : public AEHInteractivePawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    class UEHParticleSystemComponent* P_Laser;
    class UStaticMeshComponent* AntennaTopGun;
    class UStaticMeshComponent* AntennaTopBase;
    class USceneComponent* DefaultSceneRoot;
    float InterpolateGun_InterpValue_D01186954646B662911A788F620C63EE;
    TEnumAsByte<ETimelineDirection::Type> InterpolateGun__Direction_D01186954646B662911A788F620C63EE;
    class UTimelineComponent* InterpolateGun;
    class UEHSignalAntenna* AntennaObject;

    TMap<class EPlayerActionType, class FText> GetTraceActionNames();
    int32 GetTraceOverrideActions(class UObject* TracedObject);
    bool ShouldTraceObject(class UObject* TracedObject);
    void GetReceiverLocation(FVector& Output_Get);
    void SelectSignalReceiver();
    void UpdateReceiverActions();
    void UpdateLasersRotation();
    void UpdateLasersTarget();
    void UpdateLaserVisibility();
    void InterpolateGun__FinishedFunc();
    void InterpolateGun__UpdateFunc();
    void InpActEvt_ActionSelect_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_ActionLeave_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_ActionCancel_K2Node_InputActionEvent_0(FKey Key);
    void OnInteractionFinished();
    void OnInteractionStarted();
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue);
    void Init(class UEHInteractableObject* InInteractableObject);
    void InterpolateLaserTarget(const FRotator StartRotation, const FRotator EndRotation);
    void OnRotationFinished();
    void OnSignalReceiverChanged();
    void OnCraftingElectricityChanged_();
    void ExecuteUbergraph_BP_Antenna(int32 EntryPoint);
};

#endif
