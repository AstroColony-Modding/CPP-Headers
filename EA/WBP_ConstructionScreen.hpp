#ifndef UE4SS_SDK_WBP_ConstructionScreen_HPP
#define UE4SS_SDK_WBP_ConstructionScreen_HPP

class UWBP_ConstructionScreen_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* ConstructionCategories;
    class UVerticalBox* ConstructionContainerVerticalBox;
    class UImage* Header_1;
    class UImage* Header_2;
    class UWBP_ConstructionItemsContainer_C* WBP_ConstructionItemsContainer_1;
    class UWBP_Input_C* WBP_Input;
    class UWBP_PanelWidgetNavigation_C* WBP_PanelWidgetNavigation;
    int32 CurrentCategoryID;
    TArray<FEHConstructCategory> CategoriesData;
    FString PhraseToFilter;

    void HandleContainerSlotClicked(class UEHItemsContainer* Container, class UEHItem* Item, uint8 Index);
    void HandleContainerSlotClickedOld(class UEHItem* Item, int32 Index);
    void InitContainer(const int32 ModeID, const FName& Subcategory);
    void InitContainerForCurrentMode();
    void SelectCategory(int32 ID);
    void InitConstructionCategories();
    void Construct();
    void OnItemUnlocked();
    void BndEvt__WBP_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(FText Text);
    void OnInventoryItemChange();
    void ExecuteUbergraph_WBP_ConstructionScreen(int32 EntryPoint);
};

#endif
