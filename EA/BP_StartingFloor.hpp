#ifndef UE4SS_SDK_BP_StartingFloor_HPP
#define UE4SS_SDK_BP_StartingFloor_HPP

class ABP_StartingFloor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_StartingFloor(int32 EntryPoint);
};

#endif
