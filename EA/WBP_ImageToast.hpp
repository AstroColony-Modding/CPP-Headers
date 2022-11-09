#ifndef UE4SS_SDK_WBP_ImageToast_HPP
#define UE4SS_SDK_WBP_ImageToast_HPP

class UWBP_ImageToast_C : public UEHToastWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* Overlay_1;
    class URichTextBlock* ToastDescription;
    class UImage* ToastImage;
    class UTGConfigurableTextBlock* ToastTitle;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_ImageToast(int32 EntryPoint);
};

#endif
