#ifndef UE4SS_SDK_WBP_WindowTooltip_HPP
#define UE4SS_SDK_WBP_WindowTooltip_HPP

class UWBP_WindowTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UTGConfigurableTextBlock* ElectricNetworkName;
    class UHorizontalBox* HorizontalBox;
    FEHRecipe Recipe;

    void Construct();
    void ExecuteUbergraph_WBP_WindowTooltip(int32 EntryPoint);
};

#endif
