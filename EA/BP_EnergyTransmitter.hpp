#ifndef UE4SS_SDK_BP_EnergyTransmitter_HPP
#define UE4SS_SDK_BP_EnergyTransmitter_HPP

class ABP_EnergyTransmitter_C : public AEHInteractivePawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHParticleSystemComponent* P_LaserRight;
    class UEHParticleSystemComponent* P_LaserLeft;
    class UCameraComponent* Camera;
    class UStaticMeshComponent* EnergyTransmitterGun;
    class USceneComponent* DefaultSceneRoot;
    float InterpolateGun_InterpValue_38FEC5334BBE69BBA48CB48651AE0DB0;
    TEnumAsByte<ETimelineDirection::Type> InterpolateGun__Direction_38FEC5334BBE69BBA48CB48651AE0DB0;
    class UTimelineComponent* InterpolateGun;
    class UEHEnergyTransmitterObject* TransmitterObject;

    TMap<class EPlayerActionType, class FText> GetTraceActionNames();
    int32 GetTraceOverrideActions(class UObject* TracedObject);
    bool ShouldTraceObject(class UObject* TracedObject);
    void GetReceiverLocation(FVector& Output_Get);
    void SelectEnergyReceiver();
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
    void OnEnergyReceiverChanged();
    void Init(class UEHInteractableObject* InInteractableObject);
    void OnCraftingElectricityChanged();
    void OnEnergyTransmitted();
    void InterpolateLaserTarget(const FRotator StartRotation, const FRotator EndRotation);
    void OnRotationFinished();
    void ExecuteUbergraph_BP_EnergyTransmitter(int32 EntryPoint);
};

#endif
