#ifndef UE4SS_SDK_WBP_DeciderCombinator_HPP
#define UE4SS_SDK_WBP_DeciderCombinator_HPP

class UWBP_DeciderCombinator_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* LinkButton;
    class UWBP_LongNamedSlot_C* LongSlot;
    class UWBP_Dropdown_C* MathOperationDropdown;
    class UTGConfigurableTextBlock* NoResourcesTextBlock;
    class UWBP_Spinner_C* OperationValueSpinner;
    class UWBP_Logic_C* WBP_Logic;

    FText GetResponse();
    void UpdateSignalInIco();
    void UpdateDeviceIco();
    class UWidget* GetSignalTooltipWidget();
    void OnContextChanged();
    void BndEvt__WBP_ArithmeticCombinator_Dropdown_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(FString ItemName, int32 ItemIndex);
    void BndEvt__WBP_ArithmeticCombinator_WBP_Spinner_K2Node_ComponentBoundEvent_1_ValueCommited__DelegateSignature(float Value);
    void BndEvt__WBP_DeciderCombinator_LinkButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void OnSignalNetworkChanged();
    void BndEvt__WBP_DeciderCombinator_WBP_Logic_K2Node_ComponentBoundEvent_3_ClearButtonClicked__DelegateSignature();
    void BndEvt__WBP_DeciderCombinator_LongSlot_K2Node_ComponentBoundEvent_4_SlotClick__DelegateSignature();
    void ExecuteUbergraph_WBP_DeciderCombinator(int32 EntryPoint);
};

#endif
