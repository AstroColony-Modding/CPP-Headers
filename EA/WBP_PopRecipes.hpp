#ifndef UE4SS_SDK_WBP_PopRecipes_HPP
#define UE4SS_SDK_WBP_PopRecipes_HPP

class UWBP_PopRecipes_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* LockedRecipes;
    class UBorder* LockedRecipesBorder;
    class UWBP_NameDivider_C* LockedRecipesDivider;
    class UVerticalBox* UnlockedRecipes;
    class UEHProductionObject* ProductionObject;

    void RecipeChecked(FName Name, bool IsChecked);
    void CreateRecipes();
    void OnContextChanged();
    void OnRecipeUnlocked();
    void OnSelectedRecipesChanged();
    void ExecuteUbergraph_WBP_PopRecipes(int32 EntryPoint);
};

#endif
