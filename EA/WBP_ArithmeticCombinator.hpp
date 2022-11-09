#ifndef UE4SS_SDK_WBP_ArithmeticCombinator_HPP
#define UE4SS_SDK_WBP_ArithmeticCombinator_HPP

class UWBP_ArithmeticCombinator_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_LongNamedSlot_C* LongSlot;
    class UWBP_Dropdown_C* MathOperationDropdown;
    class UWBP_Spinner_C* OperationValueSpinner;
    class UHorizontalBox* ResourcesHorizontalBox;
    class UWBP_Logic_C* WBP_Logic;

    void UpdateSignalInIco();
    class UWidget* GetSignalTooltipWidget();
    void CreateSignal();
    void OnContextChanged();
    void OnResourcesSignalOutChanged();
    void BndEvt__WBP_ArithmeticCombinator_Dropdown_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(FString ItemName, int32 ItemIndex);
    void BndEvt__WBP_ArithmeticCombinator_WBP_Spinner_K2Node_ComponentBoundEvent_1_ValueCommited__DelegateSignature(float Value);
    void OnSignalNetworkChanged();
    void ExecuteUbergraph_WBP_ArithmeticCombinator(int32 EntryPoint);
};

#endif
