#ifndef UE4SS_SDK_WBP_Pause_HPP
#define UE4SS_SDK_WBP_Pause_HPP

class UWBP_Pause_C : public UEHPauseScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BlackFadeIn;
    class UImage* BlackOverlay;
    class UCanvasPanel* CanvasPanel_0;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer;
    class UWBP_MenuButton_C* WBP_MCCMenuButton;
    class UWBP_MenuButton_C* WBP_MCCMenuButton_0;
    class UWBP_MenuButton_C* WBP_MCCMenuButton_1;
    class UWBP_PanelWidgetNavigation_C* WBP_PanelWidgetNavigation;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;
    int32 Option_Counter;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void PlayStaggerAnimation();
    void OnContextChanged();
    void Construct();
    void ExecuteUbergraph_WBP_Pause(int32 EntryPoint);
};

#endif
