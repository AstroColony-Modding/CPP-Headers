#ifndef UE4SS_SDK_WBP_EnergyTransmitter_HPP
#define UE4SS_SDK_WBP_EnergyTransmitter_HPP

class UWBP_EnergyTransmitter_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG;
    class UImage* CircleBG;
    class UWBP_ClickableSlot_C* EnergyReceiverSelectionSlot;
    class UWBP_Slider_C* EnergySlider;
    class UTGConfigurableTextBlock* Name;
    class UProgressBar* ProgressBar;
    class UImage* ReceiverIco;
    class UOverlay* RemoteConstructionOverlay;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UEHEnergyTransmitterObject* EnergyTransmitter;
    FLinearColor BGColor;

    float GetProgress();
    FText GetExpeditionsRatio();
    void UpdateEnergyReceiver();
    void OnContextChanged();
    void BndEvt__WBP_EnergyTransmitter_WBP_ClickableSlot_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
    void Construct();
    void BndEvt__WBP_EnergyTransmitter_EnergySlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_WBP_EnergyTransmitter(int32 EntryPoint);
};

#endif
