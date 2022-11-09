#ifndef UE4SS_SDK_WBP_Barn_HPP
#define UE4SS_SDK_WBP_Barn_HPP

class UWBP_Barn_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUniformGridPanel* AnimalSlots;
    class UImage* ArrowImage;
    class UVerticalBox* VerticalBox_1;
    class UWBP_AnimalSlot_C* WBP_AnimalSlot_2;
    class UWBP_AnimalSlot_C* WBP_AnimalSlot_24;
    class UWBP_AnimalSlot_C* WBP_CurrentAnimalSlot;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_FoodModule_C* WBP_FoodModule;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_SpecialisticProductionModule_C* WBP_SpecialisticProduction;
    class UWBP_WaterModule_C* WBP_WaterProduction;
    int32 RowSlots;
    class UEHBarnObject* BarnObject;

    void UpdateConsumedWater();
    void PickAnimal(int32 ID);
    void InitializeAnimals();
    void OnContextChanged();
    void AnimalChanged();
    void OnAnimalUnlocked();
    void BndEvt__WBP_Barn_WBP_CurrentAnimalSlot_K2Node_ComponentBoundEvent_1_ButtonClick__DelegateSignature(int32 ID);
    void OnAnimalChanged();
    void ExecuteUbergraph_WBP_Barn(int32 EntryPoint);
};

#endif
