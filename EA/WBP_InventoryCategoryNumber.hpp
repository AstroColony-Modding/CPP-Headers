#ifndef UE4SS_SDK_WBP_InventoryCategoryNumber_HPP
#define UE4SS_SDK_WBP_InventoryCategoryNumber_HPP

class UWBP_InventoryCategoryNumber_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UTGConfigurableTextBlock* CategoryNumber;
    class UTGWidget* TGWidget_81;
    int32 ID;
    FWBP_InventoryCategoryNumber_CCategoryPressed CategoryPressed;
    void CategoryPressed(int32 ID);

    void SetTextFromKey();
    void SetSelected(bool IsSelected);
    void Construct();
    void BndEvt__TGWidget_81_K2Node_ComponentBoundEvent_0_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_InventoryCategoryNumber(int32 EntryPoint);
    void CategoryPressed__DelegateSignature(int32 ID);
};

#endif
