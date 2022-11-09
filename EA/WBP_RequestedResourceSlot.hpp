#ifndef UE4SS_SDK_WBP_RequestedResourceSlot_HPP
#define UE4SS_SDK_WBP_RequestedResourceSlot_HPP

class UWBP_RequestedResourceSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Highlight;
    class UImage* Image_6;
    class UImage* ItemImage;
    class UBorder* QuantityBorder;
    class UBorder* QuantityBorder_1;
    class UTGConfigurableTextBlock* ResourcesCount;
    class UTGWidget* TGWidget_2;
    class UTGConfigurableTextBlock* TransportBotsCount;
    FEHRequestedResource RequestedResource;
    FEHItemInstance Item;
    FWBP_RequestedResourceSlot_CClick Click;
    void Click(int32 ID);
    int32 ID;

    void Construct();
    void BndEvt__TGWidget_2_K2Node_ComponentBoundEvent_0_OnWidgetClickedEvent__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_WBP_RequestedResourceSlot(int32 EntryPoint);
    void Click__DelegateSignature(int32 ID);
};

#endif
