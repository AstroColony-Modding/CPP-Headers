#ifndef UE4SS_SDK_SB_DestructionRef_HPP
#define UE4SS_SDK_SB_DestructionRef_HPP

class USB_DestructionRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* RecyclingMachine;

    void OnRecyclingProduced(FEHItemInstance ProducedItem);
    void BindRecyclingProduction();
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemsChange();
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ExecuteUbergraph_SB_DestructionRef(int32 EntryPoint);
};

#endif
