#ifndef UE4SS_SDK_BP_ChkecpointCircle_HPP
#define UE4SS_SDK_BP_ChkecpointCircle_HPP

class ABP_ChkecpointCircle_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Circle;
    class USceneComponent* DefaultSceneRoot;
    float SpeedRotator;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ChkecpointCircle(int32 EntryPoint);
};

#endif
