#ifndef UE4SS_SDK_WBP_IcoButton_HPP
#define UE4SS_SDK_WBP_IcoButton_HPP

class UWBP_IcoButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGTile* Button;
    class UImage* Img;
    class USizeBox* SizeBox;
    class UTGConfigurableTextBlock* Text;
    class UBorder* TextBorder;
    FWBP_IcoButton_CButtonClicked ButtonClicked;
    void ButtonClicked();
    FVector2D ButtonSize;
    FVector2D ImageSize;
    class UTexture2D* Texture;
    FText IcoText;
    FText IcoTooltip;
    bool Toggled;

    void RefreshTooltip();
    class UWidget* GetTooltip();
    void UpdateTextFromAction(FName Action);
    void UpdateText(FText IcoText);
    void UpdateBrush(class UTexture2D*& Texture);
    void SetToggled(bool Toggled);
    void Toggle();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__DepositItemsButton_K2Node_ComponentBoundEvent_0_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_IcoButton(int32 EntryPoint);
    void ButtonClicked__DelegateSignature();
};

#endif
