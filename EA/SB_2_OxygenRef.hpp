#ifndef UE4SS_SDK_SB_2_OxygenRef_HPP
#define UE4SS_SDK_SB_2_OxygenRef_HPP

class USB_2_OxygenRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTechnologyAsset* OxygenTech;
    class UEHItem* OxygenGeneratorItem;
    class UEHItem* Ice;

    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void OnResourceItemPicked(FEHItemInstance PickedItem);
    void OnOxygenReffiled();
    void NodeActivated(class UMOTextNode* ActivatedNode);
    void LocalMissionStarted();
    void ExecuteUbergraph_SB_2_OxygenRef(int32 EntryPoint);
};

#endif
