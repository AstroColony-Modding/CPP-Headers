#ifndef UE4SS_SDK_WBP_Campaign_HPP
#define UE4SS_SDK_WBP_Campaign_HPP

class UWBP_Campaign_C : public UEHCampaignScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TabIntro;
    class UWidgetAnimation* List Entry;
    class UWidgetAnimation* TitleEntry;
    class UWidgetAnimation* BlackFadeIn;
    class UWidgetAnimation* BGBlur;
    class UImage* BlackOverlay;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;
    int32 Option_Counter;

    void OnEnterEvent();
    void BndEvt__WBP_Campaign_StartTutorialButton_K2Node_ComponentBoundEvent_1_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void ExecuteUbergraph_WBP_Campaign(int32 EntryPoint);
};

#endif
