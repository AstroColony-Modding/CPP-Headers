#ifndef UE4SS_SDK_SB_SmelterRef_HPP
#define UE4SS_SDK_SB_SmelterRef_HPP

class USB_SmelterRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnItemProduced(FEHItemInstance ProducedItem);
    void BindBarsProduction();
    void CheckColumnDestroyed(class AVoxelWorld* World, bool& Destroyed);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ExecuteUbergraph_SB_SmelterRef(int32 EntryPoint);
};

#endif
