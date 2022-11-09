#ifndef UE4SS_SDK_WBP_BindingFunctionKey_HPP
#define UE4SS_SDK_WBP_BindingFunctionKey_HPP

class UWBP_BindingFunctionKey_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* SizeBox;
    class UTGConfigurableTextBlock* Text;
    FVector2D Size;
    FText InText;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_BindingFunctionKey(int32 EntryPoint);
};

#endif
