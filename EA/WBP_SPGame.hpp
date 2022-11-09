#ifndef UE4SS_SDK_WBP_SPGame_HPP
#define UE4SS_SDK_WBP_SPGame_HPP

class UWBP_SPGame_C : public UEHDemoScreen
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
    class UWBP_Tabs_C* Tabs;
    class UWidgetSwitcher* TabSwitcher;
    class UWBP_SPGameDetails_C* WBP_BetaScenarioDetails;
    class UWBP_SPGameStartingStation_C* WBP_BetaStartingStation;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;

    void OnEnterEvent();
    void SetGameInstanceTravelData();
    void BndEvt__WBP_Beta_Tabs_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature(int32 Index);
    void ExecuteUbergraph_WBP_SPGame(int32 EntryPoint);
};

#endif
