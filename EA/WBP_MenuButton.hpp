#ifndef UE4SS_SDK_WBP_MenuButton_HPP
#define UE4SS_SDK_WBP_MenuButton_HPP

class UWBP_MenuButton_C : public UEHBaseButtonWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Stagger;
    class UWidgetAnimation* SelectAnimation;
    class UWidgetAnimation* GlowAnimation;
    class UImage* BackgroundImage;
    class UOverlay* MainOverlay;

    void AddDemoPadlock();
    void ToggleFocusedImageFocus(ESlateVisibility Visibility);
    FText GetAccessibleText_0();
    void OnContextChanged();
    void PreConstruct(bool IsDesignTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void BndEvt__ButtonTile_K2Node_ComponentBoundEvent_0_OnWidgetFocusReceivedEvent__DelegateSignature();
    void BndEvt__ButtonTile_K2Node_ComponentBoundEvent_1_OnWidgetFocusLostEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_MenuButton(int32 EntryPoint);
};

#endif
