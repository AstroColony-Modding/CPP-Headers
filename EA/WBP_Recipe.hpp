#ifndef UE4SS_SDK_WBP_Recipe_HPP
#define UE4SS_SDK_WBP_Recipe_HPP

class UWBP_Recipe_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* AIRequiredBorder;
    class UBorder* AIRequiredBorder_1;
    class UImage* ArrowImage;
    class UTGConfigurableTextBlock* AutoDeactivatesCounts;
    class USizeBox* AutoDeactivatesCountsPreview;
    class UWBP_Spinner_C* AutoDeactivatesCountsSpinner;
    class UButton* Button_0;
    class UHorizontalBox* GeneratedPointsHorizontalBox;
    class UBorder* HighlightBorder;
    class UImage* Image;
    class UImage* Image_338;
    class UUniformGridPanel* InputItems;
    class UHorizontalBox* InputPointsHorizontalBox;
    class UTGUniformGridPanel* OutputItems;
    class UProgressBar* ProgressBar;
    class UTGConfigurableTextBlock* RecipeNameText;
    class UOverlay* RecipeOverlay;
    class UHorizontalBox* RequirementsHorizontalBox;
    class UTGCheckBox* SelectionCheckbox;
    class UTGConfigurableTextBlock* TimeSeconds;
    class UBorder* TooltipBorder;
    class UWBP_RecipeItemSlot_C* WBP_ConstructionItemSlot_1;
    class UWBP_RecipeItemSlot_C* WBP_ConstructionItemSlot_2;
    class UWBP_GlobalPointSlot_C* WBP_GlobalPointSlot_C;
    class UWBP_GlobalPointSlot_C* WBP_GlobalPointSlot_C_0;
    class UEHProductionObject* ProductionObject;
    FEHRecipe Recipe;
    FName RecipeName;
    bool SelectionEnabled;
    FWBP_Recipe_CRecipeChecked RecipeChecked;
    void RecipeChecked(FName Name, bool IsChecked);
    bool HideProgressBar;
    bool Locked;
    class UWBP_RecipeMenu_C* ActiveRecipeMenu;

    void MenuNumberClicked(int32 Count);
    void UpdateMenuVisibility(bool MouseEntered);
    void UpdateAutoDeactivateCounts();
    void UpdateCraftingState();
    void UpdateBackgroundColor();
    void SetLocked(bool IsLocked);
    void UpdateRequirements();
    void CreateGeneratedPoints(class UHorizontalBox* HorizontalBox, TArray<FEHGlobalPointInstance>& GlobalPoints);
    void CreateItems(class UUniformGridPanel* UniformGrid, TArray<FEHItemInstance>& Items);
    float GetRecipeProgress();
    FText GetRecipeName();
    void Construct();
    void BndEvt__SelectionCheckbox_K2Node_ComponentBoundEvent_0_OnToggleStateChanged__DelegateSignature(bool bIsToggled);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__AutoDeactivatesCountsSpinner_K2Node_ComponentBoundEvent_2_ValueCommited__DelegateSignature(float Value);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnCraftingStateChanged(FName RecipeName);
    void ExecuteUbergraph_WBP_Recipe(int32 EntryPoint);
    void RecipeChecked__DelegateSignature(FName Name, bool IsChecked);
};

#endif
