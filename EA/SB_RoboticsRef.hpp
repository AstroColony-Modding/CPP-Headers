#ifndef UE4SS_SDK_SB_RoboticsRef_HPP
#define UE4SS_SDK_SB_RoboticsRef_HPP

class USB_RoboticsRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* RobotsAssembler;

    void HandleRobotsAssemberItemProduced(FEHItemInstance ProducedItem);
    void UnbindRobotsAssember();
    void BindRobotsAssember();
    void NodeActivated(class UMOTextNode* ActivatedNode);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void MissionEnded(class APlayerController* PlayerController);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ExecuteUbergraph_SB_RoboticsRef(int32 EntryPoint);
};

#endif
