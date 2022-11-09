#ifndef UE4SS_SDK_BP_VoxelWorldS2_HPP
#define UE4SS_SDK_BP_VoxelWorldS2_HPP

class ABP_VoxelWorldS2_C : public ABP_VoxelWorld_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FIntVector> Positions;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VoxelWorldS2(int32 EntryPoint);
};

#endif
