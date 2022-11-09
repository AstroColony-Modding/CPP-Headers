#ifndef UE4SS_SDK_WBP_VehicleModify_HPP
#define UE4SS_SDK_WBP_VehicleModify_HPP

class UWBP_VehicleModify_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* AddParts;
    class UWBP_IcoButton_C* DeselectButton;
    class UVerticalBox* ExistingParts;
    class UWBP_IcoTextButton_C* ModifyButton;
    class UWBP_IcoTextButton_C* RemoveButton;
    class UWBP_IcoTextButton_C* RemoveButton_1;
    class USizeBox* ScrollSizeBox;
    class UImage* VehicleTypeIcon;
    class UWBP_Input_C* WBP_Input;
    class UWBP_VehiclePartItem_C* WBP_VehiclePartItem;
    class UWBP_VehiclePartItem_C* WBP_VehiclePartItem_1;
    FEHVehicleDefinition VehicleDetails;
    FWBP_VehicleModify_CBack Back;
    void Back();
    FEHVehicleTypeData VehicleTypeData;

    void UpdateSelectedPartForList(class UPanelWidget* Panel, int32 SelectedID);
    void HandleAddPartClicked(int32 ID);
    void HandlePartClicked(int32 ID);
    void UpdateSelectedPart();
    void UpdateAddParts();
    void UpdateExistingParts();
    void InitVehicle();
    void Init();
    void BndEvt__WBP_VehicleDetails_ModifyButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_VehicleDetails_WBP_Input_K2Node_ComponentBoundEvent_1_OnTextCommited__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Construct();
    void OnSelectedVehiclePartChanged();
    void OnVehicleModified(int32 VehicleID);
    void BndEvt__WBP_VehicleDetails_RemoveButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_VehicleModify(int32 EntryPoint);
    void Back__DelegateSignature();
};

#endif
