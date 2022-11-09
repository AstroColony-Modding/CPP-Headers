#ifndef UE4SS_SDK_L_SpacecraftRace_HPP
#define UE4SS_SDK_L_SpacecraftRace_HPP

class AL_SpacecraftRace_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_L_SpacecraftRace(int32 EntryPoint);
};

#endif
