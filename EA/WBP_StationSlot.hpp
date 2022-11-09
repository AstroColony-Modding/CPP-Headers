#ifndef UE4SS_SDK_WBP_StationSlot_HPP
#define UE4SS_SDK_WBP_StationSlot_HPP

class UWBP_StationSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* Overlay_0;
    class UWBP_SelectionSlot_C* WBP_SelectionSlot;
    FWBP_StationSlot_CButtonClick ButtonClick;
    void ButtonClick(int32 ID, EEHStartingStationSize Size);
    int32 ID;
    FEHStartingStation Station;
    class UEHAnimalMeshAsset* Animal;
    bool IsCurrentlySelectedSlot;

    void SelectSlot(bool IsSelected);
    class UWidget* GetToolTipWidget();
    void Construct();
    void BndEvt__WBP_SelectionSlot_K2Node_ComponentBoundEvent_0_SlotClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_StationSlot(int32 EntryPoint);
    void ButtonClick__DelegateSignature(int32 ID, EEHStartingStationSize Size);
};

#endif
