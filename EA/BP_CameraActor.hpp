#ifndef UE4SS_SDK_BP_CameraActor_HPP
#define UE4SS_SDK_BP_CameraActor_HPP

class ABP_CameraActor_C : public ACameraActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 SequencerMarkerID;
    TArray<FString> SequencerMarkers;
    bool PossesCamera;
    bool ResetJobMode;
    FRotator DesiredRotation;
    float Interp Speed;

    void GetSequencerMarkerName(FString& NewParam);
    int32 GetSequencerMarkerID();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CameraActor(int32 EntryPoint);
};

#endif
