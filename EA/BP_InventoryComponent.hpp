#ifndef UE4SS_SDK_BP_InventoryComponent_HPP
#define UE4SS_SDK_BP_InventoryComponent_HPP

class UBP_InventoryComponent_C : public UEHInventoryComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 CollectedRecentlyDirtOld;

    void PickDiggedItem(FEHItemInstance Item);
    void OnRep_CurrentJobMode();
    void OnLogicAddSelectedResource(const bool Successful);
    void ExecuteUbergraph_BP_InventoryComponent(int32 EntryPoint);
};

#endif
