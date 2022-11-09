#ifndef UE4SS_SDK_WBP_VehiclePresets_HPP
#define UE4SS_SDK_WBP_VehiclePresets_HPP

class UWBP_VehiclePresets_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* CustomVehiclesVertical;
    class UVerticalBox* DefaultVehiclesVertical;
    class UWBP_IcoTextButton_C* DuplicateButton;
    class UWBP_IcoTextButton_C* ModifyButton;
    class UTGConfigurableTextBlock* PresetsText;
    class UWBP_IcoTextButton_C* RemoveButton;
    class UWBP_VehiclePresetItem_C* WBP_VehiclePresetItem_C_0;
    class UWBP_VehiclePresetItem_C* WBP_VehiclePresetItem_C_1;
    class ABP_ModularVehicleDesigner_C* BPHangar;
    FWBP_VehiclePresets_CShowDetails ShowDetails;
    void ShowDetails();

    void SelectCategoryEntry(class UPanelWidget* Panel, int32 ID);
    void UpdateSelectedVehicle();
    void HandlePresetClick(int32 ID);
    void InitVehiclesCategory(bool IsDefault);
    void OnSelectedVehicleChanged();
    void Construct();
    void BndEvt__WBP_VehiclePresets_DuplicateButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void OnVehiclesDataChanged();
    void OnLoadGameFinished(bool IsLoadedFromSavegame);
    void BndEvt__WBP_VehiclePresets_RemoveButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_VehiclePresets_ModifyButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void OnVehicleModified(int32 VehicleID);
    void ExecuteUbergraph_WBP_VehiclePresets(int32 EntryPoint);
    void ShowDetails__DelegateSignature();
};

#endif
