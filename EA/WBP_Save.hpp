#ifndef UE4SS_SDK_WBP_Save_HPP
#define UE4SS_SDK_WBP_Save_HPP

class UWBP_Save_C : public UEHSaveScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ListEntry;
    class UWidgetAnimation* BlackFadeIn;
    class UWidgetAnimation* BGBlur;
    class UImage* BlackOverlay;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    class UWBP_PrimaryButton_C* ShowInExplorerButton;
    class UWBP_Notify_C* WBP_Notify;
    class UWBP_ScreenTitle_C* WBP_ScreenTitle;
    float StaggerAnimationDelay;
    int32 Option_Counter;

    void OnEnterEvent();
    void FileSavedEvent(FString Filename);
    void BndEvt__WBP_Save_ShowInExplorerButton_K2Node_ComponentBoundEvent_0_OnClickedDelegate__DelegateSignature(class UEHBaseButtonWidget* ButtonWidget);
    void ExecuteUbergraph_WBP_Save(int32 EntryPoint);
};

#endif
