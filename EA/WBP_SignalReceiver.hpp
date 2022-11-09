#ifndef UE4SS_SDK_WBP_SignalReceiver_HPP
#define UE4SS_SDK_WBP_SignalReceiver_HPP

class UWBP_SignalReceiver_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_LongNamedSlot_C* LongSlot;
    class UHorizontalBox* ResourcesHorizontalBox;
    class UEHSignalReceiver* SignalReceiver;

    class UWidget* GetSignalTooltipWidget();
    void UpdateSignal();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_SignalReceiver(int32 EntryPoint);
};

#endif
