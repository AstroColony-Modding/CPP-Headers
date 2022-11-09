#ifndef UE4SS_SDK_WBP_LobbyPlayer_HPP
#define UE4SS_SDK_WBP_LobbyPlayer_HPP

class UWBP_LobbyPlayer_C : public UEHModsOptionWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimateIn;
    class UWidgetAnimation* GlowAnimation;
    class UWidgetAnimation* SelectAnimation;
    class UImage* Background;
    class UImage* BlackBackground;
    class UImage* Image;
    class UWBP_TextButton_C* KickButton;
    class UTGConfigurableTextBlock* OptionName;
    class UTGConfigurableTextBlock* ReadyState;
    class APlayerState* PlayerState;
    bool bIsSelected;
    float ScrollPositionCached;
    bool bIsScrolling;
    float LastScrollPositionChange;
    float ScrolThreshold;

    void UpdatePlayerInfo();
    void UpdateReadyState(bool IsReady);
    void Construct();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_0_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_1_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_2_OnWidgetFocusReceivedEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_3_OnWidgetFocusLostEvent__DelegateSignature();
    void BndEvt__WBP_FriendOption_WBP_TextButton_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_LobbyPlayer(int32 EntryPoint);
};

#endif
