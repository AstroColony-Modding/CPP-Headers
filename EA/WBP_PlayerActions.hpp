#ifndef UE4SS_SDK_WBP_PlayerActions_HPP
#define UE4SS_SDK_WBP_PlayerActions_HPP

class UWBP_PlayerActions_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ArrowDown;
    class UOverlay* InfoWidgetOverlay;
    class UTGConfigurableTextBlock* ItemDebugName;
    class UImage* ItemImage;
    class UTGConfigurableTextBlock* ItemName;
    class UOverlay* Overlay;
    class UVerticalBox* PlayerActionsVerticalBox;
    class UWBP_PlayerActionSlot_C* WBP_PlayerActionSlot;
    class UWBP_PlayerActionSlot_C* WBP_PlayerActionSlot_1;
    bool ShowExtraInfo;

    void RefreshPlayerActionBindings();
    void UpdateInteractableInfoWidget(class UEHItem* Item, class UEHInteractableObject* InteractableObject);
    void UpdateWorldInteractiveInfoWidget(class AActor* WorldInteractiveActor);
    void UpdateInteractionText();
    void UpdatePlayerActions();
    void CreatePlayerActions();
    void Construct();
    void OnPlayerActionsChanged();
    void OnGameUserSettingsUpdate();
    void OnMouseShowStateChanged(bool IsMouseShown);
    void OnMenuOpenStateChanged(bool IsOpened);
    void ExecuteUbergraph_WBP_PlayerActions(int32 EntryPoint);
};

#endif
