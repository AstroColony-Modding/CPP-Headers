#ifndef UE4SS_SDK_L_MenuMap_HPP
#define UE4SS_SDK_L_MenuMap_HPP

class AL_MenuMap_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void UpdateDevicesForMainMenu();
    void OnLoaded_791B0AA047744370FC300D90EDC6516D(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_L_MenuMap(int32 EntryPoint);
};

#endif
