#ifndef UE4SS_SDK_BP_Scenario_HPP
#define UE4SS_SDK_BP_Scenario_HPP

class UBP_Scenario_C : public UEHScenarioComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IgnoreTechnologies;
    TSoftClassPtr<UObject> BPPlayerController;

    void NoTutorial();
    void CinematicFinished(class AActor* DestroyedActor);
    void SkipCinematic();
    void StartCinematic();
    void SelectMissionTemplate(class UMission* Mission);
    void OnMissionNodeActivated(const class UMission* Mission, const class UMOTextNode* Node);
    void OnMissionObjectiveCompleted(const class UMission* Mission, const class UMOObjectiveNode* Node);
    void SavegameObjectSerializeDataLoaded();
    void OnMissionEnded(class UMission* Mission, bool IsSuccesfull);
    void StartScenario();
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void UnloadCinematicLevel();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Scenario(int32 EntryPoint);
};

#endif
