#ifndef UE4SS_SDK_WBP_TransparentButton_HPP
#define UE4SS_SDK_WBP_TransparentButton_HPP

class UWBP_TransparentButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGTile* Button;
    class UTGConfigurableTextBlock* ButtonText;
    class USizeBox* SizeBox;
    FWBP_TransparentButton_CButtonClicked ButtonClicked;
    void ButtonClicked();
    FVector2D ButtonSize;
    FMargin TextPadding;
    FText Text;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__DepositItemsButton_K2Node_ComponentBoundEvent_1_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_TransparentButton(int32 EntryPoint);
    void ButtonClicked__DelegateSignature();
};

#endif
