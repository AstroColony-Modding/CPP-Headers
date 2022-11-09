#ifndef UE4SS_SDK_WBP_ItemSlot_HPP
#define UE4SS_SDK_WBP_ItemSlot_HPP

class UWBP_ItemSlot_C : public UContainerSlotWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* Overlay_0;

    void OnClickDetails();
    void OnSlotSelectionChanged(const bool IsSelected);
    void Construct();
    void ExecuteUbergraph_WBP_ItemSlot(int32 EntryPoint);
};

#endif
