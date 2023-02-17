#ifndef UE4SS_SDK_WBP_Mods_HPP
#define UE4SS_SDK_WBP_Mods_HPP

class UWBP_Mods_C : public UEHModsScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TabIntro;
    class UWidgetAnimation* ListEntry;
    class UWidgetAnimation* TitleEntry;
    class UWidgetAnimation* BlackFadeIn;
    class UWidgetAnimation* BGBlur;
    class UTGConfigurableTextBlock* ActionKey;
    class UImage* BlackOverlay;
    class UWBP_PrimaryButton_C* BrowseModsButton;
    class UWidgetSwitcher* ButtonSwitcher;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    class UWBP_PrimaryButton_C* ShowInExplorerButton;
    class UWBP_Tabs_C* Tabs;
    class UWidgetSwitcher* TabSwitcher;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;
    int32 Option_Counter;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__WBP_Load_ShowInExplorerButton_K2Node_ComponentBoundEvent_0_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void BndEvt__WBP_Mods_ShowInExplorerButton_1_K2Node_ComponentBoundEvent_1_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void BndEvt__WBP_Mods_Tabs_K2Node_ComponentBoundEvent_2_OnTabSelected__DelegateSignature(int32 Index);
    void OnEnterEvent();
    void ExecuteUbergraph_WBP_Mods(int32 EntryPoint);
};

#endif
