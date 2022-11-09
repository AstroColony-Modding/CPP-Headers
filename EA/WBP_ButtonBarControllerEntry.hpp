#ifndef UE4SS_SDK_WBP_ButtonBarControllerEntry_HPP
#define UE4SS_SDK_WBP_ButtonBarControllerEntry_HPP

class UWBP_ButtonBarControllerEntry_C : public UEHButtonBarEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SlideIn;
    class UTGInputActionWidget* InputAction;
    class UTGConfigurableTextBlock* InputText;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_ButtonBarControllerEntry(int32 EntryPoint);
};

#endif
