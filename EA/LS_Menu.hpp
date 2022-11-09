#ifndef UE4SS_SDK_LS_Menu_HPP
#define UE4SS_SDK_LS_Menu_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_17(class ABP_CinematicDoor_C* BP_CinematicDoor);
    void SequenceEvent__ENTRYPOINTSequenceDirector_16(class ABP_CinematicBot_C* BP_CinematicBot);
    void SequenceEvent__ENTRYPOINTSequenceDirector_15(class ABP_CinematicBot_C* BP_CinematicBot);
    void SequenceEvent__ENTRYPOINTSequenceDirector_14(class ABP_CinematicBot_C* BP_CinematicBot);
    void SequenceEvent__ENTRYPOINTSequenceDirector_13(class ABP_CinematicBot_C* BP_CinematicBot);
    void SequenceEvent__ENTRYPOINTSequenceDirector_12(class ABP_CinematicBot_C* BP_CinematicBot);
    void SequenceEvent__ENTRYPOINTSequenceDirector_11(class ABP_CinematicBot_C* BP_CinematicBot);
    void SequenceEvent__ENTRYPOINTSequenceDirector_10(class ABP_CinematicBot_C* BP_CinematicBot);
    void SequenceEvent__ENTRYPOINTSequenceDirector_9(class ABP_CinematicBot_C* BP_CinematicBot);
    void SequenceEvent__ENTRYPOINTSequenceDirector_8(class ABP_CinematicBot_C* BP_CinematicBot);
    void SequenceEvent__ENTRYPOINTSequenceDirector_7(class ABP_CameraActor_C* BP_CameraIntro);
    void SequenceEvent__ENTRYPOINTSequenceDirector_6(class ABP_CameraActor_C* BP_CameraIntro);
    void SequenceEvent__ENTRYPOINTSequenceDirector_5(class ABP_CinematicScifiGuy_C* BP_CinematicScifiGuy);
    void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ABP_CinematicScifiGuy_C* BP_CinematicScifiGuy);
    void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_CinematicScifiGuy_C* BP_CinematicScifiGuy);
    void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_CinematicScifiGuy_C* BP_CinematicScifiGuy);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void ShuttleFlyAway(class ABP_CinematicShuttle_C* FakeShuttle);
    void DestroyActors();
    void TriggerSalute(class ABP_CinematicScifiGuy_C* BP_CinematicScifiGuy);
    void StartCameraControl(class ABP_CameraActor_C* BP_CameraIntro);
    void EndCameraConrol(class ABP_CameraActor_C* BP_CameraIntro);
    void StartIntro(class ABP_CinematicBot_C* BP_CinematicBot);
    void OpenDoor(class ABP_CinematicDoor_C* BP_CinematicDoor);
    void EndIntro(class ABP_CinematicBot_C* BP_CinematicBot);
    void ShowNextSentence(class ABP_CinematicBot_C* BP_CinematicBot);
    void StopBot(class ABP_CinematicBot_C* BP_CinematicBot);
    void PressEnterToSkip(class ABP_CinematicBot_C* BP_CinematicBot);
    void PreStartIntro(class ABP_CinematicBot_C* BP_CinematicBot);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
