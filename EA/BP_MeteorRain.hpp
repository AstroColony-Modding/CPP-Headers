#ifndef UE4SS_SDK_BP_MeteorRain_HPP
#define UE4SS_SDK_BP_MeteorRain_HPP

class ABP_MeteorRain_C : public AEHMeteorRain
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMaterialBillboardComponent* Lensflare Halo_Down;
    class UMaterialBillboardComponent* Lensflare Main_Down;
    class UMaterialBillboardComponent* Lensflare Halo_Up;
    class UMaterialBillboardComponent* Lensflare Main_Up;
    class UStaticMeshComponent* Plane;
    class UBillboardComponent* Billboard;
    class USceneComponent* DefaultSceneRoot;
    FVector2D Speed;
    FVector2D DelayBetween;
    float FlaresSize;
    FLinearColor StarColor;
    float Lensflare Luminosity;
    float Halo Flare Luminosity;
    FTimerHandle TimerHandle;

    EVoxelShapeType GeShapeType();
    FLinearColor GetColor();
    FText GetDisplayName();
    FVector GetMiddleOffset();
    TArray<int32> GetResourceCounts();
    float GetRotation();
    FVector GetScale();
    EVoxelTerrainType GetTerrainType();
    EEHTrackableType GetTrackableType();
    bool IsKnown();
    bool IsVisibleOnMap(const bool RadarActive);
    FEHIndicationConfigData GetIndicationConfigData();
    FVector GetIndicationPosition();
    FText GetIndicationText();
    bool IsRegisteringForbidden();
    void SpawnMeteor();
    void UpdateMovement();
    void UpdateIndicatorVisibility();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Fire();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void MeteorHit();
    void SetDisplayName(const FText& DisplayName);
    void DeactivateMovement();
    void ExecuteUbergraph_BP_MeteorRain(int32 EntryPoint);
};

#endif
