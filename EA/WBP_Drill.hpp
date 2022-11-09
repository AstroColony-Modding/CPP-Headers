#ifndef UE4SS_SDK_WBP_Drill_HPP
#define UE4SS_SDK_WBP_Drill_HPP

class UWBP_Drill_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background_1;
    class UImage* BG;
    class UImage* ConstructionIco;
    class UTGConfigurableTextBlock* Name;
    class UWBP_RecipeItemSlot_C* ProcessedItem;
    class UHorizontalBox* ProcessedItems;
    class UOverlay* RemoteConstructionOverlay;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_RecipesModule_C* WBP_RecipesModule;
    class UEHDrillObject* Drill;
    TArray<FEHItemInstance> ProcessedItemsCached;

    void UpdateMinedResources();
    void OnContextChanged();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_Drill(int32 EntryPoint);
};

#endif
