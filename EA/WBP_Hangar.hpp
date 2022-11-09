#ifndef UE4SS_SDK_WBP_Hangar_HPP
#define UE4SS_SDK_WBP_Hangar_HPP

class UWBP_Hangar_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* DesignVehicles;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_RecipesModule_C* WBP_RecipesModule;

    void OnContextChanged();
    void BndEvt__WBP_Hangar_DepositButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Hangar(int32 EntryPoint);
};

#endif
