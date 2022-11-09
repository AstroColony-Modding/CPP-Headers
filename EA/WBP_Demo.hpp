#ifndef UE4SS_SDK_WBP_Demo_HPP
#define UE4SS_SDK_WBP_Demo_HPP

class UWBP_Demo_C : public UEHDemoScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TabIntro;
    class UWidgetAnimation* ListEntry;
    class UWidgetAnimation* TitleEntry;
    class UWidgetAnimation* BlackFadeIn;
    class UWidgetAnimation* BGBlur;
    class UImage* BlackOverlay;
    class UImage* Icon;
    class UTGConfigurableTextBlock* ScenarioDescription;
    class UTGConfigurableTextBlock* ScenarioName_1;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    class UWBP_SPGameDetails_C* WBP_BetaScenarioDetails;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;

    void OnEnterEvent();
    void SetGameInstanceTravelData();
    void ExecuteUbergraph_WBP_Demo(int32 EntryPoint);
};

#endif
