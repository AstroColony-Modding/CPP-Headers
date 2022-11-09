#ifndef UE4SS_SDK_WBP_SpecialisticProductionTooltip_HPP
#define UE4SS_SDK_WBP_SpecialisticProductionTooltip_HPP

class UWBP_SpecialisticProductionTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* AssignedNumber;
    class UBorder* Border;
    class UTGConfigurableTextBlock* ElectricNetworkName;
    class UHorizontalBox* HorizontalBox;
    class UTGConfigurableTextBlock* Name_4;
    class UTGConfigurableTextBlock* Name_7;
    class UEHProductionObject* ProductionObject;

    void UpdateAssignedAICount(uint8 AICount);
    FText Get_Type();
    FText GetProductionRatio();
    FText Get_WorkingNumber();
    FText Get_DedicatedNumbers();
    void Construct();
    void ExecuteUbergraph_WBP_SpecialisticProductionTooltip(int32 EntryPoint);
};

#endif
