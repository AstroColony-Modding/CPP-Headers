#ifndef UE4SS_SDK_WBP_BaseButton_HPP
#define UE4SS_SDK_WBP_BaseButton_HPP

class UWBP_BaseButton_C : public UEHBaseButtonWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ButtonShadowImage;
    class UHorizontalBox* InputPromptContainer;
    class UHorizontalBox* InputPromptContainerShadow;
    class UHorizontalBox* PromptContainer;
    class UHorizontalBox* PromptContainerShadow;

    void ToggleFocus(ESlateVisibility Visibility);
    void ToggleHatching();
    void OnFocusedEvent();
    void OnHoveredEvent();
    void OnUnfocusedEvent();
    void OnUnhoveredEvent();
    void OnContextChanged();
    void OnInputControllerChanged(TEnumAsByte<ETGInputControllerType> InputControllerType);
    void ExecuteUbergraph_WBP_BaseButton(int32 EntryPoint);
};

#endif
