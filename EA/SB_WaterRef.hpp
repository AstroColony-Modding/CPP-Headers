#ifndef UE4SS_SDK_SB_WaterRef_HPP
#define UE4SS_SDK_SB_WaterRef_HPP

class USB_WaterRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* IceBreaker;
    class UEHDevicesComponent* DevicesComp;
    class AEHGrid* PrimaryGrid;

    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void OnWaterNetworkChanged();
    void OnStoredWaterChanged();
    void ExecuteUbergraph_SB_WaterRef(int32 EntryPoint);
};

#endif
