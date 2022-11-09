#ifndef UE4SS_SDK_TGCoreUtility_HPP
#define UE4SS_SDK_TGCoreUtility_HPP

class ATGPlayerController : public APlayerController
{
    bool EnableRenderFocusRule;

};

class UTGGameUserSettings : public UGameUserSettings
{
    float Gamma;
    float Contrast;
    float UserInterfaceScale;
    FString Language;
    float FieldOfView;
    float MouseVerticalSensitivity;
    bool MouseVerticalInverted;
    float MouseHorizontalSensitivity;
    bool MouseHorizontalInverted;
    float AutosaveInterval;
    int32 AutosaveMaxCount;
    float MasterVolume;
    float EffectsVolume;
    float GameMusicVolume;
    float MenuMusicVolume;
    float UserInterfaceVolume;
    TArray<FInputActionKeyMapping> UserActionMappings;
    TArray<FInputAxisKeyMapping> UserAxisMappings;

};

class ATGEmptyActor : public AActor
{
    class USceneComponent* Scene;

};

class ATGEmptyBillboardActor : public ATGEmptyActor
{
};

class ATGInstancedStaticMeshActor : public AStaticMeshActor
{
};

class UTGLifecycleComponent : public UActorComponent
{
};

class UTGLifecycleSceneComponent : public USceneComponent
{
};

class UTGTickableObject : public UObject
{
};

struct FAttachedActorSpawnParams
{
    TSubclassOf<class AActor> ActorClassToSpawn;
    class APawn* PawnToAttachTo;
    FVector LocationOffset;
    FVector SpawnDirection;
    class APawn* Instigator;

};

struct FActorsInSphereParams
{
    class UObject* WorldContextObject;
    FVector Center;
    float Radius;
    class AActor* ActorToIgnore;
    TSubclassOf<class AActor> ActorClassFilter;

};

class UTGUtilityFunctionLibrary : public UBlueprintFunctionLibrary
{

    class AActor* SpawnAttachedActor(const FAttachedActorSpawnParams& Params);
    float ScaleCurveAndCalculateValueAtTime(class UCurveFloat*& Curve, float MinValue, float MaxValue, float MaxTime, float CurrentTimeSinceStart);
    bool IsOneOf(const class UObject* Object, const TArray<class UClass*>& ClassTypes);
    class AActor* GetClosestActorToScreenCentre(const class APlayerController* PlayerController, const TArray<class AActor*>& ActorCandidates, float MaxScreenHeightFractionFromCentre);
    TArray<class AActor*> FindAllActorsInSphere(const FActorsInSphereParams& Params);
    class UActorComponent* AddComponentToActor(class AActor* Actor, TSubclassOf<class UActorComponent> ActorComponentClass);
};

struct FTGDualRefcount
{
    int32 ActivationRefcount;
    int32 DisabledRefcount;

};

struct FTGTimestamp
{
    float Value;

};

#endif
