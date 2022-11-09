#ifndef UE4SS_SDK_WBP_MissionPrompt_HPP
#define UE4SS_SDK_WBP_MissionPrompt_HPP

class UWBP_MissionPrompt_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* StartMissionAnim;
    class UBorder* Border;
    class UImage* MissionIco;
    class UTGConfigurableTextBlock* MissionText;

    void UpdateMission(class UMission* Mission);
    void OnMissionStarted(class UMission* Mission);
    void Construct();
    void OnMissionEnded(class UMission* Mission, bool IsSuccesfull);
    void ExecuteUbergraph_WBP_MissionPrompt(int32 EntryPoint);
};

#endif
