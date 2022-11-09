#ifndef UE4SS_SDK_WBP_MainGlobalWarehouseItems_HPP
#define UE4SS_SDK_WBP_MainGlobalWarehouseItems_HPP

class UWBP_MainGlobalWarehouseItems_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URetainerBox* RetainerBox_0;
    class UWBP_ConstructionItemsContainer_C* WBP_Resources;

    void InitResources();
    void Construct();
    void BndEvt__WBP_Resources_K2Node_ComponentBoundEvent_0_OnContainerSlotClicked__DelegateSignature(class UEHItemsContainer* Container, class UEHItem* Item, uint8 Index);
    void OnVisibleResourcesCountChanged();
    void OnGameStarted();
    void ExecuteUbergraph_WBP_MainGlobalWarehouseItems(int32 EntryPoint);
};

#endif
