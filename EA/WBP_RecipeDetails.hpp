#ifndef UE4SS_SDK_WBP_RecipeDetails_HPP
#define UE4SS_SDK_WBP_RecipeDetails_HPP

class UWBP_RecipeDetails_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Highlight;
    class UImage* ItemImage;
    class UTGWidget* TGWidget_2;
    FEHRecipe Recipe;
    FWBP_RecipeDetails_CClick Click;
    void Click(int32 ID);

    class UWidget* GetTooltip();
    void Construct();
    void ExecuteUbergraph_WBP_RecipeDetails(int32 EntryPoint);
    void Click__DelegateSignature(int32 ID);
};

#endif
