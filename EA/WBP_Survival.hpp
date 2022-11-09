#ifndef UE4SS_SDK_WBP_Survival_HPP
#define UE4SS_SDK_WBP_Survival_HPP

class UWBP_Survival_C : public UEHSurvivalScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TabIntro;
    class UWidgetAnimation* ListEntry;
    class UWidgetAnimation* TitleEntry;
    class UWidgetAnimation* BlackFadeIn;
    class UWidgetAnimation* BGBlur;
    class UImage* BlackOverlay;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    class UTGEditableTextBox* SeedNumberText;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;
    int32 Option_Counter;

    void PlayStaggerAnimation();
    void OnEnterEvent();
    void ExecuteUbergraph_WBP_Survival(int32 EntryPoint);
};

#endif
