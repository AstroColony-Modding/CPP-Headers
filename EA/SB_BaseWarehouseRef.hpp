#ifndef UE4SS_SDK_SB_BaseWarehouseRef_HPP
#define UE4SS_SDK_SB_BaseWarehouseRef_HPP

class USB_BaseWarehouseRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* BaseWarehouse;

    void HandleWarehouseItemsChanged();
    void UnbindWarehouse();
    void BindWarehouse();
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void MissionEnded(class APlayerController* PlayerController);
    void ExecuteUbergraph_SB_BaseWarehouseRef(int32 EntryPoint);
};

#endif
