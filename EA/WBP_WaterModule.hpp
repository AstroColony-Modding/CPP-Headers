#ifndef UE4SS_SDK_WBP_WaterModule_HPP
#define UE4SS_SDK_WBP_WaterModule_HPP

class UWBP_WaterModule_C : public UInteractMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NoWaterAnim;
    class UTGConfigurableTextBlock* ConsRatio;
    class UVerticalBox* ConsumedHorizontal;
    class UImage* ElectricBoltImage;
    class UOverlay* Overlay_1;
    class UTGConfigurableTextBlock* ProdRatio;
    class UTGConfigurableTextBlock* ProdRatio_1;
    class UImage* ProductionConsumptionBG;
    class UOverlay* ProductionConsumptionOverlay;
    class UVerticalBox* ProductionHorizontal;
    class UImage* StoredBG;
    class UOverlay* StoredOverlay;
    class UEHCraftingObject* CraftingObject;

    class UWidget* GetWaterTooltip();
    FText Get_ConsumedWater();
    FText Get_ProducedWater();
    FText Get_StoredWater();
    FLinearColor Get_ProductionConsumptionColor();
    FLinearColor Get_EfficiencyColor();
    void UpdateProduceStored();
    void OnCraftingWaterChanged();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_WaterModule(int32 EntryPoint);
};

#endif
