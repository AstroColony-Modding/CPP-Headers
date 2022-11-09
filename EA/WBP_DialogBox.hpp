#ifndef UE4SS_SDK_WBP_DialogBox_HPP
#define UE4SS_SDK_WBP_DialogBox_HPP

class UWBP_DialogBox_C : public UEHDialogBoxWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* MoveUp;
    class UWidgetAnimation* FadeIn;
    class UImage* Backing;
    class UImage* DialogIcon;
    class UImage* Image_196;
    class UImage* TitleImage;
    class UWBP_DialogBoxButton_C* WBP_DialogBoxButton;
    class UWBP_DialogBoxButton_C* WBP_DialogBoxButton2;

    void OnContextChanged();
    void OnEnterEvent();
    void OnExitEvent();
    void ExecuteUbergraph_WBP_DialogBox(int32 EntryPoint);
};

#endif
