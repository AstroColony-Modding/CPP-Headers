#ifndef UE4SS_SDK_WBP_TextRow_HPP
#define UE4SS_SDK_WBP_TextRow_HPP

class UWBP_TextRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* Name;
    class UTGConfigurableTextBlock* Text;
    FText FieldName;

    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_TextRow(int32 EntryPoint);
};

#endif
