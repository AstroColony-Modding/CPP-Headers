#ifndef UE4SS_SDK_WBP_AnimalSlot_HPP
#define UE4SS_SDK_WBP_AnimalSlot_HPP

class UWBP_AnimalSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* AnimalSizeIco;
    class UOverlay* Overlay_0;
    class UWBP_SelectionSlot_C* WBP_SelectionSlot;
    FWBP_AnimalSlot_CButtonClick ButtonClick;
    void ButtonClick(int32 ID);
    int32 ID;
    class UEHAnimalMeshAsset* Animal;
    bool IsCurrentlySelectedSlot;

    class UWidget* GetToolTipWidget();
    void Init(class UEHAnimalMeshAsset* Animal);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_SelectionSlot_K2Node_ComponentBoundEvent_0_SlotClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_AnimalSlot(int32 EntryPoint);
    void ButtonClick__DelegateSignature(int32 ID);
};

#endif
