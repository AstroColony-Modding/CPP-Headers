#ifndef UE4SS_SDK_1_PlanetoidStation_HPP
#define UE4SS_SDK_1_PlanetoidStation_HPP

class U1_PlanetoidStation_C : public UReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHDevicesComponent* DevicesComp;
    class UEHItem* Quartz;
    class UEHItem* Stone;
    TArray<FIntVector> VoxelsDigPositions;

    void CheckColumnDestroyed(class AVoxelWorld* World, bool& Destroyed);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void DiggedItemPicked(FEHItemInstance Item);
    void VoxelDigged(FIntVector position);
    void ExecuteUbergraph_1_PlanetoidStation(int32 EntryPoint);
};

#endif
