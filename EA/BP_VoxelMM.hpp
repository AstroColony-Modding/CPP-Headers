#ifndef UE4SS_SDK_BP_VoxelMM_HPP
#define UE4SS_SDK_BP_VoxelMM_HPP

class ABP_VoxelMM_C : public ABP_VoxelWorld_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FIntVector> Positions;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VoxelMM(int32 EntryPoint);
};

#endif
