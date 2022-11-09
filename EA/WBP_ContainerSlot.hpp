#ifndef UE4SS_SDK_WBP_ContainerSlot_HPP
#define UE4SS_SDK_WBP_ContainerSlot_HPP

class UWBP_ContainerSlot_C : public UContainerSlotWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* Overlay_0;

    void OnClickSplit();
    void OnClickDetails();
    void ExecuteUbergraph_WBP_ContainerSlot(int32 EntryPoint);
};

#endif
