#ifndef UE4SS_SDK_WBP_VehicleCategory_HPP
#define UE4SS_SDK_WBP_VehicleCategory_HPP

class UWBP_VehicleCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ButtonImage;
    class UTGCheckBox* CategoryOption;
    class UTGConfigurableTextBlock* CategoryText;
    EEHVehicleType VehicleType;
    FWBP_VehicleCategory_CClick Click;
    void Click(EEHVehicleType VehicleType);
    int32 Count;
    FEHVehicleTypeData VehicleData;

    void UpdateName();
    void SetCount(int32 Count);
    void SetSelected(bool IsSelected);
    void Construct();
    void BndEvt__CategoryOption_K2Node_ComponentBoundEvent_1_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_VehicleCategory(int32 EntryPoint);
    void Click__DelegateSignature(EEHVehicleType VehicleType);
};

#endif
