#ifndef UE4SS_SDK_WBP_DropdownEntry_HPP
#define UE4SS_SDK_WBP_DropdownEntry_HPP

class UWBP_DropdownEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* ButtonText;
    class USizeBox* SizeBox;
    FText Text;
    FVector2D Size;
    bool IsBigFont;

    FText Get_ButtonText_AccessibleText_0();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_DropdownEntry(int32 EntryPoint);
};

#endif
