#ifndef UE4SS_SDK_BP_AchievementsManager_HPP
#define UE4SS_SDK_BP_AchievementsManager_HPP

class UBP_AchievementsManager_C : public UEHAchievementsManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSoftObjectPtr<UObject> TechOxygen;

    void HandleSignalReceived();
    void HandleDelivered(FEHItemInstance ProducedItem);
    void BindSignalReceiver();
    void BindBarn();
    void BindFarm();
    void CheckVelocity();
    void QueryAchievementsCompleted();
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void OnOxygenReffiled();
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ShutdownCompleted();
    void ExecuteUbergraph_BP_AchievementsManager(int32 EntryPoint);
};

#endif
