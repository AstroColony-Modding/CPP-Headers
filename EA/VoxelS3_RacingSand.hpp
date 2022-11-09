#ifndef UE4SS_SDK_VoxelS3_RacingSand_HPP
#define UE4SS_SDK_VoxelS3_RacingSand_HPP

class AVoxelS3_RacingSand_C : public ABP_VoxelWorld_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_VoxelS3_RacingSand(int32 EntryPoint);
};

#endif
