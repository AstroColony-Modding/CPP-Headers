#ifndef UE4SS_SDK_SSE_ItemBase_HPP
#define UE4SS_SDK_SSE_ItemBase_HPP

class ASSE_ItemBase_C : public AEHSSEItemBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInstancedStaticMeshComponent* IgnoredInstances;
    class UInstancedStaticMeshComponent* Instances;
    class USceneComponent* CellPosition;
    class USceneComponent* DefaultSceneRoot;
    FIntVector Range;
    EEHInstanceRotation Rotation;
    TEnumAsByte<CornerType::Type> Corner;
    FIntVector ItemCoord;
    uint8 DiagonalSize;
    class ASSE_EditorStationRoot_C* RootActorToAttach;
    FString RootToFind;
    bool ShowIgnored;
    TMap<class UEHItem*, class UInstancedStaticMeshComponent*> ISMOverrides;
    TMap<class FIntVector, class UEHItem*> ChangedPoints;
    TMap<class FIntVector, class EEHInstanceRotation> ChangedRotations;
    float GenerateDelayInterval;
    TEnumAsByte<ESplineMeshAxis::Type> IntervalAxis;
    float DelayedSpawning;
    TMap<FIntVector, float> ChangedDelayedSpawning;
    bool OverrideDefaults;
    bool ForceRemoveExisting;

    void InvertDirection();
    void GenerateTimeDelays();
    void GetDelayedSpawning(FIntVector& Point, float& Value);
    void ClearDelayed();
    void GetDebugTextHeight(float& Height);
    void GetDebugTextColor(FColor& Color);
    void ShowDelayedSpawning();
    void RemoveIgnoredIndex(TArray<FIntVector>& PointToIgnore);
    void AddIgnoredIndex(TArray<FIntVector>& PointToIgnore);
    void AssignDelayedSpawning(TArray<FIntVector>& Points, const float Value);
    void AssignRotationIndex(TArray<FIntVector>& PointToIgnore, const EEHInstanceRotation Value);
    void AssignItemIndex(TArray<FIntVector>& PointToIgnore, const class UEHItem*& AssignItem);
    void GetItemAndRotation(FIntVector& Point, class UEHItem*& Item, EEHInstanceRotation& Rotation);
    void RotateItem();
    void PostRotateAroundPoint();
    void RotateAroundPoint(FVector& PointWorldLoc);
    void Clear();
    void IsCoordRotChanged(FIntVector& Coord, bool& HasOverride, EEHInstanceRotation& RotOverride);
    void ResetRange();
    void OpenStaticMesh();
    void OpenInstanceBP();
    void IsCoordItemChanged(FIntVector& Coord, bool& HasOverride, class UEHItem*& ItemOverride);
    class UInstancedStaticMeshComponent* GetOverrideISMComponent(const class UEHItem*& Key);
    void TryFindAndAssignRoot();
    void TryAttachToEditorStationRoot(FVector& RootActorLocation);
    void GetProfession(EAIProfession& Profession);
    void Rotate(bool IsForward);
    void GetCoords(TArray<FIntVector>& Coords);
    void CreateInstances();
    void UserConstructionScript();
    void UpdateItem(class UEHItem* Item);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SSE_ItemBase(int32 EntryPoint);
};

#endif
