#ifndef UE4SS_SDK_WBP_NotificationDialog_HPP
#define UE4SS_SDK_WBP_NotificationDialog_HPP

class UWBP_NotificationDialog_C : public UEHNotificationDialogWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* EnterAnimation;
    class UTGConfigurableTextBlock* Body;
    class UImage* Image_0;
    class UOverlay* Overlay_0;
    class UTGConfigurableTextBlock* Title;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_NotificationDialog(int32 EntryPoint);
};

#endif
