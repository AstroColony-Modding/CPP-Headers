#ifndef UE4SS_SDK_SB_HydrationRef_HPP
#define UE4SS_SDK_SB_HydrationRef_HPP

class USB_HydrationRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* Quartz;
    class UEHItem* HydrogenGenerator;
    class UEHItem* HydroTonic;

    void OnHydrogenProduced(FEHItemInstance ProducedItem);
    void BindHydrotonicProduction();
    void CheckColumnDestroyed(class AVoxelWorld* World, bool& Destroyed);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void OnResourceItemPicked(FEHItemInstance PickedItem);
    void OnAstronautsArrived(uint8 AstronautsCount);
    void LocalMissionStarted();
    void ExecuteUbergraph_SB_HydrationRef(int32 EntryPoint);
};

#endif
