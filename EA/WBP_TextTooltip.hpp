#ifndef UE4SS_SDK_WBP_TextTooltip_HPP
#define UE4SS_SDK_WBP_TextTooltip_HPP

class UWBP_TextTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UTGConfigurableTextBlock* DisplayText;
    FText Text;

    void Construct();
    void ExecuteUbergraph_WBP_TextTooltip(int32 EntryPoint);
};

#endif
