#ifndef UE4SS_SDK_BP_GameInstance_HPP
#define UE4SS_SDK_BP_GameInstance_HPP

class UBP_GameInstance_C : public UEHGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnFailure_16FCF0874C249FF1BD31378D2401B224();
    void OnSuccess_16FCF0874C249FF1BD31378D2401B224();
    void OnSessionInviteAccepted(int32 LocalPlayerNum, FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SessionToJoin);
    void OnInvalidSavegameVersionLoad();
    void ExecuteUbergraph_BP_GameInstance(int32 EntryPoint);
};

#endif
