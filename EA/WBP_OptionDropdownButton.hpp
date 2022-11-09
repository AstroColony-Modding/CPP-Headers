#ifndef UE4SS_SDK_WBP_OptionDropdownButton_HPP
#define UE4SS_SDK_WBP_OptionDropdownButton_HPP

class UWBP_OptionDropdownButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* ButtonText;
    FText Text;
    int32 Index;

    FText Get_ButtonText_AccessibleText_0();
    void Construct();
    void ExecuteUbergraph_WBP_OptionDropdownButton(int32 EntryPoint);
};

#endif
