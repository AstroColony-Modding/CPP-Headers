#ifndef UE4SS_SDK_SB_HumanMigrationRef_HPP
#define UE4SS_SDK_SB_HumanMigrationRef_HPP

class USB_HumanMigrationRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* Quartz;
    class UEHItem* HydroTonic;
    class UEHItem* DockingStation;

    void CheckColumnDestroyed(class AVoxelWorld* World, bool& Destroyed);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void OnAstronautsArrived(uint8 AstronautsCount);
    void ExecuteUbergraph_SB_HumanMigrationRef(int32 EntryPoint);
};

#endif
