#ifndef UE4SS_SDK_BP_Drill_HPP
#define UE4SS_SDK_BP_Drill_HPP

class ABP_Drill_C : public AEHDrillActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Drill_Bore;
    class UStaticMeshComponent* SM_Drill_Arm;
    class UStaticMeshComponent* SM_Drill_Pipe;
    class UStaticMeshComponent* SM_Drill_Shoulder;
    class USceneComponent* DefaultSceneRoot;
    float Interpolate_InterpValue_E3553D2B452107BD3044F4AA584CC025;
    TEnumAsByte<ETimelineDirection::Type> Interpolate__Direction_E3553D2B452107BD3044F4AA584CC025;
    class UTimelineComponent* Interpolate;

    void SpawnMiningEffect();
    FVector GetDrillingLocation(const FIntVector& DrillCoord, bool IsDrillingGround);
    void Interpolate__FinishedFunc();
    void Interpolate__UpdateFunc();
    void InterpolateDrill(FVector StartPos, FVector EndPos);
    void ReceiveTick(float DeltaSeconds);
    void OnGroundMined();
    void OnResourceMined();
    void OnDrillingStopped();
    void MoveDrillToMiningPosition(const FIntVector& Coord, const bool IsDrillingGround);
    void RecoverDrillPosition(const FIntVector& Coord, const bool IsDrillingGround);
    void OnActiveStateChanged(const bool IsActive);
    void UpdateDrillAnim();
    void ExecuteUbergraph_BP_Drill(int32 EntryPoint);
};

#endif
