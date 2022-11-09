#ifndef UE4SS_SDK_WBP_ButtonBarMKEntry_HPP
#define UE4SS_SDK_WBP_ButtonBarMKEntry_HPP

class UWBP_ButtonBarMKEntry_C : public UEHButtonBarEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SlideIn;
    class UTGInputActionWidget* InputAction;
    class UTGConfigurableTextBlock* InputText;
    FText DefaultText;

    void OnContextChanged();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ButtonBarMKEntry(int32 EntryPoint);
};

#endif
