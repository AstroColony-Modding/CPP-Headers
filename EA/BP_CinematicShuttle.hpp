#ifndef UE4SS_SDK_BP_CinematicShuttle_HPP
#define UE4SS_SDK_BP_CinematicShuttle_HPP

class ABP_CinematicShuttle_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight2;
    class UNiagaraComponent* NS_SpaceShuttleThruster2;
    class UNiagaraComponent* NS_SpaceShuttleThruster1;
    class UPointLightComponent* PointLight;
    class UNiagaraComponent* NS_SpaceShuttleThruster;
    class UProjectileMovementComponent* ProjectileMovement;
    class UStaticMeshComponent* RightGate;
    class UStaticMeshComponent* LeftGate;
    class USceneComponent* GatesRoot;
    class UStaticMeshComponent* LeopardMesh1;
    class UStaticMeshComponent* DockingStation;
    class USceneComponent* DefaultSceneRoot;
    float AnimateGate_Val_1652831149AD50F9B00C1BB8A3BA7B2E;
    TEnumAsByte<ETimelineDirection::Type> AnimateGate__Direction_1652831149AD50F9B00C1BB8A3BA7B2E;
    class UTimelineComponent* AnimateGate;
    FLinearColor FlaresColor;

    void AnimateGate__FinishedFunc();
    void AnimateGate__UpdateFunc();
    void FlyAway();
    void ExecuteUbergraph_BP_CinematicShuttle(int32 EntryPoint);
};

#endif
