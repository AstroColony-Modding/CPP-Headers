#ifndef UE4SS_SDK_L_Game_HPP
#define UE4SS_SDK_L_Game_HPP

class AL_Game_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    float TimeDilation;
    class UMediaPlayer* MediaPlayer;

    void HDScreenshot();
    void KillNonHumans();
    void KillNonFarmers();
    void KillBotsFar();
    void KillBots();
    void SaveResourcesOrder();
    void ChangeTimeDilation(float TimeDilationChange);
    void InpActEvt_PageDown_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_L_Game(int32 EntryPoint);
};

#endif
