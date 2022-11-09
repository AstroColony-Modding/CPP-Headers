#ifndef UE4SS_SDK_BP_CometProjectile_HPP
#define UE4SS_SDK_BP_CometProjectile_HPP

class ABP_CometProjectile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Star;
    class UParticleSystemComponent* Fire;
    class UStaticMeshComponent* StaticMesh;
    class USphereComponent* Sphere;
    class UProjectileMovementComponent* ProjectileMovement;
    class UParticleSystem* ExplodeEmitter;
    int32 CoronalRaysCount;
    int32 GasEjectionsCount;
    int32 MicroFlaresCount;
    int32 SolarEruptionsCount;
    int32 CoronalEjectionsCount;
    FVector SurfaceNormal;
    FLinearColor Atmosphere Color;
    float CoronalRaysIntensity;
    float GasEjectionSizeMin;
    float GasEjectionSizeMax;
    float GasEjectionsIntensity;
    int32 SurfaceExplosionsCount;
    float SurfaceExplosionSizeMin;
    float SurfaceExplosionSizeMax;
    float MicroFlaresSizeMin;
    float MicroFlaresSizeMax;
    float CoronalEruptionsIntensity;
    float CoronalEjectionSizeMin;
    float CoronalEjectionSizeMax;
    float CoronalEjectionsIntensity;
    float Explosions Intensity;
    FLinearColor EjectionsColor;
    FLinearColor Explosions Color;

    void DestroyInstancesInRange();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_CometProjectile_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_CometProjectile(int32 EntryPoint);
};

#endif
