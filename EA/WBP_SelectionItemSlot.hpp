#ifndef UE4SS_SDK_WBP_SelectionItemSlot_HPP
#define UE4SS_SDK_WBP_SelectionItemSlot_HPP

class UWBP_SelectionItemSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BackgroundImage;
    class UBorder* Highlight;
    class UImage* ItemImage;
    class UTGConfigurableTextBlock* Quantity;
    class UBorder* QuantityBorder;
    class UTGWidget* TGWidget_2;
    FEHItemInstance Item;
    FWBP_SelectionItemSlot_CClick Click;
    void Click(int32 ID);
    int32 ID;
    bool HideBackground;
    bool HideNumber;

    void Construct();
    void BndEvt__TGWidget_2_K2Node_ComponentBoundEvent_0_OnWidgetClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_WBP_SelectionItemSlot(int32 EntryPoint);
    void Click__DelegateSignature(int32 ID);
};

#endif
