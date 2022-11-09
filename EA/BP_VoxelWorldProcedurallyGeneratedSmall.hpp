#ifndef UE4SS_SDK_BP_VoxelWorldProcedurallyGeneratedSmall_HPP
#define UE4SS_SDK_BP_VoxelWorldProcedurallyGeneratedSmall_HPP

class ABP_VoxelWorldProcedurallyGeneratedSmall_C : public ABP_VoxelWorld_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void UpdateGeneratorParams();
    void InitVoxelWorldParams();
    void SetGeneratorParams();
    void DestroySaveState();
    void ExecuteUbergraph_BP_VoxelWorldProcedurallyGeneratedSmall(int32 EntryPoint);
};

#endif
