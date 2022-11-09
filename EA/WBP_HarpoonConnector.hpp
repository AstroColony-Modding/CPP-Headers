#ifndef UE4SS_SDK_WBP_HarpoonConnector_HPP
#define UE4SS_SDK_WBP_HarpoonConnector_HPP

class UWBP_HarpoonConnector_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Lights;
    class UWBP_IcoButton_C* AttractPlanetoidButton;
    class UHorizontalBox* ConstructLines;
    class UVerticalBox* DockedMenu;
    class UWidgetSwitcher* DockSwitcher;
    class UBorder* LightsBorder;
    class UWBP_NameDivider_C* StatusDivider;
    class UWBP_IcoTextButton_C* WBP_DockButton;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_IcoTextButton_C* WBP_StopDockButton;
    class UWBP_IcoTextButton_C* WBP_UndockButton;
    class UObject* GridMovementComponent;
    class UEHCosmicHarpoonObject* HarpoonConnector;
    class UEHThrusterNetwork* Thruster Network;

    void LineAction(uint8 LineNumber, TEnumAsByte<DockingConveyLineActionType::Type> ActionType);
    void UpdateDockState();
    void UpdateLines();
    void Destruct();
    void BndEvt__WBP_DockButton_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_StopDockButton_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_UndockButton_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature();
    void Construct();
    void OnConveyorLinesChanged();
    void OnDockingStateChanged();
    void BndEvt__WBP_HarpoonConnector_AsteroidCatchingButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_HarpoonConnector(int32 EntryPoint);
};

#endif
