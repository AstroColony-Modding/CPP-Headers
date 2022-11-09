#ifndef UE4SS_SDK_WBP_Multiplayer_HPP
#define UE4SS_SDK_WBP_Multiplayer_HPP

class UWBP_Multiplayer_C : public UEHMultiplayerScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TabIntro;
    class UWidgetAnimation* ListEntry;
    class UWidgetAnimation* TitleEntry;
    class UWidgetAnimation* BlackFadeIn;
    class UWidgetAnimation* BGBlur;
    class UWBP_PrimaryButton_C* BackButton;
    class UImage* BlackOverlay;
    class UWBP_Friends_C* Friends;
    class UVerticalBox* HostVerticalBox;
    class UImage* Icon;
    class UWBP_LobbyDetails_C* LobbyDetails;
    class UWBP_PublicServers_C* PublicServers;
    class UWBP_PrimaryButton_C* RefreshFriends;
    class UWBP_PrimaryButton_C* RefreshServers;
    class UBorder* SavegameBorder;
    class UTGConfigurableTextBlock* ScenarioDescription;
    class UTGConfigurableTextBlock* ScenarioName_1;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    class UWBP_PrimaryButton_C* SelectButton;
    class UWBP_PrimaryButton_C* ShowInExplorerButton;
    class UWBP_Tabs_C* Tabs;
    class UWidgetSwitcher* TabSwitcher;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;

    void UpdateHostButtonText();
    void ChangeSavegameVisibility(bool IsVisible);
    void BndEvt__WBP_Beta_Tabs_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature(int32 Index);
    void BndEvt__WBP_Multiplayer_HostGameButton_K2Node_ComponentBoundEvent_0_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void BndEvt__WBP_Multiplayer_RefreshButton_K2Node_ComponentBoundEvent_4_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void BndEvt__WBP_Multiplayer_RefreshButton_1_K2Node_ComponentBoundEvent_5_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void BndEvt__WBP_Multiplayer_LobbyDetails_K2Node_ComponentBoundEvent_2_SelectPressed__DelegateSignature();
    void BndEvt__WBP_Multiplayer_CancelButton_K2Node_ComponentBoundEvent_3_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void BndEvt__WBP_Multiplayer_SelectButton_K2Node_ComponentBoundEvent_6_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void OnEnterEvent();
    void BndEvt__WBP_Multiplayer_ShowInExplorerButton_K2Node_ComponentBoundEvent_7_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void BndEvt__WBP_Multiplayer_LobbyDetails_K2Node_ComponentBoundEvent_8_ClearPressed__DelegateSignature();
    void ExecuteUbergraph_WBP_Multiplayer(int32 EntryPoint);
};

#endif
