#ifndef UE4SS_SDK_WBP_ResourceSlot_HPP
#define UE4SS_SDK_WBP_ResourceSlot_HPP

class UWBP_ResourceSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_SelectionSlot_C* SelectionSlot;
    FWBP_ResourceSlot_CButtonClick ButtonClick;
    void ButtonClick(int32 ID);
    int32 ID;
    class UEHResourceItem* Resource;
    bool IsCurrentlySelectedSlot;

    class UWidget* GetToolTipWidget();
    void Init(class UEHResourceItem* Resource);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_SelectionSlot_K2Node_ComponentBoundEvent_0_SlotClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_ResourceSlot(int32 EntryPoint);
    void ButtonClick__DelegateSignature(int32 ID);
};

#endif
