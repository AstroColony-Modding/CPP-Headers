#ifndef UE4SS_SDK_WBP_PausePrompt_HPP
#define UE4SS_SDK_WBP_PausePrompt_HPP

class UWBP_PausePrompt_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UImage* Image;
    class UTGConfigurableTextBlock* MissionName;
    class USizeBox* PauseSizeBox;

    void Construct();
    void OnPauseStateChanged(bool IsPaused);
    void ExecuteUbergraph_WBP_PausePrompt(int32 EntryPoint);
};

#endif
