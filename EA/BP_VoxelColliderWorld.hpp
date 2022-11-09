#ifndef UE4SS_SDK_BP_VoxelColliderWorld_HPP
#define UE4SS_SDK_BP_VoxelColliderWorld_HPP

class ABP_VoxelColliderWorld_C : public AEHColliderWorld
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void SetGeneratorParams();
    void ExecuteUbergraph_BP_VoxelColliderWorld(int32 EntryPoint);
};

#endif
