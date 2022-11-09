#ifndef UE4SS_SDK_BP_WorldInteractiveVehicle_HPP
#define UE4SS_SDK_BP_WorldInteractiveVehicle_HPP

class ABP_WorldInteractiveVehicle_C : public AEHWorldInteractiveVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* RootMeshNew;
    int32 DefaultVehicleID;
    FString DefaultName;
    FEHVehicleDefinition VehicleDefinition;
    FEHVehicleTypeData VehicleData;
    int32 ActionFlags;

    bool CanExecuteAction(EEHVehicleAction VehicleAction);
    int32 GetPossibleVehicleActions();
    FEHVehicleDefinition GetVehicleDetails();
    FEHIndicationConfigData GetIndicationConfigData();
    FVector GetIndicationPosition();
    void DefaultPlacedVehicle();
    void OnDesignerVehiclePreviewSpawn();
    void OnGridVehicleSpawn(class AEHGrid* Grid);
    void ReceiveBeginPlay();
    void InitVehicle(const FEHVehicleDefinition& VehicleDefinition);
    void SavegameObjectSerializeDataLoaded();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnWorldActorRemove();
    void RemoveVehiclePart(class UActorComponent* ActorComponent);
    void ExecuteUbergraph_BP_WorldInteractiveVehicle(int32 EntryPoint);
};

#endif
