#ifndef UE4SS_SDK_WBP_OptionInputBinding_HPP
#define UE4SS_SDK_WBP_OptionInputBinding_HPP

class UWBP_OptionInputBinding_C : public UEHOptionInputBindingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_BindingFunctionKey_C* AltKey;
    class UWBP_BindingFunctionKey_C* CtrlKey;
    class UTGConfigurableTextBlock* EllipsisPrimary;
    class UHorizontalBox* FunctionKeysHorizontal;
    class UTGConfigurableTextBlock* InputTextPrimary;
    class UBorder* MissingBindingBorder;
    class UWBP_BindingFunctionKey_C* ShiftKey;

    FText Get_PrimaryBinding_AccessibleText_0();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_OptionInputBinding(int32 EntryPoint);
};

#endif
