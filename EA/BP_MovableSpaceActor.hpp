#ifndef UE4SS_SDK_BP_MovableSpaceActor_HPP
#define UE4SS_SDK_BP_MovableSpaceActor_HPP

class ABP_MovableSpaceActor_C : public AEHMovableSpaceActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileMovementComponent* ProjectileMovement;
    class UStaticMeshComponent* DebugPilar;

    void ReceiveTick(float DeltaSeconds);
    void OnRealMovementBeforeUpdate();
    void OnRealMovementUpdate();
    void OnShaderMovementUpdate();
    void ReceiveBeginPlay();
    void OnMovingToDestinationChangedEvent(const bool IsMovingToDestination);
    void ExecuteUbergraph_BP_MovableSpaceActor(int32 EntryPoint);
};

#endif
