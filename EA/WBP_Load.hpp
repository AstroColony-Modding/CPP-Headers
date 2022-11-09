#ifndef UE4SS_SDK_WBP_Load_HPP
#define UE4SS_SDK_WBP_Load_HPP

class UWBP_Load_C : public UEHLoadScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TabIntro;
    class UWidgetAnimation* ListEntry;
    class UWidgetAnimation* TitleEntry;
    class UWidgetAnimation* BlackFadeIn;
    class UWidgetAnimation* BGBlur;
    class UImage* BlackOverlay;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    class UWBP_PrimaryButton_C* ShowInExplorerButton;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;
    int32 Option_Counter;

    void OnEnterEvent();
    void BndEvt__WBP_Load_ShowInExplorerButton_K2Node_ComponentBoundEvent_0_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void ExecuteUbergraph_WBP_Load(int32 EntryPoint);
};

#endif
