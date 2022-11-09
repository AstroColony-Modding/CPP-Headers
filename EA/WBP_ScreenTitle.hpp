#ifndef UE4SS_SDK_WBP_ScreenTitle_HPP
#define UE4SS_SDK_WBP_ScreenTitle_HPP

class UWBP_ScreenTitle_C : public UTGUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimateIn;
    class UTGConfigurableTextBlock* CategoryText;
    class UTGConfigurableTextBlock* MenuText;
    class UVerticalBox* TitleContainerVerticalBox;
    FText MenuDefaultText;
    TEnumAsByte<EHorizontalAlignment> SlotsAligment;

    void UpdateText(FText& Text);
    FText GetAccessibilityText();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ScreenTitle(int32 EntryPoint);
};

#endif
