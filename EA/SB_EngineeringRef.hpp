#ifndef UE4SS_SDK_SB_EngineeringRef_HPP
#define UE4SS_SDK_SB_EngineeringRef_HPP

class USB_EngineeringRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnPointGenerated(FEHGlobalPointInstance ProducedGlobalPoint);
    void BindPointsProduction();
    void CheckColumnDestroyed(class AVoxelWorld* World, bool& Destroyed);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ExecuteUbergraph_SB_EngineeringRef(int32 EntryPoint);
};

#endif
