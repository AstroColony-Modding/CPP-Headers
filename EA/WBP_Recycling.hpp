#ifndef UE4SS_SDK_WBP_Recycling_HPP
#define UE4SS_SDK_WBP_Recycling_HPP

class UWBP_Recycling_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_ItemsContainerModule_C* WBP_OutputContainer;
    class UWBP_RecipesModule_C* WBP_RecipesModule;
    class UWBP_RecyclingContainerModule_C* WBP_RecyclingContainer;
    class UEHRecyclingMachine* RecyclingMachine;

    void OnContextChanged();
    void BndEvt__WBP_ItemsContainer_K2Node_ComponentBoundEvent_0_OnContainerSlotClicked__DelegateSignature(class UEHItemsContainer* Container, class UEHItem* Item, uint8 Index);
    void BndEvt__WBP_ItemsContainer_K2Node_ComponentBoundEvent_1_OnContainerSlotClicked__DelegateSignature(class UEHItemsContainer* Container, class UEHItem* Item, uint8 Index);
    void ExecuteUbergraph_WBP_Recycling(int32 EntryPoint);
};

#endif
