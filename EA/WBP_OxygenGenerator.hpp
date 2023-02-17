#ifndef UE4SS_SDK_WBP_OxygenGenerator_HPP
#define UE4SS_SDK_WBP_OxygenGenerator_HPP

class UWBP_OxygenGenerator_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* SwapGatesButton;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_RecipesModule_C* WBP_RecipesModule;
    class UWBP_IcoTextButton_C* WBP_RefilOxygenButton;
    class UWBP_WaterModule_C* WBP_WaterProduction;
    class UEHOxygenGenerator* OxygenGenerator;

    void UpdateOxygenAvailability();
    void OnContextChanged();
    void BndEvt__WBP_IcoTextButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void OnItemsChange();
    void BndEvt__DepositButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_OxygenGenerator(int32 EntryPoint);
};

#endif
