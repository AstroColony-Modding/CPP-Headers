#ifndef UE4SS_SDK_WBP_BarrierGenerator_HPP
#define UE4SS_SDK_WBP_BarrierGenerator_HPP

class UWBP_BarrierGenerator_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URichTextBlock* LongDescriptionRich;
    class UWBP_NameDivider_C* WBP_DividerItems_1;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_BarrierGenerator(int32 EntryPoint);
};

#endif
