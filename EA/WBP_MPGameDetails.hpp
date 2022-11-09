#ifndef UE4SS_SDK_WBP_MPGameDetails_HPP
#define UE4SS_SDK_WBP_MPGameDetails_HPP

class UWBP_MPGameDetails_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* EnableBotClient;
    class UTGCheckBox* EnableBotHost;
    class UTGConfigurableTextBlock* OxygenClient;
    class UTGCheckBox* OxygenHost;
    class UTGConfigurableTextBlock* SeedClient;
    class UTGEditableTextBox* SeedHost;
    class UTGConfigurableTextBlock* SharedTechnologiesClient;
    class UTGCheckBox* SharedTechnologiesHost;
    class UTGConfigurableTextBlock* SharedTechPointsClient;
    class UTGCheckBox* SharedTechPointsHost;

    void InitSavegameData();
    void InitServerScenarioParams();
    void RefreshClientScenarioParams();
    void UpdateVisibility();
    void SetTravelParams();
    void BndEvt__WBP_MPGameDetails_SeedNumberText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_MPGameDetails_OxygenHost_K2Node_ComponentBoundEvent_1_OnToggleStateChanged__DelegateSignature(bool bIsToggled);
    void BndEvt__WBP_MPGameDetails_EnableBotHost_K2Node_ComponentBoundEvent_2_OnToggleStateChanged__DelegateSignature(bool bIsToggled);
    void BndEvt__WBP_MPGameDetails_SharedTechnologyHost_K2Node_ComponentBoundEvent_3_OnToggleStateChanged__DelegateSignature(bool bIsToggled);
    void BndEvt__WBP_MPGameDetails_SharedTechnologiesHost_K2Node_ComponentBoundEvent_4_OnToggleStateChanged__DelegateSignature(bool bIsToggled);
    void Init();
    void ExecuteUbergraph_WBP_MPGameDetails(int32 EntryPoint);
};

#endif
