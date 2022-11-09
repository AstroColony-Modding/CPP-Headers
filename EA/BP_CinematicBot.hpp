#ifndef UE4SS_SDK_BP_CinematicBot_HPP
#define UE4SS_SDK_BP_CinematicBot_HPP

class ABP_CinematicBot_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMediaSoundComponent* MediaSound;
    class USkeletalMeshComponent* Mesh;
    class UCapsuleComponent* CollisionCylinder1;
    class UParticleSystemComponent* PS_ShotFire;
    class UParticleSystemComponent* P_BotEngine;
    class UStaticMeshComponent* Projector;
    class UMediaPlayer* MediaPlayer;
    class UWBP_Cinematic_C* Cinematic;

    void SetPlaybackPos(FString MarkedFrame);
    void UserConstructionScript();
    void InpActEvt_Enter_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_B_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_N_K2Node_InputKeyEvent_0(FKey Key);
    void OnEndReached();
    void ShowNextSentence();
    void EndCinematic();
    void StopBot();
    void OnMediaOpened(FString OpenedUrl);
    void ReceiveBeginPlay();
    void PressEnterToSkip();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void StartIntro();
    void PreStartIntro();
    void ExecuteUbergraph_BP_CinematicBot(int32 EntryPoint);
};

#endif
