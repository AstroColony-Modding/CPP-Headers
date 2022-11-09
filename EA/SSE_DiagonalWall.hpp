#ifndef UE4SS_SDK_SSE_DiagonalWall_HPP
#define UE4SS_SDK_SSE_DiagonalWall_HPP

class ASSE_DiagonalWall_C : public ASSE_ItemBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHWallItem* WallItem;
    int32 DiagonalLength;

    void ResetRange();
    void ShowDelayedSpawning();
    void GenerateTimeDelays();
    class UEHItem* GetItem();
    void PostRotateAroundPoint();
    void CreateDiagonalWalls();
    void GetCoords(TArray<FIntVector>& Coords);
    void UserConstructionScript();
    void UpdateItem(class UEHItem* Item);
    void ExecuteUbergraph_SSE_DiagonalWall(int32 EntryPoint);
};

#endif
