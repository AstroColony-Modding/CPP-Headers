#ifndef UE4SS_SDK_WBP_gameHUD_HPP
#define UE4SS_SDK_WBP_gameHUD_HPP

class UWBP_gameHUD_C : public UEHHUDWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* VignetteAnimation;
    class UOverlay* DockTechnologySlot;
    class UImage* HealthVignette;
    class UOverlay* PCOVerlay;
    class UOverlay* ScenarioSlot;
    class UWBP_Debug_C* WBP_Debug;
    class UWBP_CharacterFarAway_C* WBP_FarAway;
    class UWBP_MainInventory_C* WBP_Inventory;
    class UWBP_JobModes_C* WBP_JobModes;
    class UWBP_PickInfo_C* WBP_PickInfo;
    class UWBP_SavePrompt_C* WBP_SavePrompt;
    class UWBP_Window_C* WBP_Window;
    class UOverlay* WindowOverlay;
    class UEHScenarioOverlayWidget* ScenarioOverlayWidget;
    bool TabKeyDown;
    bool IsCheckingWindowFocus;
    int32 CharacterNumTest;

    TSubclassOf<class UInteractBaseWidget> RemovePopMenu();
    TSubclassOf<class UInteractBaseWidget> RemoveMenu();
    bool AddPopMenu(class UUserWidget* MenuWidget);
    bool AddMenu(class UUserWidget* MenuWidget);
    FLinearColor GetHealthVignetteColor();
    void LosingHealthChanged();
    bool IsTechnologyDocked();
    void UpdateDockedTechPoints();
    void ShowOnlyConstructionWidgets();
    void ShowOnlyInteractionWidgets();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void Create Scenario HUDOverlay();
    bool HasPopMenu(TSubclassOf<class UInteractBaseWidget> InteractBaseWidget);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Construct();
    void OnTechnologyPointsDockChanged();
    void ExecuteUbergraph_WBP_gameHUD(int32 EntryPoint);
};

#endif
