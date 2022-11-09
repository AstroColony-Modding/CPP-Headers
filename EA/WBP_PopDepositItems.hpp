#ifndef UE4SS_SDK_WBP_PopDepositItems_HPP
#define UE4SS_SDK_WBP_PopDepositItems_HPP

class UWBP_PopDepositItems_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* AddRequestButton;
    class UImage* BG;
    class UImage* CircleBG;
    class UWBP_IcoButton_C* ClearButton;
    class UImage* Ico;
    class UWBP_ItemsContainerModule_C* PlayerContainerWidget;
    class UHorizontalBox* RequestedResources;
    class UWBP_ClickableSlot_C* WBP_ClickableSlot;
    class UWBP_NamedLock_C* WBP_NamedLock;
    class UEHItemsContainer* ItemsContainer;

    void HandleSelectedSlotClidked(int32 ID);
    void InitRequestedReources();
    void OnContextChanged();
    void BndEvt__PlayerContainerWidget_K2Node_ComponentBoundEvent_0_OnContainerSlotClicked__DelegateSignature(class UEHItemsContainer* Container, class UEHItem* Item, uint8 Index);
    void BndEvt__WBP_PopDepositItems_LinkButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_PopDepositItems_ClearButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void OnResourceSelectionClosed();
    void ExecuteUbergraph_WBP_PopDepositItems(int32 EntryPoint);
};

#endif
