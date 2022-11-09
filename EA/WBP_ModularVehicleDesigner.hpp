#ifndef UE4SS_SDK_WBP_ModularVehicleDesigner_HPP
#define UE4SS_SDK_WBP_ModularVehicleDesigner_HPP

class UWBP_ModularVehicleDesigner_C : public UEHModularVehicleWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_VehicleDetails_C* VehicleDetails;
    class UWBP_VehicleModify_C* VehicleDetailsOverlay;
    class UWidgetSwitcher* VehicleModeSwitcher;
    class UWBP_VehiclePartDetails_C* VehiclePartDetails;
    class UWBP_VehiclePresets_C* VehiclePresetsOverlay;
    class UWBP_VehiclePartConstruct_C* WBP_VehiclePartConstruct;
    class UHorizontalBox* XHorizontal;
    class ABP_ModularVehicleDesigner_C* ModularVehicleDesigner;

    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Init(class ABP_ModularVehicleDesigner_C* BPHangar);
    void BndEvt__WBP_ModularVehicleDesigner_VehiclePresetsOverlay_K2Node_ComponentBoundEvent_0_ShowDetails__DelegateSignature();
    void BndEvt__WBP_ModularVehicleDesigner_VehicleDetailsOverlay_K2Node_ComponentBoundEvent_2_Back__DelegateSignature();
    void OnSelectedVehiclePartChanged();
    void Construct();
    void ShowDetails();
    void ExecuteUbergraph_WBP_ModularVehicleDesigner(int32 EntryPoint);
};

#endif
