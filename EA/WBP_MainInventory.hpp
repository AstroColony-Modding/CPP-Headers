#ifndef UE4SS_SDK_WBP_MainInventory_HPP
#define UE4SS_SDK_WBP_MainInventory_HPP

class UWBP_MainInventory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* DragTipBorder;
    class UTGConfigurableTextBlock* DragTooltipText;
    class UHorizontalBox* HorizontalBoxCategories;
    class UHorizontalBox* HorizontalBoxItems;
    class URetainerBox* RetainerBox_2;
    class UWBP_InventoryCategoryNumber_C* WBP_InventoryNumber;
    class UWBP_InventoryCategoryNumber_C* WBP_InventoryNumber_C_0;
    class UWBP_ItemSlotHex_C* WBP_ItemSlotHex;
    FMargin SlotPadding;

    void UpdateDragTooltipText();
    void RefreshSlotsActionBindings();
    void RefreshCategoriesActionBindings();
    void CategoryPressed(int32 ID);
    void ItemSet(const int32 Index);
    void SetSelectedSlot(int32 ItembarSlotID);
    void SetSelectedCategory(int32 ItembarSlotID);
    void CreateCategories();
    void CreateSlots();
    void Construct();
    void OnInventoryCategoryChange();
    void OnItemUnlocked();
    void OnGameUserSettingsUpdate();
    void OnCharacterPossedChanged();
    void OnInventoryItemChange();
    void ExecuteUbergraph_WBP_MainInventory(int32 EntryPoint);
};

#endif
