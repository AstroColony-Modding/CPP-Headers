#ifndef UE4SS_SDK_WBP_CampaignOption_HPP
#define UE4SS_SDK_WBP_CampaignOption_HPP

class UWBP_CampaignOption_C : public UEHCampaignOptionWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimateIn;
    class UWidgetAnimation* Flickering;
    class UWidgetAnimation* GlowAnimation;
    class UWidgetAnimation* SelectAnimation;
    class UImage* Background;
    class UImage* BlackBackground;
    class UImage* FlickerImage;
    class UImage* Image;
    class UTGConfigurableTextBlock* OptionName;
    bool bIsSelected;
    float ScrollPositionCached;
    bool bIsScrolling;
    float LastScrollPositionChange;
    float ScrolThreshold;

    FText Get_InteractiveArea_AccessibleText_2();
    void SetSelected(bool bIsSelected);
    void OnContextChanged();
    void Construct();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_7_OnWidgetClickedEvent__DelegateSignature();
    void UpdateSelection(const bool IsSelected);
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_0_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_1_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_2_OnWidgetFocusReceivedEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_3_OnWidgetFocusLostEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_CampaignOption(int32 EntryPoint);
};

#endif
