#ifndef UE4SS_SDK_WBP_ResourcesRequestOperation_HPP
#define UE4SS_SDK_WBP_ResourcesRequestOperation_HPP

class UWBP_ResourcesRequestOperation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UWBP_Spinner_C* MaxAssignedBotsSpinner;
    class UWBP_Spinner_C* MaxResourcesSpinner;
    class UWBP_ConstructionItemsContainer_C* WBP_AllResources;
    class UWBP_CloseBox_C* WBP_CloseBox;
    class UEHItemsContainer* ItemsContainer;
    FWBP_ResourcesRequestOperation_COnClosed OnClosed;
    void OnClosed();

    void HandleContainerSlotClicked(class UEHItemsContainer* Container, class UEHItem* Item, uint8 Index);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void BndEvt__WBP_CloseBox_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void BndEvt__WBP_ResourcesRequestOperation_WBP_Spinner_K2Node_ComponentBoundEvent_1_ValueCommited__DelegateSignature(float Value);
    void BndEvt__WBP_ResourcesRequestOperation_MaxResourcesSpinner_K2Node_ComponentBoundEvent_2_ValueCommited__DelegateSignature(float Value);
    void ExecuteUbergraph_WBP_ResourcesRequestOperation(int32 EntryPoint);
    void OnClosed__DelegateSignature();
};

#endif
