#ifndef UE4SS_SDK_3_Navigation_HPP
#define UE4SS_SDK_3_Navigation_HPP

class U3_Navigation_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHDevicesComponent* DevicesComp;
    class AActor* AlphaCamembert;

    void HandleSpecialistTrained(EAIProfession Profession);
    void HandleTraineeGenerated(EAIProfession Profession);
    void HandleLaboratoryGlobalPointProduced(FEHGlobalPointInstance ProducedGlobalPoint);
    void BindContainers();
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void OnInteractableDevicesChanged();
    void ExecuteUbergraph_3_Navigation(int32 EntryPoint);
};

#endif
