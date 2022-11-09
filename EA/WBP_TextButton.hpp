#ifndef UE4SS_SDK_WBP_TextButton_HPP
#define UE4SS_SDK_WBP_TextButton_HPP

class UWBP_TextButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGTile* Button;
    class UTGConfigurableTextBlock* ButtonText;
    class USizeBox* SizeBox;
    FWBP_TextButton_CButtonClicked ButtonClicked;
    void ButtonClicked();
    FVector2D ButtonSize;
    FMargin TextPadding;
    FText Text;
    FText ButtonTooltip;

    void UpdateText(FText Text);
    void SetActive(bool IsActive);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__DepositItemsButton_K2Node_ComponentBoundEvent_1_OnWidgetClickedEvent__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_WBP_TextButton(int32 EntryPoint);
    void ButtonClicked__DelegateSignature();
};

#endif
