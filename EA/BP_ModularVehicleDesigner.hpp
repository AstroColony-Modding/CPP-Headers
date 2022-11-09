#ifndef UE4SS_SDK_BP_ModularVehicleDesigner_HPP
#define UE4SS_SDK_BP_ModularVehicleDesigner_HPP

class ABP_ModularVehicleDesigner_C : public ABP_SceneInteraction_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SkySphere;
    class USceneComponent* SelectedVehicleRoot;
    class UStaticMeshComponent* SM_Hangar;
    TArray<class AActor*> DisabledPhysicsActors;
    class APawn* VehiclePawn;
    class APawn* PreviousVehiclePawn;
    bool MainVehiclesSelectionActive;
    FLinearColor ZenithColor;
    FLinearColor HorizonColor;
    class UActorComponent* ConstructedComponent;
    bool IsFreeConstruction;
    FBP_ModularVehicleDesigner_COnVehiclePreviewSpawned OnVehiclePreviewSpawned;
    void OnVehiclePreviewSpawned();

    void GetInteractionHitResult(FHitResult& HitResult);
    void Update Desired Arm Position(class UActorComponent* Component);
    void CheckMouseHover();
    void ResetConstructedComponent();
    void RemoveSelectedComponent();
    void DeselectComponent();
    void MainVehicleSelectionActive(bool IsActive);
    void UpdatePartsMaterials();
    void ClickSetupComponent(class UActorComponent* Component, int32 Index);
    void HandleAddPartSelected();
    void HandleVehiclePartSelected();
    void SelectComponent(class UActorComponent* Component, int32 Index);
    void GetSelectionRoootComponent(class USceneComponent*& SelectionRoot);
    void UpdateComponentMaterial(bool IsHovered, int32 Index, class UActorComponent* Component);
    void Clean();
    void VehicleShow();
    void EnableActorsPhysics();
    void DisableActorsPhysics();
    void RemovePreviousVehicle();
    void UpdateSceneVehicle();
    void InpActEvt_Q_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Escape_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void OnSelectedVehicleChanged();
    void OnSelectedVehiclePartChanged();
    void OnVehicleModified(int32 VehicleID);
    void Deactivate();
    void ReceiveBeginPlay();
    void Activate();
    void ExecuteUbergraph_BP_ModularVehicleDesigner(int32 EntryPoint);
    void OnVehiclePreviewSpawned__DelegateSignature();
};

#endif
