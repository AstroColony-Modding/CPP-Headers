#ifndef UE4SS_SDK_BP_RemoteFabricator_HPP
#define UE4SS_SDK_BP_RemoteFabricator_HPP

class ABP_RemoteFabricator_C : public AEHRemoteFabricatorPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    class UStaticMeshComponent* AntennaGun;
    class UStaticMeshComponent* AntennaBase;
    float LineTraceLength;

    void InpActEvt_ActionLeave_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_ActionSelect_K2Node_InputActionEvent_0(FKey Key);
    void OnInteractionStarted();
    void OnInteractionFinished();
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_0(float AxisValue);
    void ExecuteUbergraph_BP_RemoteFabricator(int32 EntryPoint);
};

#endif
