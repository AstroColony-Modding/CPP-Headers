#ifndef UE4SS_SDK_WBP_ItemSlotHex_HPP
#define UE4SS_SDK_WBP_ItemSlotHex_HPP

class UWBP_ItemSlotHex_C : public UContainerSlotWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* Overlay;
    class USizeBox* SizeBox_1;
    class UObject* TooltipTest;
    bool IsPreviewSlot;

    class UWidget* GetTooltip();
    void SetTextFromKey();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetSelected(bool Selected);
    void Construct();
    void OnClickDetails();
    void ExecuteUbergraph_WBP_ItemSlotHex(int32 EntryPoint);
};

#endif
