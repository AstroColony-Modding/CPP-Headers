#ifndef UE4SS_SDK_BP_Chunk_HPP
#define UE4SS_SDK_BP_Chunk_HPP

class ABP_Chunk_C : public AEHChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cube;
    FString DebugVoxelName;
    int32 VisualQuality;
    float FogDensity;
    TArray<class UActorComponent*> NebulaComponents;
    TArray<FNebulaEffect> NebulaEffects;

    void UpdateMaterialSettings(class UMaterialInstanceDynamic* MatInstance, FEHNebulaGeneration& NebulaGenerations);
    void CreateNebulas();
    void ShowDebugVoxels();
    void LoadStreamingPlanetoid();
    void OnChunkCreated();
    void HandleSettingsApplied();
    void ReceiveBeginPlay();
    void OnPlanetoidGenerated();
    void ExecuteUbergraph_BP_Chunk(int32 EntryPoint);
};

#endif
