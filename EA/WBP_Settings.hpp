#ifndef UE4SS_SDK_WBP_Settings_HPP
#define UE4SS_SDK_WBP_Settings_HPP

class UWBP_Settings_C : public UEHSettingsScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TabIntro;
    class UWidgetAnimation* ListEntry;
    class UWidgetAnimation* TitleEntry;
    class UWidgetAnimation* BlackFadeIn;
    class UWidgetAnimation* BGBlur;
    class UImage* BlackOverlay;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;

    void OnEnterEvent();
    void ExecuteUbergraph_WBP_Settings(int32 EntryPoint);
};

#endif
