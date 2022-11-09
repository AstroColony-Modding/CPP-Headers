#ifndef UE4SS_SDK_WBP_LogicSensor_HPP
#define UE4SS_SDK_WBP_LogicSensor_HPP

class UWBP_LogicSensor_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_LongNamedSlot_C* LongSlot;
    class UHorizontalBox* ResourcesHorizontalBox;
    class UWBP_Logic_C* WBP_Logic;

    class UWidget* GetSignalTooltipWidget();
    void CreateSignal();
    void OnContextChanged();
    void OnResourcesSignalOutChanged();
    void BndEvt__WBP_LogicSensor_WBP_Logic_K2Node_ComponentBoundEvent_0_ClearButtonClicked__DelegateSignature();
    void BndEvt__WBP_LogicSensor_WBP_Logic_K2Node_ComponentBoundEvent_3_SlotButtonClicked__DelegateSignature();
    void OnSelectedDeviceChanged();
    void ExecuteUbergraph_WBP_LogicSensor(int32 EntryPoint);
};

#endif
