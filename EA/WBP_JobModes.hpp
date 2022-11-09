#ifndef UE4SS_SDK_WBP_JobModes_HPP
#define UE4SS_SDK_WBP_JobModes_HPP

class UWBP_JobModes_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PlayerActionSlot_C* ActionCancel;
    class UWBP_PlayerActionSlot_C* ActionConstruct;
    class UWBP_PlayerActionSlot_C* ActionNextVariant;
    class UBorder* AIRequiredBorder;
    class UBorder* AIRequiredBorder_1;
    class UUniformGridPanel* ConstructionActions;
    class UWBP_ItemConstructionCost_C* ConstructionCostHorizontalItems;
    class UTGConfigurableTextBlock* ConstructionCount;
    class USizeBox* ConstructionCountBox;
    class UImage* ConstructionHex;
    class UImage* ConstructionItem;
    class UTGConfigurableTextBlock* ConstructionItemName;
    class UImage* ConstructionTopBG;
    class UVerticalBox* ConstructionVerticalBox;
    class UImage* Image_1;
    class UImage* Image_215;
    class UWidgetSwitcher* JobModesSwitcher;
    class UOverlay* Overlay;
    class UTGConfigurableTextBlock* RecyclableCount;
    class UHorizontalBox* RecyclableHorizontal;
    class UWBP_PlayerActionSlot_C* RemoveSelectedAction;
    class UImage* SelectedItem;
    class UVerticalBox* SelectionActionsVerticalBox;
    class UTGConfigurableTextBlock* SelectionCount;
    class UTGConfigurableTextBlock* SelectionItemName;
    class UVerticalBox* SelectionVerticalBox;
    class UWBP_ItemVariants_C* WBP_ItemVariants;
    class UEHInventoryComponent* Inventory Component;

    ESlateVisibility GetCancelActionVisibility();
    ESlateVisibility GetRemoveSelectedActionVisibility();
    void RefreshPlayerActionBindings(class UPanelWidget* PanelWidget);
    void UpdateRecycleCost();
    void UpdateConstructionCost();
    void UpdateSelectionPanel();
    void UpdateJobMode();
    void Construct();
    void OnInventoryItemChange();
    void OnWarehouseItemsChange();
    void OnAssetsLoaded();
    void OnCellSelectionChanged();
    void OnConstructionPreviewChanged(int32 PreviewsCount);
    void OnGameUserSettingsUpdate();
    void ExecuteUbergraph_WBP_JobModes(int32 EntryPoint);
};

#endif
