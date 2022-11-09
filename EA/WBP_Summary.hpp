#ifndef UE4SS_SDK_WBP_Summary_HPP
#define UE4SS_SDK_WBP_Summary_HPP

class UWBP_Summary_C : public UEHSummaryScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TabIntro;
    class UWidgetAnimation* List Entry;
    class UWidgetAnimation* TitleEntry;
    class UWidgetAnimation* BlackFadeIn;
    class UWidgetAnimation* BGBlur;
    class UImage* BlackOverlay;
    class UTGConfigurableTextBlock* Difficulty;
    class UTGConfigurableTextBlock* FailureReason;
    class UImage* Image;
    class UImage* Image_92;
    class UTGConfigurableTextBlock* ScenarioDisplayText;
    class UTGConfigurableTextBlock* ScenarioStatus;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    class UImage* Thumbnail;
    class UTGConfigurableTextBlock* TimeInGame;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;
    int32 Option_Counter;

    void UpdateButtonsCollapse(bool IsSuccessful);
    void OnEnterEvent();
    void OnContextChanged();
    void OnScenarioDetailsUpdated(FEHScenarioDetails ScenarioDetails);
    void ExecuteUbergraph_WBP_Summary(int32 EntryPoint);
};

#endif
