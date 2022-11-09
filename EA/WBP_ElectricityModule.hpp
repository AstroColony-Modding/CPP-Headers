#ifndef UE4SS_SDK_WBP_ElectricityModule_HPP
#define UE4SS_SDK_WBP_ElectricityModule_HPP

class UWBP_ElectricityModule_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NoElectricityAnim;
    class UImage* Background;
    class UTGConfigurableTextBlock* ConsRatio;
    class UVerticalBox* ConsumedHorizontal;
    class UImage* EfficiencyBG;
    class UOverlay* EfficiencyOverlay;
    class UImage* ElectricBoltImage;
    class UOverlay* Overlay_1;
    class UTGConfigurableTextBlock* ProdRatio;
    class UTGConfigurableTextBlock* ProdRatio_1;
    class UImage* ProductionConsumptionBG;
    class UVerticalBox* ProductionHorizontal;
    class UEHCraftingObject* CraftingObject;

    class UWidget* GetElectricityTooltip();
    FLinearColor Get_ProductionConsumptionColor();
    FLinearColor Get_EfficiencyColor();
    void UpdateProduceConsumed();
    FText Get_ConsumedElectricity();
    FText Get_ProducedElectricity();
    FText Get_Network_ProCon();
    FText Get_Ratio();
    void Init(class UObject* InteractableObject);
    void OnCraftingElectricityChanged();
    void ExecuteUbergraph_WBP_ElectricityModule(int32 EntryPoint);
};

#endif
