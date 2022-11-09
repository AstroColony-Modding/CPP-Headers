#ifndef UE4SS_SDK_SB_AdvancedMiningRef_HPP
#define UE4SS_SDK_SB_AdvancedMiningRef_HPP

class USB_AdvancedMiningRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* Mine;

    void HandleRobotsAssemberProduced(FEHItemInstance ProducedItem);
    void HandleMineDelivered(FEHItemInstance ProducedItem);
    void UnbindRobotsAssember();
    void BindRobotsAssember();
    void UnbindMine();
    void BindMine();
    void NodeActivated(class UMOTextNode* ActivatedNode);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ExecuteUbergraph_SB_AdvancedMiningRef(int32 EntryPoint);
};

#endif
