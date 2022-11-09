#ifndef UE4SS_SDK_WBP_DockingStation_HPP
#define UE4SS_SDK_WBP_DockingStation_HPP

class UWBP_DockingStation_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Lights;
    class UWBP_IcoButton_C* AddCall;
    class UWBP_RecipeItemSlot_C* AddCallCost;
    class UWBP_NamedLock_C* AstronautsCallLock;
    class UHorizontalBox* ConstructLines;
    class UVerticalBox* DockedMenu;
    class UWidgetSwitcher* DockSwitcher;
    class UBorder* LightsBorder;
    class UHorizontalBox* OrderedAstronauts;
    class UWBP_LongNamedSlot_C* OrdersList;
    class UWBP_IcoButton_C* RemoveCall;
    class UWBP_RecipeItemSlot_C* RemoveOrderCost;
    class UWBP_NameDivider_C* StatusDivider;
    class UWBP_IcoTextButton_C* WBP_DockButton;
    class UWBP_RecipeItemSlot_C* WBP_RecipeItemSlot;
    class UWBP_IcoTextButton_C* WBP_StopDockButton;
    class UWBP_IcoTextButton_C* WBP_TransferDroneButton;
    class UWBP_IcoTextButton_C* WBP_UndockButton;
    class UObject* GridMovementComponent;
    TMap<class TSubclassOf<UEHAIObject>, class UEHAIItem*> AITypes;
    class UEHDockingStationObject* DockingStation;
    class UEHThrusterNetwork* Thruster Network;

    void LineAction(uint8 LineNumber, TEnumAsByte<DockingConveyLineActionType::Type> ActionType);
    void UpdateArrival();
    void UpdateOrderedAstronauts();
    void UpdateDockState();
    void UpdateLines();
    void Construct();
    void OnConveyorLinesChanged();
    void Destruct();
    void OnDockingStateChanged();
    void BndEvt__WBP_TransferDroneButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_DockButton_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_StopDockButton_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_UndockButton_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature();
    void OnOrderedAstronautsChanged();
    void BndEvt__WBP_DockingStation_AddOrder_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_DockingStation_RemoveOrder_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature();
    void OnArrivalDockingStationChanged(class UEHDockingStationObject* ArrivalDockingStation);
    void ExecuteUbergraph_WBP_DockingStation(int32 EntryPoint);
};

#endif
