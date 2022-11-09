#ifndef UE4SS_SDK_WBP_Antenna_HPP
#define UE4SS_SDK_WBP_Antenna_HPP

class UWBP_Antenna_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* LinkButton;
    class UWBP_LongNamedSlot_C* LongSlot;
    class UHorizontalBox* ResourcesHorizontalBox;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UEHSignalAntenna* SignalAntenna;

    void UpdateSignalInIco();
    class UWidget* GetSignalTooltipWidget();
    void UpdateSignal();
    void OnContextChanged();
    void BndEvt__WBP_Antenna_LongSlot_K2Node_ComponentBoundEvent_1_SlotClick__DelegateSignature();
    void BndEvt__WBP_Antenna_LinkButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void OnSignalReceiverChanged();
    void ExecuteUbergraph_WBP_Antenna(int32 EntryPoint);
};

#endif
