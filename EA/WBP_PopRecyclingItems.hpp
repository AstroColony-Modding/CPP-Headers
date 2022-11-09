#ifndef UE4SS_SDK_WBP_PopRecyclingItems_HPP
#define UE4SS_SDK_WBP_PopRecyclingItems_HPP

class UWBP_PopRecyclingItems_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_ItemsContainerModule_C* PlayerContainerWidget;
    class UWBP_IcoButton_C* TransferRecyclablesButton;

    void OnContextChanged();
    void BndEvt__PlayerContainerWidget_K2Node_ComponentBoundEvent_0_OnContainerSlotClicked__DelegateSignature(class UEHItemsContainer* Container, class UEHItem* Item, uint8 Index);
    void BndEvt__WBP_PopRecyclingItems_TransferButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_PopRecyclingItems(int32 EntryPoint);
};

#endif
