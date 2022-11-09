#ifndef UE4SS_SDK_WBP_SummaryAction_HPP
#define UE4SS_SDK_WBP_SummaryAction_HPP

class UWBP_SummaryAction_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Ico;
    class UTGConfigurableTextBlock* Name;
    class UTGConfigurableTextBlock* State;
    class UTexture2D* FieldIco;
    FText FieldName;

    void SetTextState(FText InText);
    void SetBinaryState(bool Yes);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_SummaryAction(int32 EntryPoint);
};

#endif
