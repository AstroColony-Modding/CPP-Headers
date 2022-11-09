#ifndef UE4SS_SDK_WBP_ElectricityTooltip_HPP
#define UE4SS_SDK_WBP_ElectricityTooltip_HPP

class UWBP_ElectricityTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UTGConfigurableTextBlock* ElectricNetworkName;
    class UHorizontalBox* HorizontalBox;
    class UTGConfigurableTextBlock* Name_6;
    class UTGConfigurableTextBlock* Name_7;
    class UTGConfigurableTextBlock* Name_8;
    class UTGConfigurableTextBlock* Name_9;
    class UEHCraftingObject* CraftingObject;

    FText Get_Network_Load();
    FText Get_Network_ProCon();
    FLinearColor Get_ProductionConsumptionColor();
    FLinearColor Get_EfficiencyColor();
    FText Get_ConsumedElectricity();
    FText Get_ProducedElectricity();
    void UpdateElectricNetwork();
    void Construct();
    void OnElectricNetworkChanged();
    void ExecuteUbergraph_WBP_ElectricityTooltip(int32 EntryPoint);
};

#endif
