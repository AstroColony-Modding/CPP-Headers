#ifndef UE4SS_SDK_WBP_Thruster_HPP
#define UE4SS_SDK_WBP_Thruster_HPP

class UWBP_Thruster_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* ApplyThrusterSetupToConnected;
    class U2DSlider* ThrusterDirection;
    class UWBP_Slider_C* ThrusterPowerSlider;
    class UWBP_AutoPilotModule_C* WBP_AutoPilotModule;
    class UWBP_NameDivider_C* WBP_DividerItems_1;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UEHThrusterObject* ThrusterObject;
    float LastUpdate;

    bool SetValueRequireDelay();
    void UpdateThrusterSliders();
    void BndEvt__ThrusterPower_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
    void OnDirectionsAndPowersCalculated();
    void BndEvt__2DSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent2D__DelegateSignature(float Value);
    void BndEvt__2DSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent2D__DelegateSignature(float Value);
    void OnContextChanged();
    void BndEvt__WBP_Thruster_DepositButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Thruster(int32 EntryPoint);
};

#endif
