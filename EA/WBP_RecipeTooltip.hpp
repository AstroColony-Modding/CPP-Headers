#ifndef UE4SS_SDK_WBP_RecipeTooltip_HPP
#define UE4SS_SDK_WBP_RecipeTooltip_HPP

class UWBP_RecipeTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UTGConfigurableTextBlock* ElectricNetworkName;
    class UHorizontalBox* HorizontalBox;
    FEHRecipe Recipe;

    void Construct();
    void ExecuteUbergraph_WBP_RecipeTooltip(int32 EntryPoint);
};

#endif
