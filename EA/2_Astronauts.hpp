#ifndef UE4SS_SDK_2_Astronauts_HPP
#define UE4SS_SDK_2_Astronauts_HPP

class U2_Astronauts_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHDevicesComponent* DevicesComp;

    void HandleHydrogenGeneratorItemProduced(FEHItemInstance ProducedItem);
    void HandleRobotsAssemberItemProduced(FEHItemInstance ProducedItem);
    void BindContainers();
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void ExecuteUbergraph_2_Astronauts(int32 EntryPoint);
};

#endif
