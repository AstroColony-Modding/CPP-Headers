#ifndef UE4SS_SDK_3_Automation_HPP
#define UE4SS_SDK_3_Automation_HPP

class U3_Automation_C : public UReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHDevicesComponent* DevicesComp;
    class UTechnologyAsset* PneumaticTubesTech;
    class UEHItem* Anorhite;
    class UEHItem* IronPlate;
    class UEHItem* Miner;
    class UEHItem* Carbon;

    void HandleAssignedAIChanged(uint8 AssignedAICount);
    void HandleMineItemDelivered(FEHItemInstance DeliveredItems);
    void HandleRobotsAssemberItemProduced(FEHItemInstance ProducedItem);
    void HandleManufacturerItemPushedIn(class UEHItem* Item, const FIntVector PushCoord);
    void HandleSmelterItemPushedIn(class UEHItem* Item, const FIntVector PushCoord);
    void BindContainers();
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void ExecuteUbergraph_3_Automation(int32 EntryPoint);
};

#endif
