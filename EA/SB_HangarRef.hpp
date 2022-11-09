#ifndef UE4SS_SDK_SB_HangarRef_HPP
#define UE4SS_SDK_SB_HangarRef_HPP

class USB_HangarRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* Hangar;

    void HangleHangarProduced(FEHItemInstance ProducedItem);
    void BindHangar();
    void NodeActivated(class UMOTextNode* ActivatedNode);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ExecuteUbergraph_SB_HangarRef(int32 EntryPoint);
};

#endif
