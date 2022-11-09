#ifndef UE4SS_SDK_BP_VoxelWorld_HPP
#define UE4SS_SDK_BP_VoxelWorld_HPP

class ABP_VoxelWorld_C : public AEHVoxelWorld
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_VoxelWorld_CVoxelDigged VoxelDigged;
    void VoxelDigged(FIntVector Coord);
    TArray<FIntVector> PositionsToRemove;

    void VoxelRemoved(const FIntVector& Coord, const int32 VoxelType);
    void RemoveVoxel(FIntVector position);
    void RemoveBox(const FVoxelIntBox& BoxBounds, class AEHCharacter* Character);
    void ExecuteUbergraph_BP_VoxelWorld(int32 EntryPoint);
    void VoxelDigged__DelegateSignature(FIntVector Coord);
};

#endif
