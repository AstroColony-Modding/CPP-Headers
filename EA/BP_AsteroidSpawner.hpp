#ifndef UE4SS_SDK_BP_AsteroidSpawner_HPP
#define UE4SS_SDK_BP_AsteroidSpawner_HPP

class ABP_AsteroidSpawner_C : public AEHAsteroidSpawner
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<UDestructibleComponent*, float> DestructibleAnimate;

    void UpdateAsteroidMesh(bool HasBigCollisions);
    void CheckInteractionDistance(bool& InRange);
    void AnimateDestructible();
    TSubclassOf<class UWorldInteractiveInfoWidget> GetWorldInteractiveInfoWidgetClass();
    uint8 GetInteractionCircleStep();
    uint8 GetInteractionCircleStepsNumber();
    void ShowDestructibleColliding(FTransform SpawnTransform, FVector Velocity, FVector Color, FVector ImpactPoint);
    void ShowDestructiblePlayer(FTransform SpawnTransform, FVector Velocity, FVector Color, FVector ImpactPoint);
    void InteractWithAsteroid();
    void OnWorldActorHit();
    void ReceiveTick(float DeltaSeconds);
    void CollidingAsteroidDestroyed(const int32 InstanceIndex, const FVector ImpactPoint);
    void OnAsteroidExtracted(const int32 InstanceIndex, const FVector& ImpactPoint);
    void ExecuteUbergraph_BP_AsteroidSpawner(int32 EntryPoint);
};

#endif
