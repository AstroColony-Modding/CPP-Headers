#ifndef UE4SS_SDK_WBP_RacingHUDWidget_HPP
#define UE4SS_SDK_WBP_RacingHUDWidget_HPP

class UWBP_RacingHUDWidget_C : public UTGHUDWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowCountdown;
    class UTGConfigurableTextBlock* BestLapText;
    class UBorder* Border;
    class UWBP_Checkpoint_C* Checkpoint;
    class UBorder* CountdownBorder;
    class UTGConfigurableTextBlock* CountdownText;
    class UTGConfigurableTextBlock* SpeedText;
    class UTGConfigurableTextBlock* TimeText;
    class ARacingPlayerController_C* RacingPlayerController;

    void UpdateCountdown(FText Text);
    FText GetBestLapTime();
    FText GetTime();
    FText GetSpeed();
    void Construct();
    void ExecuteUbergraph_WBP_RacingHUDWidget(int32 EntryPoint);
};

#endif
