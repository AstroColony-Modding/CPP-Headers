#ifndef UE4SS_SDK_WBP_ObjectivePrompt_HPP
#define UE4SS_SDK_WBP_ObjectivePrompt_HPP

class UWBP_ObjectivePrompt_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowObjective;
    class UBorder* Border;
    class UTGConfigurableTextBlock* CompletedText;
    class UImage* Image;
    class UTGConfigurableTextBlock* MissionName;
    class UTGConfigurableTextBlock* ObjectiveText;
    class UOverlay* Overlay_0;

    void Construct();
    void OnMissionObjectiveCompleted(const class UMission* Mission, const class UMOObjectiveNode* Node);
    void ExecuteUbergraph_WBP_ObjectivePrompt(int32 EntryPoint);
};

#endif
