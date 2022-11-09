#ifndef UE4SS_SDK_BP_VehiclePawn_HPP
#define UE4SS_SDK_BP_VehiclePawn_HPP

class ABP_VehiclePawn_C : public AEHVehiclePawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USceneComponent* ActorDropPoint;
    class UWheelManager_Component* WheelManager;
    class UStaticMeshComponent* RootMesh;
    class UTexture2D* Icon;
    FText VehicleName;
    int32 UnpossesedFlags;
    int32 PossesedFlags;
    bool IsMovingToDestination;
    FVector Destination;
    FVector DestinationDirection;
    bool Possessed;
    FEHVehicleDefinition VehicleDefinition;
    int32 DefaultVehicleID;
    FString DefaultName;
    bool ShowVehicleDebug;
    FEHVehicleTypeData VehicleData;
    int32 ActionFlags;

    void FallingCheck();
    TMap<class EPlayerActionType, class FText> GetActionNames();
    bool CanExecuteAction(EEHVehicleAction VehicleAction);
    FEHIndicationConfigData GetIndicationConfigData();
    FVector GetIndicationPosition();
    FEHVehicleDefinition GetVehicleDetails();
    void DrawDebugPoint(const FVector position, FLinearColor PointColor);
    void DefaultPlacedVehicle();
    uint8 GetInteractionCircleStep();
    uint8 GetInteractionCircleStepsNumber();
    TSubclassOf<class UWorldInteractiveInfoWidget> GetWorldInteractiveInfoWidgetClass();
    bool HasExplicitInteractions();
    class UTexture2D* GetActionIcon();
    TMap<class EPlayerActionType, class EHJobModeType> GetActionTypeJobModes();
    int32 GetAvailableActionsBits();
    FText GetInteractionDisplayName();
    void PossesReact(bool IsPossessed);
    void StopMovement();
    void InpActEvt_BreakControl_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_BreakControl_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_ActionLeave_K2Node_InputActionEvent_0(FKey Key);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_4(float AxisValue);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
    void OnWorldActorInteract();
    void ReceiveBeginPlay();
    void OnWorldActorSpawned(bool ShouldMoveToDestination, FVector DestinationOffset);
    void ReceiveTick(float DeltaSeconds);
    void InitVehicle(const FEHVehicleDefinition& VehicleDefinition);
    void SavegameObjectSerializeDataLoaded();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnWorldActorRemove();
    void RemoveVehiclePart(class UActorComponent* ActorComponent);
    void OnGridVehicleSpawn(class AEHGrid* Grid);
    void OnActiveStateChanged(bool Active);
    void ExecuteUbergraph_BP_VehiclePawn(int32 EntryPoint);
};

#endif
