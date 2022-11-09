#ifndef UE4SS_SDK_WBP_Farm_HPP
#define UE4SS_SDK_WBP_Farm_HPP

class UWBP_Farm_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ArrowImage;
    class UUniformGridPanel* PlantStlots;
    class UVerticalBox* VerticalBox;
    class UWBP_PlantSlot_C* WBP_CurrentPlantSlot;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_SpecialisticProductionModule_C* WBP_SpecialisticProduction;
    class UWBP_WaterModule_C* WBP_WaterProduction;
    int32 RowSlots;
    class UEHFarmObject* FarmObject;

    void UpdateConsumedWater();
    void PickPlant(int32 ID);
    void InitializePlants();
    void PlantChanged();
    void OnContextChanged();
    void OnPlantUnlocked();
    void BndEvt__WBP_CurrentPlantSlot_K2Node_ComponentBoundEvent_0_ButtonClick__DelegateSignature(int32 ID);
    void OnPlantChanged();
    void ExecuteUbergraph_WBP_Farm(int32 EntryPoint);
};

#endif
