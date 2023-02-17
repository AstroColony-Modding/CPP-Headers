#ifndef UE4SS_SDK_BP_VoxelWorldProcedurallyGenerated_HPP
#define UE4SS_SDK_BP_VoxelWorldProcedurallyGenerated_HPP

class ABP_VoxelWorldProcedurallyGenerated_C : public ABP_VoxelWorld_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void UpdateGeneratorParamsOld();
    void UpdateGeneratorParams();
    void InitVoxelWorldParams();
    void LoadVoxelWorld();
    void ReceiveBeginPlay();
    void DestroySaveState();
    void SetGeneratorParams();
    void ExecuteUbergraph_BP_VoxelWorldProcedurallyGenerated(int32 EntryPoint);
};

#endif
