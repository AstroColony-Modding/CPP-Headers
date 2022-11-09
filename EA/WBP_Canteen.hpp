#ifndef UE4SS_SDK_WBP_Canteen_HPP
#define UE4SS_SDK_WBP_Canteen_HPP

class UWBP_Canteen_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AcceptableFoodHorizontal;
    class UBorder* HighlightBorder;
    class UBorder* TooltipBorder;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_RecipeItemSlot_C* WBP_RecipeItemSlot;
    class UEHCanteenObject* CanteenObject;

    void UpdateItemsState();
    void InitAcceptableResources();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_Canteen(int32 EntryPoint);
};

#endif
