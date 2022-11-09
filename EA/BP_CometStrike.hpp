#ifndef UE4SS_SDK_BP_CometStrike_HPP
#define UE4SS_SDK_BP_CometStrike_HPP

class ABP_CometStrike_C : public AEHCometStrike
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UDecalComponent* ImpactDecal;
    class UBillboardComponent* Billboard;
    class UBoxComponent* Box;

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
    void Deactivate();
    void Activate();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void SetDisplayName(const FText& DisplayName);
    void BndEvt__BP_CometStrike_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void RecoverCometProjectile(const FVector& CometProjectilePosition);
    void ExecuteUbergraph_BP_CometStrike(int32 EntryPoint);
};

#endif
