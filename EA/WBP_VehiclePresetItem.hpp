#ifndef UE4SS_SDK_WBP_VehiclePresetItem_HPP
#define UE4SS_SDK_WBP_VehiclePresetItem_HPP

class UWBP_VehiclePresetItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGCheckBox* CategoryOption;
    class UImage* Ico;
    class UTGConfigurableTextBlock* Name;
    class UBorder* PinBorder;
    FWBP_VehiclePresetItem_CClick Click;
    void Click(int32 ID);
    FEHVehicleDefinition VehicleDefinition;
    int32 ID;

    void UpdateVisuals();
    void UpdateVehicleDefinition(FEHVehicleDefinition VehicleDefinition);
    void SetSelected(bool IsSelected);
    void Construct();
    void BndEvt__CategoryOption_K2Node_ComponentBoundEvent_3_OnWidgetReleasedEvent__DelegateSignature();
    void OnItemUnlocked();
    void ExecuteUbergraph_WBP_VehiclePresetItem(int32 EntryPoint);
    void Click__DelegateSignature(int32 ID);
};

#endif
