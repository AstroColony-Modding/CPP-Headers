#ifndef UE4SS_SDK_WBP_ChatMessage_HPP
#define UE4SS_SDK_WBP_ChatMessage_HPP

class UWBP_ChatMessage_C : public UEHModsOptionWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimateIn;
    class UWidgetAnimation* Flickering;
    class UWidgetAnimation* GlowAnimation;
    class UWidgetAnimation* SelectAnimation;
    class UImage* Background;
    class UImage* BlackBackground;
    class UImage* Image;
    class URichTextBlock* MessageText;
    class APlayerState* PlayerState;
    FString Msg;
    bool bIsSelected;
    float ScrollPositionCached;
    bool bIsScrolling;
    float LastScrollPositionChange;
    float ScrolThreshold;

    void OnContextChanged();
    void Construct();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_7_OnWidgetClickedEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_0_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_1_OnWidgetHoverEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ChatMessage(int32 EntryPoint);
};

#endif
