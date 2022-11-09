#ifndef UE4SS_SDK_WBP_ItemDetailsOperation_HPP
#define UE4SS_SDK_WBP_ItemDetailsOperation_HPP

class UWBP_ItemDetailsOperation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UWBP_NameDividerSmall_C* CraftedFromCat;
    class UHorizontalBox* CraftedFromitems;
    class UOverlay* CraftedFromOverlay;
    class UWBP_NameDividerSmall_C* CraftedToCat;
    class UHorizontalBox* CraftedToItems;
    class UOverlay* CraftedToOverlay;
    class UBorder* ElectricityUtility;
    class UImage* ItemImage;
    class UTGConfigurableTextBlock* ItemName;
    class UImage* Line;
    class UImage* Line2;
    class UImage* Line3;
    class URichTextBlock* LongDescriptionRich;
    class UWBP_NameDividerSmall_C* ProducedByCat;
    class UHorizontalBox* ProducedByitems;
    class UOverlay* ProducedByOverlay;
    class UGridPanel* RelatedGridPanel;
    class UHorizontalBox* RelatedItems;
    class UWBP_NameDividerSmall_C* RelatedItemsCat;
    class UHorizontalBox* RequirementsHorizontalBox;
    class UImage* ResourceLine1;
    class UImage* ResourceLine2;
    class UImage* ResourceLine3;
    class UImage* ResourceLine4;
    class UImage* ResourceLine5;
    class UGridPanel* ResourcesGridPanel;
    class UHorizontalBox* ResourcesInItems;
    class UWBP_NameDividerSmall_C* ResourcesInItemsCat;
    class UOverlay* ResourcesInOverlay;
    class UHorizontalBox* ResourcesOutItems;
    class UWBP_NameDividerSmall_C* ResourcesOutItemsCat;
    class USizeBox* SizeBox_0;
    class UWBP_SpecialistSlotRoundSmall_C* Specialist;
    class UVerticalBox* SpecialistVerticalBox;
    class UVerticalBox* TechnologyVerticalBox;
    class UHorizontalBox* UsedByItems;
    class UWBP_NameDividerSmall_C* UsedByItemsCat;
    class UOverlay* UsedByItemsOverlay;
    class UWBP_NameDividerSmall_C* UsedToConstructCat;
    class UHorizontalBox* UsedToConstructItems;
    class UOverlay* UsedToConstructItemsOverlay;
    class UVerticalBox* UtilitiesVerticalBox;
    class UBorder* WaterUtility;
    class UWBP_CloseBox_C* WBP_CloseBox;
    class UWBP_ItemConstructionCost_C* WBP_ItemConstructionCost;
    class UWBP_HorizontalTechSlotSmall_C* WBP_TechSlotSmall;
    FEHItemInstance ItemInstance;
    TArray<class UPanelWidget*> ItemContainers;

    void UpdateUsedToConstruct();
    void UpdateUsedBy();
    void UpdateProducedBy();
    void UpdateCraftedTo();
    void UpdateCraftedFrom();
    void UpdateOutput(class UEHProductionDeviceItem*& ProductionItem);
    void SlotClicked(int32 ID);
    void UpdateInput(class UEHProductionDeviceItem*& ProductionItem);
    void UpdateRelated();
    void UpdateUtilities(class UEHInteractableObject* Interactable);
    void CreateItems(class UPanelWidget* Panel, TArray<class UEHItem*>& Item, int32 ContainerID);
    void Clear();
    void Construct();
    void Init(const FEHItemInstance& ItemInstance);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void BndEvt__WBP_CloseBox_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    void BndEvt__WBP_ItemDetailsOperation_WBP_ItemConstructionCost_K2Node_ComponentBoundEvent_1_OnSlotClicked__DelegateSignature(FEHItemInstance Item);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_ItemDetailsOperation_WBP_TechSlotSmall_K2Node_ComponentBoundEvent_2_Click__DelegateSignature();
    void ExecuteUbergraph_WBP_ItemDetailsOperation(int32 EntryPoint);
};

#endif
