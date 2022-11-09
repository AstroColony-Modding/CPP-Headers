#ifndef UE4SS_SDK_WBP_MiningResourceSlot_HPP
#define UE4SS_SDK_WBP_MiningResourceSlot_HPP

class UWBP_MiningResourceSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_SelectionSlot_C* WBP_SelectionSlot;
    FWBP_MiningResourceSlot_CButtonClick ButtonClick;
    void ButtonClick(int32 ID);
    int32 ID;
    class UEHWorldItem* MiningResource;
    bool IsCurrentlySelectedSlot;

    class UWidget* GetToolTipWidget();
    void Init(class UEHWorldItem* MiningResource);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_SelectionSlot_K2Node_ComponentBoundEvent_0_SlotClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_MiningResourceSlot(int32 EntryPoint);
    void ButtonClick__DelegateSignature(int32 ID);
};

#endif
