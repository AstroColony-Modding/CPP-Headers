#ifndef UE4SS_SDK_WBP_FriendOption_HPP
#define UE4SS_SDK_WBP_FriendOption_HPP

class UWBP_FriendOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimateIn;
    class UWidgetAnimation* Flickering;
    class UWidgetAnimation* GlowAnimation;
    class UWidgetAnimation* SelectAnimation;
    class UImage* Background;
    class UImage* BlackBackground;
    class UImage* FlickerImage;
    class UTGWidget* InteractiveArea;
    class UWBP_TextButton_C* InviteJoinButton;
    class UTGConfigurableTextBlock* OptionName;
    class UTextBlock* P1;
    class UTextBlock* P2;
    class UTextBlock* P3;
    class UTextBlock* P4;
    class UTGConfigurableTextBlock* PresenceString;
    class UTGConfigurableTextBlock* State;
    FBPFriendInfo FriendInfo;
    bool IsInvite;
    float ScrollPositionCached;
    bool bIsScrolling;
    float LastScrollPositionChange;
    float ScrolThreshold;
    bool HideActionButton;

    void GetFriendStateText(FText& Playing);
    FText Get_InteractiveArea_AccessibleText_2();
    void SetSelected(bool bIsSelected);
    void OnFailure_1423EFA04D338A84D00B0B9B8BA3434C(const TArray<FBlueprintSessionResult>& SessionInfo);
    void OnSuccess_1423EFA04D338A84D00B0B9B8BA3434C(const TArray<FBlueprintSessionResult>& SessionInfo);
    void OnFailure_F65046964E8BAF9D975F819474E448BE();
    void OnSuccess_F65046964E8BAF9D975F819474E448BE();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_0_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_1_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_2_OnWidgetFocusReceivedEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_3_OnWidgetFocusLostEvent__DelegateSignature();
    void BndEvt__WBP_FriendOption_WBP_TextButton_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_7_OnWidgetClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_FriendOption(int32 EntryPoint);
};

#endif
