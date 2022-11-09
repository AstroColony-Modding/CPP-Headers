#ifndef UE4SS_SDK_BP_CircleMovement_HPP
#define UE4SS_SDK_BP_CircleMovement_HPP

class ABP_CircleMovement_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Circle;
    class USceneComponent* DefaultSceneRoot;
    float SpeedRotator;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CircleMovement(int32 EntryPoint);
};

#endif
