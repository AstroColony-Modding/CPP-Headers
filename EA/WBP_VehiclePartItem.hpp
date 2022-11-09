#ifndef UE4SS_SDK_WBP_VehiclePartItem_HPP
#define UE4SS_SDK_WBP_VehiclePartItem_HPP

class UWBP_VehiclePartItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGCheckBox* CategoryOption;
    class UImage* Ico;
    class UTGConfigurableTextBlock* Name;
    FWBP_VehiclePartItem_CClick Click;
    void Click(int32 ID);
    EEHVehiclePartType Part Type;
    FName Part ID;
    int32 ID;

    void Set Selected(bool IsSelected);
    void Construct();
    void BndEvt__CategoryOption_K2Node_ComponentBoundEvent_3_OnWidgetReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_VehiclePartItem(int32 EntryPoint);
    void Click__DelegateSignature(int32 ID);
};

#endif
