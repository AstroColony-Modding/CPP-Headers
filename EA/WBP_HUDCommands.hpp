#ifndef UE4SS_SDK_WBP_HUDCommands_HPP
#define UE4SS_SDK_WBP_HUDCommands_HPP

class UWBP_HUDCommands_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* AstronautsButton;
    class UImage* Background;
    class UBorder* CommandsBorder1;
    class UBorder* CommandsBorder2;
    class UBorder* CommandsBorder3;
    class UBorder* CommandsBorder4;
    class UWBP_IcoButton_C* ConstructionButton;
    class UWBP_IcoButton_C* CursorButton;
    class UTGConfigurableTextBlock* DividerName;
    class UOverlay* DockingOverlay;
    class UOverlay* ExpandOverlay;
    class UWBP_IcoButton_C* GuidesButton;
    class UImage* Image_4;
    class UImage* Image_137;
    class UWBP_IcoButton_C* InventoryButton;
    class UWBP_IcoButton_C* JetpackButton;
    class UWBP_IcoButton_C* MapButton;
    class UWBP_IcoButton_C* PauseButton;
    class UWBP_IcoButton_C* PhotomodeButton;
    class UWBP_IcoButton_C* PickaxeButton;
    class URetainerBox* RetainerBox_3;
    class UWBP_IcoButton_C* ScannerButton;
    class UWBP_IcoButton_C* SettingsButton;
    class UImage* ShuttleIco;
    class UHorizontalBox* TabHorizontal;
    class UTGConfigurableTextBlock* TabText;
    class UWBP_IcoButton_C* TechnologyButton;
    class UWBP_IcoButton_C* ToolButton;
    class UWBP_IcoButton_C* VehiclesButton;
    class UEHSpaceCarryComponent* SpaceCarryComponentCached;

    void UpdateJetpackMode(bool IsActive);
    void UpdateArrivalColor();
    void RefreshActionBindings();
    void UpdateDockingState();
    void UpdateJobMode();
    FText GetRemainingSpaceShuttleArivalTime();
    void BndEvt__JetpackButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void OnPauseStateChanged(bool IsPaused);
    void BndEvt__ToolButton_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void BndEvt__TechnologyButton_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
    void BndEvt__ConstructionButton_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature();
    void BndEvt__InventoryButton_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature();
    void Construct();
    void BndEvt__SettingsButton_1_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__GuidesButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__MapButton_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature();
    void BndEvt__PickaxeButton_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature();
    void BndEvt__ScannerButton_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature();
    void OnGameUserSettingsUpdate();
    void BndEvt__WBP_HUDCommands_TechnologyButton_1_K2Node_ComponentBoundEvent_10_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_HUDCommands_TechnologyButton_2_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature();
    void OnArrivalDockingStationChanged(class UEHDockingStationObject* ArrivalDockingStation);
    void BndEvt__WBP_HUDCommands_PhotomodeButton_K2Node_ComponentBoundEvent_12_ButtonClicked__DelegateSignature();
    void OnGameStarted();
    void OnMouseShowStateChanged(bool IsMouseShown);
    void ExecuteUbergraph_WBP_HUDCommands(int32 EntryPoint);
};

#endif
