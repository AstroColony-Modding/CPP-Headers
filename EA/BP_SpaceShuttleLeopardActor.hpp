#ifndef UE4SS_SDK_BP_SpaceShuttleLeopardActor_HPP
#define UE4SS_SDK_BP_SpaceShuttleLeopardActor_HPP

class ABP_SpaceShuttleLeopardActor_C : public AEHSpaceShuttleActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight2;
    class UNiagaraComponent* NS_SpaceShuttleThruster2;
    class UPointLightComponent* PointLight1;
    class UNiagaraComponent* NS_SpaceShuttleThruster1;
    class UPointLightComponent* PointLight;
    class UNiagaraComponent* NS_SpaceShuttleThruster;
    class UStaticMeshComponent* RightGate;
    class UStaticMeshComponent* LeftGate;
    class USceneComponent* GatesRoot;
    class UStaticMeshComponent* LeopardMesh1;
    class UStaticMeshComponent* DockingStation;
    class USceneComponent* DefaultSceneRoot;
    float GateMove_OpeningPercentage_128528B649D81281009E4983CE76BFF8;
    TEnumAsByte<ETimelineDirection::Type> GateMove__Direction_128528B649D81281009E4983CE76BFF8;
    class UTimelineComponent* GateMove;
    float ShipDockingMovement_MovementLerpValue_D759DDB1474EB0025765F7B1C4119191;
    TEnumAsByte<ETimelineDirection::Type> ShipDockingMovement__Direction_D759DDB1474EB0025765F7B1C4119191;
    class UTimelineComponent* ShipDockingMovement;
    float InterpolateRunWalk_RunToWalkValue_069B1B6A4AF7A82420E9A5BD44AA6B1E;
    TEnumAsByte<ETimelineDirection::Type> InterpolateRunWalk__Direction_069B1B6A4AF7A82420E9A5BD44AA6B1E;
    class UTimelineComponent* InterpolateRunWalk;
    float WalkDistance;
    float WalkSpeed;
    FVector DockingPointB;
    FVector DockingPointA;
    FLinearColor FlaresColor;

    void InterpolateRunWalk__FinishedFunc();
    void InterpolateRunWalk__UpdateFunc();
    void ShipDockingMovement__FinishedFunc();
    void ShipDockingMovement__UpdateFunc();
    void GateMove__FinishedFunc();
    void GateMove__UpdateFunc();
    void OnSpaceShuttleDocked();
    void OnSpaceShuttleUndocked();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpaceShuttleLeopardActor(int32 EntryPoint);
};

#endif
