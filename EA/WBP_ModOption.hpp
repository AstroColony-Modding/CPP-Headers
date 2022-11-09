#ifndef UE4SS_SDK_WBP_ModOption_HPP
#define UE4SS_SDK_WBP_ModOption_HPP

class UWBP_ModOption_C : public UEHModsOptionWidget
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
    class UVerticalBox* MapsVerticalBox;
    class UTGConfigurableTextBlock* OptionName;
    bool bIsSelected;
    float ScrollPositionCached;
    bool bIsScrolling;
    float LastScrollPositionChange;
    float ScrolThreshold;

    void InitMaps();
    FText Get_InteractiveArea_AccessibleText_2();
    void SetSelected(bool bIsSelected);
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_7_OnWidgetClickedEvent__DelegateSignature();
    void UpdateSelection(const bool IsSelected);
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_0_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_1_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_2_OnWidgetFocusReceivedEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_3_OnWidgetFocusLostEvent__DelegateSignature();
    void Construct();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_ModOption(int32 EntryPoint);
};

#endif
