#ifndef UE4SS_SDK_WBP_ButtonListMenu_HPP
#define UE4SS_SDK_WBP_ButtonListMenu_HPP

class UWBP_ButtonListMenu_C : public UEHMenuOptionWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextSelectAnimation;
    class UWidgetAnimation* Flickering;
    class UWidgetAnimation* GlowAnimation;
    class UWidgetAnimation* SelectAnimation;
    class UImage* Background;
    class UImage* Line;
    class UTGConfigurableTextBlock* Text;
    class UBackgroundBlur* TextBlur;
    class UTGConfigurableTextBlock* TextShadow;
    FText SelectionName;
    bool bIsSelected;

    void SetSelected(bool Selected);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnContextChanged();
    void BndEvt__Interactive_K2Node_ComponentBoundEvent_0_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__Interactive_K2Node_ComponentBoundEvent_1_OnWidgetFocusReceivedEvent__DelegateSignature();
    void BndEvt__Interactive_K2Node_ComponentBoundEvent_2_OnWidgetFocusLostEvent__DelegateSignature();
    void BndEvt__Interactive_K2Node_ComponentBoundEvent_4_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ButtonListMenu(int32 EntryPoint);
};

#endif
