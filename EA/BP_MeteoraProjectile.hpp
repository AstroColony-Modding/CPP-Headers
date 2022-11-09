#ifndef UE4SS_SDK_BP_MeteoraProjectile_HPP
#define UE4SS_SDK_BP_MeteoraProjectile_HPP

class ABP_MeteoraProjectile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh;
    class USphereComponent* Sphere;
    class UParticleSystemComponent* Fire;
    class UProjectileMovementComponent* ProjectileMovement;
    FVector InVel;
    class UParticleSystem* ExplodeEmitter;

    void DestroyInstancesInRange();
    void UserConstructionScript();
    void BndEvt__BP_MeteoraProjectile_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_MeteoraProjectile(int32 EntryPoint);
};

#endif
