#ifndef UE4SS_SDK_WBP_Sandbox_HPP
#define UE4SS_SDK_WBP_Sandbox_HPP

class UWBP_Sandbox_C : public UEHSandboxScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TabIntro;
    class UWidgetAnimation* ListEntry;
    class UWidgetAnimation* TitleEntry;
    class UWidgetAnimation* BlackFadeIn;
    class UWidgetAnimation* BGBlur;
    class UImage* BlackOverlay;
    class UTGCheckBox* ChunkGenerationToggle;
    class UWBP_Spinner_C* ChunkSizeSpinner;
    class UImage* Icon;
    class UTGCheckBox* PlayerConsumesOxyygenToggle;
    class UTGConfigurableTextBlock* ScenarioName;
    class UTGConfigurableTextBlock* SDConfigurableTextBlock_2;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    class UVerticalBox* VerticalScenariosList;
    class UWBP_PanelWidgetNavigation_C* WBP_PanelWidgetNavigation;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;

    void OnEnterEvent();
    void SetGameInstanceTravelData();
    void ExecuteUbergraph_WBP_Sandbox(int32 EntryPoint);
};

#endif
