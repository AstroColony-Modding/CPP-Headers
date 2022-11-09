#ifndef UE4SS_SDK_WBP_ItemsContainerModule_HPP
#define UE4SS_SDK_WBP_ItemsContainerModule_HPP

class UWBP_ItemsContainerModule_C : public UEHContainerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_0;
    class USizeBox* ContainerSizeBox;
    class UWBP_IcoButton_C* DepositButton;
    class UImage* Image;
    class UBorder* MenuBorder;
    class UWBP_IcoButton_C* MergeButton;
    class UWBP_IcoButton_C* OrderButton;
    class UOverlay* RequestedOverlay;
    class UHorizontalBox* RequestedResources;
    class USizeBox* ScrollSizeBox;
    class UWBP_IcoButton_C* TransferButton;
    class UWBP_Notify_C* WBP_Notify;
    bool HideDepositeButton;
    bool HideTransferButton;
    bool HideResourcesMenu;
    bool PickItemOnClicked;
    bool MouseEntered;

    void UpdateRowsCount(uint8 Rows);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateMenuVisibility(bool MouseEntered);
    void InitRequestedReources();
    void InitContainerSize();
    void BndEvt__WBP_IcoButton_C_0_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void PopMenuClosedOld(TSubclassOf<class UInteractBaseWidget> IndicatedObject);
    void OnSlotClicked(class UEHItemsContainer* Container, class UEHItem* Item, uint8 Index);
    void BndEvt__WBP_ItemsContainerModule_MergeButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_ItemsContainerModule_OrderButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_ItemsContainerModule_TransferButton_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnTransferedItemsForRecipe(FEHRecipe Recipe, const int32 Count);
    void OnContextChanged();
    void PopMenuClosed(TSubclassOf<class UInteractBaseWidget> IndicatedObject);
    void PopMenuOpened(EEHPopMenuType Type);
    void ExecuteUbergraph_WBP_ItemsContainerModule(int32 EntryPoint);
};

#endif
