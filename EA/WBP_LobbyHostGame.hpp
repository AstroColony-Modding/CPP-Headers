#ifndef UE4SS_SDK_WBP_LobbyHostGame_HPP
#define UE4SS_SDK_WBP_LobbyHostGame_HPP

class UWBP_LobbyHostGame_C : public UEHHostGameScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TabIntro;
    class UWidgetAnimation* ListEntry;
    class UWidgetAnimation* TitleEntry;
    class UWidgetAnimation* BlackFadeIn;
    class UWidgetAnimation* BGBlur;
    class UImage* BlackOverlay;
    class UVerticalBox* CenterBox;
    class UWBP_Chat_C* Chat;
    class UBorder* CounterBorder;
    class UWBP_Friends_C* Friends;
    class UWBP_PrimaryButton_C* LaunchButton;
    class UWBP_LobbyPlayers_C* LobbyPlayers;
    class UWBP_MPGameDetails_C* MPGameDetails;
    class UWBP_PrimaryButton_C* NotReadyButton;
    class UWBP_NameDivider_C* PlayersDivider;
    class UTGConfigurableTextBlock* PublicName;
    class UWBP_PrimaryButton_C* ReadyButton;
    class UWBP_PrimaryButton_C* RefreshButton;
    class UHorizontalBox* SavegameHorizontal;
    class UTGConfigurableTextBlock* SavegameName;
    class UTGConfigurableTextBlock* ScenarioStatus;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    class UTGConfigurableTextBlock* ServerName;
    class UWBP_SPGameStartingStation_C* StationSelection;
    class UWBP_Tabs_C* Tabs;
    class UWidgetSwitcher* TabSwitcher;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;

    void UpdateServerParams();
    void UpdateLobbyInfo();
    void UpdatePlayersCount(int32 LobbyPlayerCount);
    void UpdatePlayerReadyState();
    void BndEvt__WBP_Beta_Tabs_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature(int32 Index);
    void BndEvt__WBP_LobbyHostGame_LaunchButton_K2Node_ComponentBoundEvent_0_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void BndEvt__WBP_LobbyHostGame_ReadyButton_K2Node_ComponentBoundEvent_2_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void BndEvt__WBP_LobbyHostGame_NotReadyButton_K2Node_ComponentBoundEvent_3_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void Init();
    void Enter();
    void BndEvt__WBP_LobbyHostGame_RefreshButton_K2Node_ComponentBoundEvent_4_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void StartCounter();
    void ExecuteUbergraph_WBP_LobbyHostGame(int32 EntryPoint);
};

#endif
