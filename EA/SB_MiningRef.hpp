#ifndef UE4SS_SDK_SB_MiningRef_HPP
#define UE4SS_SDK_SB_MiningRef_HPP

class USB_MiningRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* Mine;

    void DrillItemProduced(FEHItemInstance ProducedItem);
    void HandleRobotsAssemberProduced(FEHItemInstance ProducedItem);
    void HandleMineDelivered(FEHItemInstance ProducedItem);
    void BindRobotsAssember();
    void BindDrill();
    void NodeActivated(class UMOTextNode* ActivatedNode);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ExecuteUbergraph_SB_MiningRef(int32 EntryPoint);
};

#endif
