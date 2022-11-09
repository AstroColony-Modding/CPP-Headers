#ifndef UE4SS_SDK_WBP_RecipeItemSlot_HPP
#define UE4SS_SDK_WBP_RecipeItemSlot_HPP

class UWBP_RecipeItemSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ItemImage;
    class UTGConfigurableTextBlock* Quantity;
    FEHItemInstance Item;
    bool IsSmall;
    bool HideNegativeQuantity;

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Init(FEHItemInstance Item);
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_WBP_RecipeItemSlot(int32 EntryPoint);
};

#endif
