#ifndef UE4SS_SDK_BP_PlanetoidGrid_HPP
#define UE4SS_SDK_BP_PlanetoidGrid_HPP

class ABP_PlanetoidGrid_C : public AEHPlanetoidGrid
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 FloorSize;
    bool UseDebugSpline;
    class ABP_DebugAISpline_C* DebugAISpline;
    bool IsDebugPlanetoid;
    TArray<class UDestructibleComponent*> DeactivatedDestructibles;
    FIntVector Int Vector;

    void Debug_GenerateCoord(const FIntVector& InputPin);
    void LineTraceTest();
    void DrawDebugAIMove();
    void DrawDebugBlockPoints();
    void DrawDebugAerialPoints();
    void DrawDebugWalkableRamps();
    void DrawDebugSurfacePoints();
    void DrawDebugForPath(TArray<FIntVector>& Path);
    FEHIndicationConfigData GetIndicationConfigData();
    void TestPlnaetoidSurface();
    void Spawn DestructibleOld(FVector& position, const FVoxelTerrainDigData& DigData);
    void InpActEvt_Y_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_B_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_N_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_H_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void OnDebugPlanetoidCoordGenerate(const FIntVector& Coord);
    void TraceHeightFound(const FVector& ImpactPoint);
    void UpdateLoc(FVector Location);
    void ExecuteUbergraph_BP_PlanetoidGrid(int32 EntryPoint);
};

#endif
