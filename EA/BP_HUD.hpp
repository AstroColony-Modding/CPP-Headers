#ifndef UE4SS_SDK_BP_HUD_HPP
#define UE4SS_SDK_BP_HUD_HPP

class ABP_HUD_C : public AEHHUDGame
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_CheatComponent_C* BP_CheatComponent;
    class USceneComponent* DefaultSceneRoot;
    class UObject* OpenedMenuPayload;
    TMap<class TSubclassOf<UMenuWidget>, class UMenuWidget*> CachedWidgetMap;
    int32 CurrentTipIndex;
    FLinearColor CursorColor;
    bool CanInteract;
    bool CanManage;
    bool HasInteraction;
    class UMediaPlayer* PrimaryGuideMediaPlayer;
    class UMediaPlayer* SecondaryGuideMediaPlayer;

    void CreateSceneVehicleDesigner(class ABP_SceneInteraction_C*& Output_Get);
    class UCanvasPanel* GetVisibleScreenCanvas();
    class UMenuWidget* OpenMenu(TSubclassOf<class UMenuWidget> MenuWidget, class UObject* PayloadObject);
    bool CloseCurrentMenu();
    bool TogglePopMenu(TSubclassOf<class UInteractBaseWidget> MenuWidget, class UEHInteractableObject* InteractableObject);
    bool IsPhotoModeActive();
    void RestorePopMenu(class UObject* Object, TSubclassOf<class UInteractBaseWidget> Class);
    void TogglePhotoMode();
    void CloseCurrentScreen();
    void TriggerCustomAction(FName Action);
    void ToggleModularVehicleDesigner();
    void ToggleMap();
    void CloseTip();
    void ToggleLog();
    void ToggleMouse(bool ShowMouse);
    class UMenuWidget* ToggleMenu(TSubclassOf<class UMenuWidget> MenuWidget, class UObject* PayloadObject);
    void ChangeCursorState(bool IsActive);
    void ClosePopMenu();
    void OpenPopMenu(TSubclassOf<class UInteractBaseWidget> MenuWidget, class UEHInteractableObject* InteractableObject);
    void RegisterCachedMenuWidget(class UMenuWidget* MenuWidget);
    class UMenuWidget* GetOrCreateMenuWidget(TSubclassOf<class UMenuWidget> MenuWidgetClass, class UObject* PayloadObject);
    void ReceiveBeginPlay();
    void TriggerAction(const FName ActionName);
    void HoldTimersCleared();
    void OnPlayerActionsChanged();
    void ApplicationActivationStateChanged(bool IsActive);
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    void CloseOpenedInteractionMenu();
    void OpenPauseMenuSafe();
    void OpenInteractMenu(class UEHInteractableObject* InteractableObject);
    void ExecuteUbergraph_BP_HUD(int32 EntryPoint);
};

#endif
