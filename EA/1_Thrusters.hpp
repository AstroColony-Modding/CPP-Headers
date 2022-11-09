#ifndef UE4SS_SDK_1_Thrusters_HPP
#define UE4SS_SDK_1_Thrusters_HPP

class U1_Thrusters_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AEHGrid* Grid;
    FVector GridStartLocation;

    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnResourceItemPicked(FEHItemInstance PickedItem);
    void NodeActivated(class UMOTextNode* ActivatedNode);
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void ExecuteUbergraph_1_Thrusters(int32 EntryPoint);
};

#endif
