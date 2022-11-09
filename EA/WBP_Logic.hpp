#ifndef UE4SS_SDK_WBP_Logic_HPP
#define UE4SS_SDK_WBP_Logic_HPP

class UWBP_Logic_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* ClearButton;
    class UWBP_IcoButton_C* LinkButton;
    class UWBP_LongNamedSlot_C* LongSlot;
    class UTGConfigurableTextBlock* NoResourcesTextBlock;
    class UHorizontalBox* SelectedReasources;
    class UOverlay* SelectResourcesOverlay;
    class UWBP_ConstructionItemsContainer_C* WBP_AllResources;
    class UEHLogicObject* LogicBlock;
    class UTexture2D* LogicActionIcon;
    FText NoResourcesText;
    bool HideLinkButton;
    FWBP_Logic_CClearButtonClicked ClearButtonClicked;
    void ClearButtonClicked();
    FWBP_Logic_CSlotButtonClicked SlotButtonClicked;
    void SlotButtonClicked();
    bool Support Hover;

    void UpdateSensorIco();
    void InitSelectedReources();
    void HandleSelectedSlotClidked(int32 ID);
    void HandleContainerSlotClicked(class UEHItemsContainer* Container, class UEHItem* Item, uint8 Index);
    void OnContextChanged();
    void OnSelectedResourcesChanged();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__DepositButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_Logic_LinkButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void Construct();
    void BndEvt__WBP_Logic_LongSlot_K2Node_ComponentBoundEvent_2_SlotClick__DelegateSignature();
    void ExecuteUbergraph_WBP_Logic(int32 EntryPoint);
    void SlotButtonClicked__DelegateSignature();
    void ClearButtonClicked__DelegateSignature();
};

#endif
