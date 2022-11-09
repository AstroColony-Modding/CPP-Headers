#ifndef UE4SS_SDK_SSE_EditorStationRoot_HPP
#define UE4SS_SDK_SSE_EditorStationRoot_HPP

class ASSE_EditorStationRoot_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SSE_EditorStationRoot(int32 EntryPoint);
};

#endif
