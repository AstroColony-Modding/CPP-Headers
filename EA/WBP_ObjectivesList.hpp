#ifndef UE4SS_SDK_WBP_ObjectivesList_HPP
#define UE4SS_SDK_WBP_ObjectivesList_HPP

class UWBP_ObjectivesList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* StartMissionAnim;
    class UImage* CornerImage;
    class UImage* Image_163;
    class UImage* Image_165;
    class UOverlay* InfoWidgetOverlay;
    class UTGConfigurableTextBlock* MissionCounter;
    class UTGConfigurableTextBlock* MissionName;
    class UObjectiveEntry_C* ObjectiveEntry;
    class UObjectiveEntry_C* ObjectiveEntry_1;
    class UVerticalBox* Objectives;
    class UOverlay* Overlay_0;
    class UWidgetSwitcher* ResultSwitcher;
    class UMission* LastActiveMission;
    bool WasForward;

    void UpdateAnimationState();
    void UpateMissionData(class UMission* Mission);
    void UpdateState(class UMission* Mission);
    void UpdateObjectives(class UMission* Mission);
    void Construct();
    void OnMissionNodeActivated(const class UMission* Mission, const class UMOTextNode* Node);
    void OnMissionObjectiveCompleted(const class UMission* Mission, const class UMOObjectiveNode* Node);
    void OnMissionRecovered(const class UMission* Mission);
    void MissionEnded(class UMission* Mission, bool IsSuccesfull);
    void MissionStarted(class UMission* Mission);
    void ExecuteUbergraph_WBP_ObjectivesList(int32 EntryPoint);
};

#endif
