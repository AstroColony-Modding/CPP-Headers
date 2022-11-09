#ifndef UE4SS_SDK_WBP_Production_HPP
#define UE4SS_SDK_WBP_Production_HPP

class UWBP_Production_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_RecipesModule_C* WBP_RecipesModule;
    class UWBP_SpecialisticProductionModule_C* WBP_SpecialisticProduction;
    class UWBP_WaterModule_C* WBP_WaterProduction;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_Production(int32 EntryPoint);
};

#endif
