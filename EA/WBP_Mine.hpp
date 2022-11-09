#ifndef UE4SS_SDK_WBP_Mine_HPP
#define UE4SS_SDK_WBP_Mine_HPP

class UWBP_Mine_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ArrowImage;
    class UUniformGridPanel* MiningResrouceSlots;
    class UVerticalBox* VerticalBox;
    class UWBP_MiningResourceSlot_C* WBP_CurrentResourceToMine;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_SpecialisticProductionModule_C* WBP_SpecialisticProduction;
    int32 RowSlots;
    class UEHFarmObject* FarmObject;
    class UEHMineObject* MineObject;

    void PickMiningResource(int32 ID);
    void InitializeResources();
    void Construct();
    void ResourceChanged();
    void BndEvt__WBP_Mine_WBP_CurrentResourceToMine_K2Node_ComponentBoundEvent_0_ButtonClick__DelegateSignature(int32 ID);
    void ExecuteUbergraph_WBP_Mine(int32 EntryPoint);
};

#endif
