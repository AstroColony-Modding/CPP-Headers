#ifndef UE4SS_SDK_BP_BlackHole_HPP
#define UE4SS_SDK_BP_BlackHole_HPP

class ABP_BlackHole_C : public AEHBlackHole
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHHierarchicalInstancedStaticMeshComponent* Stargate;
    class UHierarchicalInstancedStaticMeshComponent* StargateUnderConstruction;
    class UStaticMeshComponent* BlackHole;
    class UStaticMeshComponent* WormHole;
    class UInterpToMovementComponent* InterpToMovement;
    class UStaticMeshComponent* SuckingSphere;
    class USceneComponent* DefaultSceneRoot;
    bool ActivateMovement;
    bool EnableDebugPortal;
    float PowerProgress;
    int32 SelectAction;
    bool IsForwardPortal;

    void UpdateIndicatorVisibility();
    void UpdatePortalState();
    void UpdateBlackHoleVisuals();
    void PortalTravel();
    void DebugPortal();
    void DebugMovement();
    void UpdateOpacityOld(float Opacity);
    TMap<class EPlayerActionType, class FText> GetActionNames();
    int32 GetAvailableActionsBits();
    class UTexture2D* GetActionIcon();
    FText GetInteractionDisplayName();
    void UpdateStargateActivated();
    void UpdateEnergyState();
    float EnergyRequired();
    void UpdateConstructedPart();
    TArray<FEHItemInstance> GetExpeditionCost();
    int32 TotalExpeditionsCount();
    uint8 GetInteractionCircleStep();
    uint8 GetInteractionCircleStepsNumber();
    class UTexture2D* GetIcon();
    FText GetName();
    uint8 GetPhasesCount();
    void UpdateConstructedStargate();
    void DestroyInstancesInRange();
    FEHIndicationConfigData GetIndicationConfigData();
    FVector GetIndicationPosition();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnConstructionFinished();
    void OnNextPartConstructionStarted();
    void OnPartConstructionCompleted();
    void OnConstructionCanceled();
    void SavegameObjectSerializeDataLoaded();
    void OnPowerActivated();
    void ReceiveBeginPlay();
    void OnEnergyProvided(float Energy, class UEHEnergyTransmitterObject* EnergyTransmitter);
    void OnWorldActorInteract();
    void ReceiveTick(float DeltaSeconds);
    void OnCreated();
    void OnUniverseChanged(uint8 PreviousIndex, uint8 NewIndex);
    void UpdateOpacity(const float Opacity);
    void ExecuteUbergraph_BP_BlackHole(int32 EntryPoint);
};

#endif
