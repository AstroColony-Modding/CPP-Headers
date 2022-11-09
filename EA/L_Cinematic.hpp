#ifndef UE4SS_SDK_L_Cinematic_HPP
#define UE4SS_SDK_L_Cinematic_HPP

class AL_Cinematic_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AStaticMeshActor* scifi_chair5_ExecuteUbergraph_L_Cinematic_RefProperty;
    class AStaticMeshActor* scifi_chair6_ExecuteUbergraph_L_Cinematic_RefProperty;
    class AStaticMeshActor* scifi_chair2_ExecuteUbergraph_L_Cinematic_RefProperty;
    class AStaticMeshActor* scifi_chair3_ExecuteUbergraph_L_Cinematic_RefProperty;
    class AStaticMeshActor* scifi_chair4_ExecuteUbergraph_L_Cinematic_RefProperty;

    void OnLoaded_BBD856CE49C32D43984FD9810960FFAD(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_L_Cinematic(int32 EntryPoint);
};

#endif
