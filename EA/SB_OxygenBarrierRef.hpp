#ifndef UE4SS_SDK_SB_OxygenBarrierRef_HPP
#define UE4SS_SDK_SB_OxygenBarrierRef_HPP

class USB_OxygenBarrierRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* OxygenBarrier;
    class UEHItem* Oxygen;
    class UEHItem* OxygenGenerator;

    void OnOxygenProduced(FEHItemInstance ProducedItem);
    void BindOxygenProduction();
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void NodeActivated(class UMOTextNode* ActivatedNode);
    void OnBarrierOxygenReffiled();
    void ExecuteUbergraph_SB_OxygenBarrierRef(int32 EntryPoint);
};

#endif
