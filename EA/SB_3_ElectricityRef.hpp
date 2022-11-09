#ifndef UE4SS_SDK_SB_3_ElectricityRef_HPP
#define UE4SS_SDK_SB_3_ElectricityRef_HPP

class USB_3_ElectricityRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;

    void HandleElectricityChanged();
    void BindElectricNetworks();
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void OnElectricNetworkChanged();
    void OnItemProduced(FEHItemInstance ProducedItem);
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void NodeActivated(class UMOTextNode* ActivatedNode);
    void ExecuteUbergraph_SB_3_ElectricityRef(int32 EntryPoint);
};

#endif
