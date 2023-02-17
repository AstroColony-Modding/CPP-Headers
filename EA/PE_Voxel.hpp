#ifndef UE4SS_SDK_PE_Voxel_HPP
#define UE4SS_SDK_PE_Voxel_HPP

class APE_Voxel_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* Box;
    class USceneComponent* CellPosition;
    class USceneComponent* DefaultSceneRoot;
    FIntVector Range;
    FIntVector ItemCoord;
    class ASSE_EditorStationRoot_C* RootActorToAttach;
    FString RootToFind;
    float DelayedSpawning;
    bool IsAdding;

    void InvertDirection();
    void GetDebugTextHeight(float& Height);
    void GetDebugTextColor(FColor& Color);
    void ShowDelayedSpawning();
    void ResetRange();
    void TryFindAndAssignRoot();
    void TryAttachToEditorStationRoot(FVector& RootActorLocation);
    void GetBox(FIntVector& MinBox, FIntVector& MaxBox);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PE_Voxel(int32 EntryPoint);
};

#endif
