#ifndef UE4SS_SDK_WBP_UnlockItemTooltip_HPP
#define UE4SS_SDK_WBP_UnlockItemTooltip_HPP

class UWBP_UnlockItemTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class URichTextBlock* DescriptionRich;
    class UTGConfigurableTextBlock* ItemName;
    class UImage* Padlock;
    class UTGConfigurableTextBlock* Recipe;
    class UTGConfigurableTextBlock* Resource_1;
    class UImage* RightClickImage;
    class UWBP_UnlockItem_C* UnlockedItem;
    class UWBP_UnlockItem_C* UnlockedRecipeItem;
    class UWidgetSwitcher* UnlockTypeSwitcher;
    class UWBP_ItemConstructionCost_C* WBP_ItemConstructionCost;
    FEHGameplayAspectUnlock ItemGameplayAspect;
    FEHGameplayAspectUnlock AdditionalRecipeGameplayAspect;

    void Construct();
    void ExecuteUbergraph_WBP_UnlockItemTooltip(int32 EntryPoint);
};

#endif
