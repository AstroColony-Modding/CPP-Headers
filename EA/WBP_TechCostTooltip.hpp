#ifndef UE4SS_SDK_WBP_TechCostTooltip_HPP
#define UE4SS_SDK_WBP_TechCostTooltip_HPP

class UWBP_TechCostTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UHorizontalBox* CostHorizontalBox;
    class UTGConfigurableTextBlock* Name;
    class UEHTechnologyAsset* Technology;

    void Construct();
    void ExecuteUbergraph_WBP_TechCostTooltip(int32 EntryPoint);
};

#endif
