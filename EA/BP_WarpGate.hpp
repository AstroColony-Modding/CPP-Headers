#ifndef UE4SS_SDK_BP_WarpGate_HPP
#define UE4SS_SDK_BP_WarpGate_HPP

class ABP_WarpGate_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    class UParticleSystemComponent* Stars;
    class UStaticMeshComponent* Sphere;
    class UStaticMeshComponent* SM_WarpIntensive;
    class UStaticMeshComponent* SM_WarpBG;
    class UStaticMeshComponent* SM_WarpMain;
    class USceneComponent* DefaultSceneRoot;
    float InterpolateCameraOut_Lerp_F6B751334F21C8F2CCDF8997BA6C7BD1;
    TEnumAsByte<ETimelineDirection::Type> InterpolateCameraOut__Direction_F6B751334F21C8F2CCDF8997BA6C7BD1;
    class UTimelineComponent* InterpolateCameraOut;
    float IntepolateCameraToStartPos_Lerp_040EC4F0461D264C3973D3A226DC8665;
    TEnumAsByte<ETimelineDirection::Type> IntepolateCameraToStartPos__Direction_040EC4F0461D264C3973D3A226DC8665;
    class UTimelineComponent* IntepolateCameraToStartPos;
    TArray<FWarpGateEffect> WarpGateEffects;
    int32 Effect Index;
    class AEHBlackHole* BlackHole;

    void UpdateOpacity(float Opacity);
    void UpdateWarpGateVisuals(int32 EffectIndex);
    void UserConstructionScript();
    void IntepolateCameraToStartPos__FinishedFunc();
    void IntepolateCameraToStartPos__UpdateFunc();
    void InterpolateCameraOut__FinishedFunc();
    void InterpolateCameraOut__UpdateFunc();
    void ReceiveBeginPlay();
    void OnUniverseChanged(uint8 PreviousIndex, uint8 NewIndex);
    void TravelEnd();
    void TravelBegin(class AEHBlackHole* BlackHole, bool IsForward);
    void Deactivate();
    void Activate();
    void ExecuteUbergraph_BP_WarpGate(int32 EntryPoint);
};

#endif
