#ifndef UE4SS_SDK_WBP_SettingsOption_HPP
#define UE4SS_SDK_WBP_SettingsOption_HPP

class UWBP_SettingsOption_C : public UEHSettingsOptionWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimateIn;
    class UWidgetAnimation* Flickering;
    class UWidgetAnimation* GlowAnimation;
    class UWidgetAnimation* SelectAnimation;
    class UImage* Background;
    class UImage* BGImage;
    class UImage* BlackBackground;
    class UImage* Ico;
    class UTGConfigurableTextBlock* Text;
    bool bIsSelected;
    float ScrollPositionCached;
    bool bIsScrolling;
    float LastScrollPositionChange;
    float ScrolThreshold;
    bool bIsHovered;

    void UpdateBackground();
    FText Get_InteractiveArea_AccessibleText();
    void SetHovered(bool IsHovered);
    void SetSelected(bool bIsSelected);
    void OnContextChanged();
    void Construct();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_7_OnWidgetClickedEvent__DelegateSignature();
    void UpdateSelection(const bool IsSelected);
    void BndEvt__WBP_SettingsOption_InteractiveArea_K2Node_ComponentBoundEvent_0_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__WBP_SettingsOption_InteractiveArea_K2Node_ComponentBoundEvent_1_OnWidgetHoverEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_SettingsOption(int32 EntryPoint);
};

#endif
