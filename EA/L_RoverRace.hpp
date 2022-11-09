#ifndef UE4SS_SDK_L_RoverRace_HPP
#define UE4SS_SDK_L_RoverRace_HPP

class AL_RoverRace_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_L_RoverRace(int32 EntryPoint);
};

#endif
