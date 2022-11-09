#ifndef UE4SS_SDK_WBP_ConstructionItemSlot_HPP
#define UE4SS_SDK_WBP_ConstructionItemSlot_HPP

class UWBP_ConstructionItemSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UBorder* Highlight;
    class UImage* ItemImage;
    class UTGConfigurableTextBlock* Quantity;
    FEHItemInstance Item;
    FWBP_ConstructionItemSlot_CClick Click;
    void Click(FEHItemInstance Item);

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateVisuals();
    void Construct();
    void OnWarehouseItemsChanged();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_WBP_ConstructionItemSlot(int32 EntryPoint);
    void Click__DelegateSignature(FEHItemInstance Item);
};

#endif
