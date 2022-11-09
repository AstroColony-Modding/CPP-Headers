#ifndef UE4SS_SDK_WBP_AutoPilotModule_HPP
#define UE4SS_SDK_WBP_AutoPilotModule_HPP

class UWBP_AutoPilotModule_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGCheckBox* AutopilotCheckbox;
    class UTGConfigurableTextBlock* AutopilotText;
    class UWBP_NameDivider_C* WBP_DividerItems;
    class UWBP_IcoMarker_C* WBP_IcoMarker;
    class UWBP_NamedLock_C* WBP_NamedLock;
    class UWBP_VelocityPreview_C* WBP_VelocityPreview;
    class UTechnologyAsset* AstroNavigationTechnology;
    class UEHThrusterNetwork* ThrusterNetwork;
    FLinearColor ColorRed;
    FLinearColor ColorGreen;

    void UpdateAutopilotState();
    void UpdateAutoPilotVisibility();
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void BndEvt__SelectionCheckbox_K2Node_ComponentBoundEvent_0_OnToggleStateChanged__DelegateSignature(bool bIsToggled);
    void Init(class UEHThrusterNetwork* ThrusterNetworkIn);
    void Construct();
    void ExecuteUbergraph_WBP_AutoPilotModule(int32 EntryPoint);
};

#endif
