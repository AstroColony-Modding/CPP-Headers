#ifndef UE4SS_SDK_BP_Grid_HPP
#define UE4SS_SDK_BP_Grid_HPP

class ABP_Grid_C : public AEHGrid
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FName> StreamingGridsToLoad;
    bool StartSearchingPaths;
    int32 LastID;
    int32 PathsFound;
    class ABP_DebugAISpline_C* DebugAISpline;
    int32 FloorSize;
    FVector StartTest;
    FVector EndTest;
    class UEHAIObject* AITest;
    bool MoveTest;
    bool UseDebugSpline;

    void RemoveCinematicColliderBox();
    void CreateCinematicColliderBox();
    FEHIndicationConfigData GetIndicationConfigData();
    TArray<int32> GetResourceCounts();
    EVoxelTerrainType GetTerrainType();
    FVector GetMiddleOffset();
    FLinearColor GetColor();
    void AddSpecialist(const FIntVector& CellCoords, EAIProfession Profession);
    void DrawDebugAIMove();
    void DrawDebugFloorPoints();
    void DrawDebugAerialPoints();
    void DrawDebugForPath(TArray<FIntVector>& Path);
    void InpActEvt_N_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_H_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void AssetsLoaded();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_Grid(int32 EntryPoint);
};

#endif
