#ifndef UE4SS_SDK_BP_SensorPawn_HPP
#define UE4SS_SDK_BP_SensorPawn_HPP

class ABP_SensorPawn_C : public AEHInteractivePawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    class USceneComponent* CameraRoot;
    class USceneComponent* DefaultSceneRoot;
    class UEHSensorObject* SensorObject;

    TMap<class EPlayerActionType, class FText> GetTraceActionNames();
    int32 GetTraceOverrideActions(class UObject* TracedObject);
    bool ShouldTraceObject(class UObject* TracedObject);
    void InpActEvt_ActionLeave_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_ActionSelect_K2Node_InputActionEvent_0(FKey Key);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue);
    void OnInteractionFinished();
    void OnInteractionStarted();
    void ExecuteUbergraph_BP_SensorPawn(int32 EntryPoint);
};

#endif
