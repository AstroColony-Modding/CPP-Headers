#ifndef UE4SS_SDK_WBP_ItemConstructionCost_HPP
#define UE4SS_SDK_WBP_ItemConstructionCost_HPP

class UWBP_ItemConstructionCost_C : public UUserWidget
{
    class UHorizontalBox* HorizontalBoxItems;
    class UWBP_ConstructionItemSlot_C* WBP_ConstructionItemSlot;
    class UWBP_ConstructionItemSlot_C* WBP_ConstructionItemSlot_1;
    FWBP_ItemConstructionCost_COnSlotClicked OnSlotClicked;
    void OnSlotClicked(FEHItemInstance Item);

    void SlotClicked(FEHItemInstance Item);
    void UpdateCostSlots(TArray<FEHItemInstance>& Cost);
    void Init(class UEHItem* Item);
    void OnSlotClicked__DelegateSignature(FEHItemInstance Item);
};

#endif
