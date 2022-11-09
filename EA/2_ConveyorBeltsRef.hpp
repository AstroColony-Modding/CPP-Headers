#ifndef UE4SS_SDK_2_ConveyorBeltsRef_HPP
#define UE4SS_SDK_2_ConveyorBeltsRef_HPP

class U2_ConveyorBeltsRef_C : public UReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* OxygenResource;
    class UEHDevicesComponent* DevicesComp;
    class UEHItem* IronPlate;
    class UEHItem* Carbon;
    class UEHItem* SteelScrew;

    void HandleWarehousePushedIn(class UEHItem* Item, const FIntVector PushCoord);
    void HandleLaboratoryPushedIn(class UEHItem* Item, const FIntVector PushCoord);
    void HandleOxygenGeneratorPushedIn(class UEHItem* Item, const FIntVector PushCoord);
    void HandleContainerRotated180(EEHInstanceRotation Rotation);
    void BindWarehouse();
    void BindLaboratory();
    void BindOxygenGenerator();
    void BindContainers();
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void ExecuteUbergraph_2_ConveyorBeltsRef(int32 EntryPoint);
};

#endif
