#ifndef UE4SS_SDK_WBP_VehiclePartDetails_HPP
#define UE4SS_SDK_WBP_VehiclePartDetails_HPP

class UWBP_VehiclePartDetails_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_NameDividerSmall_C* ColorDivider;
    class UWBP_ColorPicker_C* ColorPicker;
    class UWBP_NameDividerSmall_C* CostDivider;
    class UHorizontalBox* CostHorizontal;
    class UImage* HexHighlight;
    class UImage* Icon;
    class UWBP_Slider_C* OffsetX;
    class UWBP_Slider_C* OffsetY;
    class UWBP_Slider_C* OffsetZ;
    class UOverlay* Overlay;
    class UWBP_NameDividerSmall_C* PositionDivider;
    class UWBP_Dropdown_C* PositionMirrorDropdown;
    class UHorizontalBox* PositionMirrorHorizontal;
    class UWBP_NameDividerSmall_C* SchemesDivider;
    class UWBP_Dropdown_C* SchemesDropdown;
    class UWBP_NameDividerSmall_C* SizeDivier;
    class UWBP_Dropdown_C* SizeMirrorDropdown;
    class UHorizontalBox* SizeMirrorHorizontal;
    class UWBP_Slider_C* SizeX;
    class UWBP_Slider_C* SizeY;
    class UWBP_Slider_C* SizeZ;
    class UTGConfigurableTextBlock* Title;
    class UWBP_RecipeItemSlot_C* WBP_RecipeItemSlot;
    class UWBP_RecipeItemSlot_C* WBP_RecipeItemSlot_1;
    FEHVehiclePart SelectedPartDetails;
    FEHVehiclePartTypeData VehiclePartData;

    class UWidget* GetDescriptionTooltip();
    void UpdateCost();
    void UpdateMirrorVisibility();
    void UpdatePartOffset();
    void UpdatePartSize();
    void UpdateSizesVisibility(EEHVehiclePartScale PartScale);
    void UpdateOffsets();
    void UpdateSize();
    void UpdateColors();
    void UpdateSchemes();
    void Init();
    void Construct();
    void OnSelectedVehiclePartChanged();
    void BndEvt__WBP_VehiclePartDetails_SchemesDropdown_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(FString ItemName, int32 ItemIndex);
    void BndEvt__WBP_VehicleDetails_ColorPicker_K2Node_ComponentBoundEvent_2_OnColorChanged__DelegateSignature(FLinearColor LinearColor);
    void BndEvt__WBP_VehiclePartDetails_SizeMirrorDropdown_K2Node_ComponentBoundEvent_8_SelectionChanged__DelegateSignature(FString ItemName, int32 ItemIndex);
    void BndEvt__WBP_VehiclePartDetails_PositionMirrorDropdown_K2Node_ComponentBoundEvent_9_SelectionChanged__DelegateSignature(FString ItemName, int32 ItemIndex);
    void BndEvt__WBP_VehiclePartDetails_SizeX_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature(float Value);
    void BndEvt__WBP_VehiclePartDetails_SizeY_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(float Value);
    void BndEvt__WBP_VehiclePartDetails_SizeZ_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature(float Value);
    void BndEvt__WBP_VehiclePartDetails_OffsetX_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(float Value);
    void BndEvt__WBP_VehiclePartDetails_OffsetY_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float Value);
    void BndEvt__WBP_VehiclePartDetails_OffsetZ_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_WBP_VehiclePartDetails(int32 EntryPoint);
};

#endif
