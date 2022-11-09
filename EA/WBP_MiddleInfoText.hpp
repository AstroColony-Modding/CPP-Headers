#ifndef UE4SS_SDK_WBP_MiddleInfoText_HPP
#define UE4SS_SDK_WBP_MiddleInfoText_HPP

class UWBP_MiddleInfoText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UTGConfigurableTextBlock* PrimaryTextBlock;
    class UTGConfigurableTextBlock* SecondaryTextBlock;
    FText PrimaryText;
    FText SecondaryText;

    void UpdateSecondaryText(FText& InText);
    void UpdatePrimaryText(FText& InText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_MiddleInfoText(int32 EntryPoint);
};

#endif
