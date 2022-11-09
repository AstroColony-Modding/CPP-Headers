#ifndef UE4SS_SDK_WBP_Storage_HPP
#define UE4SS_SDK_WBP_Storage_HPP

class UWBP_Storage_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* SwapGatesButton;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;

    void OnContextChanged();
    void BndEvt__DepositButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Storage(int32 EntryPoint);
};

#endif
