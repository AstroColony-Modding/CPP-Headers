#ifndef UE4SS_SDK_WBP_Menu_HPP
#define UE4SS_SDK_WBP_Menu_HPP

class UWBP_Menu_C : public UEHMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWBP_GameLogo_C* WBP_Logo;
    class UWBP_MenuButton_C* WBP_MenuButton;
    class UWBP_MenuButton_C* WBP_MenuButton_0;
    class UWBP_MenuButton_C* WBP_MenuButton_1;
    class UWBP_PanelWidgetNavigation_C* WBP_PanelWidgetNavigation;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    int32 Option_Counter;
    float StaggerAnimationDelay;

    void OnEnter();
    void PlayStaggerAnimation();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_Menu(int32 EntryPoint);
};

#endif
