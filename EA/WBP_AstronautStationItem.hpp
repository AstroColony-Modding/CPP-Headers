#ifndef UE4SS_SDK_WBP_AstronautStationItem_HPP
#define UE4SS_SDK_WBP_AstronautStationItem_HPP

class UWBP_AstronautStationItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* Distance;
    class UImage* Ico;
    class UImage* MainStationBG;
    class UTGConfigurableTextBlock* Name;
    class UWidgetSwitcher* StateSwitcher;
    class UWBP_IcoButton_C* TransferButton;
    FWBP_AstronautStationItem_CClick Click;
    void Click(class AEHGrid* Station);
    class AEHGrid* SpaceStation;
    bool IsMainStation;
    bool IsTransferedStation;

    void Construct();
    void BndEvt__WBP_AstronautStationItem_TransferButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_AstronautStationItem(int32 EntryPoint);
    void Click__DelegateSignature(class AEHGrid* Station);
};

#endif
