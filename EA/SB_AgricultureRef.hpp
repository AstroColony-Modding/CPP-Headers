#ifndef UE4SS_SDK_SB_AgricultureRef_HPP
#define UE4SS_SDK_SB_AgricultureRef_HPP

class USB_AgricultureRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* Farm;

    void HandleKitchenProduced(FEHItemInstance ProducedItem);
    void BindKitchen();
    void HandleFarmDelivered(FEHItemInstance ProducedItem);
    void BindFarm();
    void HandleRobotsAssemberProduced(FEHItemInstance ProducedItem);
    void BindRobotsAssember();
    void NodeActivated(class UMOTextNode* ActivatedNode);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ExecuteUbergraph_SB_AgricultureRef(int32 EntryPoint);
};

#endif
