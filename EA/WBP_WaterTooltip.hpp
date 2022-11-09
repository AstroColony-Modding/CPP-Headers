#ifndef UE4SS_SDK_WBP_WaterTooltip_HPP
#define UE4SS_SDK_WBP_WaterTooltip_HPP

class UWBP_WaterTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UTGConfigurableTextBlock* ElectricNetworkName;
    class UHorizontalBox* HorizontalBox;
    class UTGConfigurableTextBlock* Name_6;
    class UTGConfigurableTextBlock* Name_7;
    class UTGConfigurableTextBlock* Name_8;
    class UEHCraftingObject* CraftingObject;

    FText Get_ConsumedWater();
    FText Get_ProducedWater();
    FText Get_StoredWater();
    void UpdateWaterNetwork();
    void Construct();
    void OnWaterNetworkChanged();
    void ExecuteUbergraph_WBP_WaterTooltip(int32 EntryPoint);
};

#endif
