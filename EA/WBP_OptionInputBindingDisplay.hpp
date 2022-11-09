#ifndef UE4SS_SDK_WBP_OptionInputBindingDisplay_HPP
#define UE4SS_SDK_WBP_OptionInputBindingDisplay_HPP

class UWBP_OptionInputBindingDisplay_C : public UEHOptionInputBindingDisplayWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* InputTextPrimary;
    class UBorder* MissingBindingBorder;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FText Get_PrimaryBinding_AccessibleText_0();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_OptionInputBindingDisplay(int32 EntryPoint);
};

#endif
