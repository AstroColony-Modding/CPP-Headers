#ifndef UE4SS_SDK_WBP_PlantSlot_HPP
#define UE4SS_SDK_WBP_PlantSlot_HPP

class UWBP_PlantSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* AnimalSizeIco;
    class UOverlay* Overlay_0;
    class UWBP_SelectionSlot_C* WBP_SelectionSlot;
    FWBP_PlantSlot_CButtonClick ButtonClick;
    void ButtonClick(int32 ID);
    int32 ID;
    class UEHPlantMeshAsset* Plant;
    bool IsCurrentlySelectedSlot;

    class UWidget* GetToolTipWidget();
    void Init(class UEHPlantMeshAsset* Plant);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_SelectionSlot_K2Node_ComponentBoundEvent_0_SlotClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_PlantSlot(int32 EntryPoint);
    void ButtonClick__DelegateSignature(int32 ID);
};

#endif
