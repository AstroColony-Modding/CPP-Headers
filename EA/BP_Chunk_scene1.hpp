#ifndef UE4SS_SDK_BP_Chunk_scene1_HPP
#define UE4SS_SDK_BP_Chunk_scene1_HPP

class ABP_Chunk_scene1_C : public ABP_Chunk_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 EditorType;

    int32 GetType();
    void UpdateVoxelName();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Chunk_scene1(int32 EntryPoint);
};

#endif
