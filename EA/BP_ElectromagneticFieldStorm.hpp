#ifndef UE4SS_SDK_BP_ElectromagneticFieldStorm_HPP
#define UE4SS_SDK_BP_ElectromagneticFieldStorm_HPP

class ABP_ElectromagneticFieldStorm_C : public AEHElectromagneticField
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* BlackoutPoint;
    class UNiagaraComponent* Storm;
    class USceneComponent* DefaultSceneRoot;
    FVector2D DelayBetween;
    TMap<UEHElectricNetwork*, float> BlackoutElectricNetworks;
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
    void UpdateMovement();
    void UpdateIndicatorVisibility();
    void BlackoutsTimeout();
    void BlackoutNetworksInRange();
    void OnLoaded_39E8D50B49BD9490F39740AE8DEA39C2(class UObject* Loaded);
    void Fire();
    void ReceiveBeginPlay();
    void SetDisplayName(const FText& DisplayName);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnMapRadarActiveStateChanged();
    void DeactivateMovement();
    void ExecuteUbergraph_BP_ElectromagneticFieldStorm(int32 EntryPoint);
};

#endif
