#ifndef UE4SS_SDK_BP_GridComponent_HPP
#define UE4SS_SDK_BP_GridComponent_HPP

class UBP_GridComponent_C : public UEHGridComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<class FName, class AEHGrid*> StreamingQueue;
    FName CurrentlyLoadingLevel;
    TArray<FIntVector> HumanSpecialitsCoords;
    TMap<class FIntVector, class EAIProfession> ProfessionsToUpdate;
    TMap<class FIntVector, class UEHSSEInitializer*> InitializersToUpdate;
    TArray<class UEHInteractableObject*> Interactable Object to Restore;
    EVoxelTerrainType GenerateTerrainType;

    void AddPEVoxel(class UObject*& PEVoxel, class ABP_PlanetoidGrid_C*& PlanetoidGrid);
    void AddPEVoxels(class AEHGrid*& Grid);
    void AddSSEItemInstance(class ASSE_ItemBase_C*& SSEItem, class AEHGrid*& Grid);
    void AddSSEInstances(class AEHGrid*& Grid);
    void AddWater(class AEHGrid*& Grid);
    void UpdateProfessions(class AEHGrid*& Grid);
    void OnAINudge(class UEHInteractableObject* InteractableObject, const FIntVector& CellCoords);
    void OnCellOpened(class UEHInteractableObject* InteractableObject);
    void LoadingSL(FName Level);
    void OnItemConstructed_Event(class UEHItem* ConstructedItem, FIntVector Coords);
    void ReceiveBeginPlay();
    void OnItemConstructionPerformed(const bool WasConstructionSuccessful);
    void OnSelectionPerformed();
    void OnRemovalPerformed();
    void GenerateStation();
    void OnLevelShown();
    void Scene01-SETUP();
    void LoadNextStreamingFromQueue();
    void OnDockingFailed(const bool DockWasTooFar);
    void OnAstronautOrderFailed(const bool ShuttleIsHere);
    void ReceiveTick(float DeltaSeconds);
    void OnCellsUpgraded(const bool UpgradeSuccessful, const TArray<FEHItemInstance>& FailedCost);
    void OnOxygenRefilled(const bool OxygenRefillSuccessful);
    void OnCellsRemoved(const bool RemoveSuccessful);
    void LoadStreamingLevel(class AEHGrid* StreamingGrid, const FName StreamingGridName);
    void ExecuteUbergraph_BP_GridComponent(int32 EntryPoint);
};

#endif
