#ifndef UE4SS_SDK_WBP_IcoTextButton_HPP
#define UE4SS_SDK_WBP_IcoTextButton_HPP

class UWBP_IcoTextButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGTile* Button;
    class UScaleBox* ButtonScaleBox;
    class UTGConfigurableTextBlock* ButtonText;
    class UImage* Img;
    class USizeBox* SizeBox;
    FWBP_IcoTextButton_CButtonClicked ButtonClicked;
    void ButtonClicked();
    FVector2D ButtonSize;
    FVector2D ImageSize;
    FMargin TextPadding;
    FMargin ImgPadding;
    class UTexture2D* Texture;
    FText Text;

    void SetActive(bool IsActive);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__DepositItemsButton_K2Node_ComponentBoundEvent_1_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_IcoTextButton(int32 EntryPoint);
    void ButtonClicked__DelegateSignature();
};

#endif
