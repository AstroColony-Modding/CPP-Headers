#ifndef UE4SS_SDK_WBP_ItemSlotSmall_HPP
#define UE4SS_SDK_WBP_ItemSlotSmall_HPP

class UWBP_ItemSlotSmall_C : public UContainerSlotWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* Overlay_0;

    void OnSlotSelectionChanged(const bool IsSelected);
    void Construct();
    void OnClickDetails();
    void ExecuteUbergraph_WBP_ItemSlotSmall(int32 EntryPoint);
};

#endif
