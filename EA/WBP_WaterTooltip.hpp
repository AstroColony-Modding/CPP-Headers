#ifndef UE4SS_SDK_WBP_WaterTooltip_HPP
#define UE4SS_SDK_WBP_WaterTooltip_HPP

class UWBP_WaterTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UTGConfigurableTextBlock* DevEmpty;
    class UTGConfigurableTextBlock* DeviceName;
    class UTGConfigurableTextBlock* DevProd;
    class UTGConfigurableTextBlock* ElectricNetworkName;
    class UTGConfigurableTextBlock* ElectricNetworkName_2;
    class UHorizontalBox* HorizontalBox;
    class UTGConfigurableTextBlock* Name_7;
    class UTGConfigurableTextBlock* Name_8;
    class UTGConfigurableTextBlock* ProdName;
    class UEHCraftingObject* CraftingObject;

    void UpdateWaterProdVis();
    FText Get_ConsumedWater();
    FText Get_ProducedWater();
    FText Get_StoredWater();
    void UpdateWaterNetwork();
    void Construct();
    void OnWaterNetworkChanged();
    void ExecuteUbergraph_WBP_WaterTooltip(int32 EntryPoint);
};

#endif
