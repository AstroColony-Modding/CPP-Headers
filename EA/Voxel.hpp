#ifndef UE4SS_SDK_Voxel_HPP
#define UE4SS_SDK_Voxel_HPP

#include "Voxel_enums.hpp"

class UVoxelSubsystemProxy : public UObject
{
};

class UVoxelStaticSubsystemProxy : public UVoxelSubsystemProxy
{
};

class UVoxelSpawnerSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

class UAssetActorPrimitiveComponent : public UPrimitiveComponent
{
};

class AVoxelPlaceableItemActor : public AActor
{
    class AVoxelWorld* PreviewWorld;
    bool bOnlyImportIntoPreviewWorld;

    int32 K2_GetPriority();
    void K2_AddItemToWorld(class AVoxelWorld* World);
};

struct FVoxelTransformableGeneratorPicker
{
    EVoxelGeneratorPickerType Type;
    TSubclassOf<class UVoxelTransformableGenerator> Class;
    class UVoxelTransformableGenerator* Object;
    TMap<class FName, class FString> Parameters;

};

struct FVoxelIntBox
{
    FIntVector Min;
    FIntVector Max;

};

class AVoxelAssetActor : public AVoxelPlaceableItemActor
{
    FVoxelTransformableGeneratorPicker Generator;
    int32 Priority;
    bool bOverrideAssetBounds;
    FVoxelIntBox AssetBounds;
    bool bImportAsReference;
    bool bSubtractiveAsset;
    EVoxelAssetMergeMode MergeMode;
    bool bSpawnNewVoxelWorld;
    bool bSimulatePhysics;
    int32 PreviewLOD;
    EVoxelAssetActorPreviewUpdateType UpdateType;
    bool bRoundAssetPosition;
    bool bRoundAssetRotation;
    uint32 MaxPreviewChunks;
    class USceneComponent* Root;

};

struct FVoxelMaterial
{
};

struct FVoxelAssetItemReference
{
};

struct FVoxelDisableEditsBoxItemReference
{
};

class UVoxelAssetTools : public UBlueprintFunctionLibrary
{

    void SetDataAssetMaterial(class UVoxelDataAsset* Asset, class UVoxelDataAsset*& NewAsset, FVoxelMaterial Material);
    void InvertDataAsset(class UVoxelDataAsset* Asset, class UVoxelDataAsset*& InvertedAsset);
    void ImportModifierAssetAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    void ImportModifierAsset(class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace);
    void ImportDataAssetFastAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, class UVoxelDataAsset* Asset, FVector position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    void ImportDataAssetFast(class AVoxelWorld* World, class UVoxelDataAsset* Asset, FVector position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace);
    void ImportAssetAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    void ImportAssetAsReferenceAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelAssetItemReference& Reference, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, int32 Priority, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void ImportAssetAsReference(FVoxelAssetItemReference& Reference, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, int32 Priority, bool bConvertToVoxelSpace, bool bUpdateRender);
    void ImportAsset(class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace);
    class UVoxelDataAsset* CreateDataAssetFromWorldSection(class AVoxelWorld* World, FVoxelIntBox Bounds, bool bCopyMaterials);
    void AddDisableEditsBoxAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelDisableEditsBoxItemReference& Reference, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void AddDisableEditsBox(FVoxelDisableEditsBoxItemReference& Reference, class AVoxelWorld* World, FVoxelIntBox Bounds);
};

class UVoxelMaterialCollectionBase : public UObject
{

    class UMaterialInterface* GetIndexMaterial(uint8 Index);
};

struct FVoxelBasicMaterialCollectionLayer
{
    uint8 LayerIndex;
    class UMaterialInterface* LayerMaterial;

};

class UVoxelBasicMaterialCollection : public UVoxelMaterialCollectionBase
{
    TArray<FVoxelBasicMaterialCollectionLayer> Layers;

};

struct FVoxelToolRenderingRef
{
};

struct FVoxelSpawnersSave
{
};

struct FVoxelTextureStructBase
{
    uint64 ID;

};

struct FVoxelFloatTexture : public FVoxelTextureStructBase
{
};

struct FVoxelColorTexture : public FVoxelTextureStructBase
{
};

struct FVoxelPaintMaterialUV
{
    int32 Channel;
    FVector2D UV;
    bool bPaintU;
    bool bPaintV;

};

struct FVoxelPaintMaterialColor
{
    bool bUseLinearColor;
    FLinearColor LinearColor;
    FColor Color;
    bool bPaintR;
    bool bPaintG;
    bool bPaintB;
    bool bPaintA;

};

struct FVoxelPaintMaterial_MaterialCollectionChannel
{
    uint8 Channel;

};

struct FVoxelPaintMaterialSingleIndex
{
    FVoxelPaintMaterial_MaterialCollectionChannel Channel;

};

struct FVoxelPaintMaterialMultiIndex
{
    FVoxelPaintMaterial_MaterialCollectionChannel Channel;
    float TargetValue;
    TArray<FVoxelPaintMaterial_MaterialCollectionChannel> LockedChannels;

};

struct FVoxelPaintMaterialMultiIndexWetness
{
    float TargetValue;

};

struct FVoxelPaintMaterialMultiIndexRaw
{
    FVoxelPaintMaterial_MaterialCollectionChannel Channel0;
    float Strength0;
    FVoxelPaintMaterial_MaterialCollectionChannel Channel1;
    float Strength1;
    FVoxelPaintMaterial_MaterialCollectionChannel Channel2;
    float Strength2;
    FVoxelPaintMaterial_MaterialCollectionChannel Channel3;
    float Strength3;

};

struct FVoxelPaintMaterialFiveWayBlend
{
    int32 Channel;
    float TargetValue;
    TArray<uint8> LockedChannels;
    bool bFourWayBlend;

};

struct FVoxelPaintMaterial
{
    EVoxelPaintMaterialType Type;
    FVoxelPaintMaterialColor Color;
    FVoxelPaintMaterialSingleIndex SingleIndex;
    FVoxelPaintMaterialMultiIndex MultiIndex;
    FVoxelPaintMaterialMultiIndexWetness MultiIndexWetness;
    FVoxelPaintMaterialMultiIndexRaw MultiIndexRaw;
    FVoxelPaintMaterialUV UV;
    FVoxelPaintMaterialFiveWayBlend FiveWayBlend;

};

struct FVoxelInt32Interval
{
    int32 Min;
    int32 Max;

};

struct FVoxelInstancedMeshSettings
{
    FVoxelInt32Interval CullDistance;
    bool bCastShadow;
    bool bAffectDynamicIndirectLighting;
    bool bAffectDistanceFieldLighting;
    bool bCastShadowAsTwoSided;
    bool bReceivesDecals;
    bool bUseAsOccluder;
    FBodyInstance BodyInstance;
    TEnumAsByte<EHasCustomNavigableGeometry::Type> CustomNavigableGeometry;
    FLightingChannels LightingChannels;
    bool bRenderCustomDepth;
    int32 CustomDepthStencilValue;
    float BuildDelay;
    TSubclassOf<class UVoxelHierarchicalInstancedStaticMeshComponent> HISMTemplate;

};

struct FVoxelSpawnerActorSettings
{
    TSubclassOf<class AVoxelSpawnerActor> ActorClass;
    FBodyInstance BodyInstance;
    float LifeSpan;

};

class UVoxelBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UpdatePosition(class AVoxelWorld* World, FIntVector position);
    void UpdateBounds(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void UpdateAll(class AVoxelWorld* World);
    bool Undo(class AVoxelWorld* World, TArray<FVoxelIntBox>& OutUpdatedBounds);
    FBox TransformVoxelBoxToGlobalBox(class AVoxelWorld* World, FVoxelIntBox Box);
    FVoxelIntBox TransformGlobalBoxToVoxelBox(class AVoxelWorld* World, FBox Box);
    FIntVector Substract_IntVectorIntVector(FIntVector Left, FIntVector Right);
    void SpawnVoxelSpawnerActorsInArea(TArray<class AVoxelSpawnerActor*>& OutActors, class AVoxelWorld* World, FVoxelIntBox Bounds, EVoxelSpawnerActorSpawnType SpawnType);
    class AVoxelSpawnerActor* SpawnVoxelSpawnerActorByInstanceIndex(class AVoxelWorld* World, class UVoxelHierarchicalInstancedStaticMeshComponent* Component, int32 InstanceIndex);
    void SetToolRenderingMaterial(class AVoxelWorld* World, FVoxelToolRenderingRef Ref, class UMaterialInterface* Material);
    void SetToolRenderingEnabled(class AVoxelWorld* World, FVoxelToolRenderingRef Ref, bool bEnabled);
    void SetToolRenderingBounds(class AVoxelWorld* World, FVoxelToolRenderingRef Ref, FBox Bounds);
    void SetNumberOfVoxelThreads(int32 Number);
    void ScaleData(class AVoxelWorld* World, const FVector& Scale);
    void SaveFrame(class AVoxelWorld* World);
    void RegenerateSpawners(class AVoxelWorld* World, FVoxelIntBox Bounds);
    bool Redo(class AVoxelWorld* World, TArray<FVoxelIntBox>& OutUpdatedBounds);
    void RecreateSpawners(class AVoxelWorld* World);
    void RecreateRender(class AVoxelWorld* World);
    void Recreate(class AVoxelWorld* World, bool bSaveData);
    void RaiseWarning(FString Message, class UObject* Object);
    void RaiseInfo(FString Message, class UObject* Object);
    void RaiseError(FString Message, class UObject* Object);
    int32 NumberOfCores();
    FIntVector Multiply_IntVectorIntVector(FIntVector Left, FIntVector Right);
    FIntVector Multiply_IntVectorInt(FIntVector Left, int32 Right);
    FIntVector Multiply_IntIntVector(int32 Left, FIntVector Right);
    void MarkSpawnersDirty(class AVoxelWorld* World, FVoxelIntBox Bounds);
    FVoxelMaterial MakeRawMaterial(uint8 R, uint8 G, uint8 B, uint8 A, uint8 U0, uint8 V0, uint8 U1, uint8 v1, uint8 U2, uint8 v2, uint8 U3, uint8 V3);
    int32 MakeMaterialMask(bool R, bool G, bool B, bool A, bool U0, bool V0, bool U1, bool v1, bool U2, bool v2, bool U3, bool V3);
    FVoxelIntBox MakeIntBoxFromGlobalPositionAndRadius(class AVoxelWorld* World, FVector GlobalPosition, float Radius);
    void LogMemoryStats();
    void LoadFromSpawnersSave(class AVoxelWorld* World, const FVoxelSpawnersSave& SAVE);
    bool IsVoxelWorldMeshLoading(class AVoxelWorld* World);
    bool IsVoxelWorldFoliageLoading(class AVoxelWorld* World);
    bool IsVoxelPluginPro();
    bool IsVoxelFloatTextureValid(FVoxelFloatTexture Texture);
    bool IsVoxelColorTextureValid(FVoxelFloatTexture Texture);
    bool IsValidRef(class AVoxelWorld* World, FVoxelToolRenderingRef Ref);
    bool HasValueData(class AVoxelWorld* World);
    bool HasMaterialData(class AVoxelWorld* World);
    class AVoxelWorld* GetVoxelWorldOverlappingBox(class UObject* WorldContextObject, FBox Box);
    class AVoxelWorld* GetVoxelWorldOverlappingActor(class AActor* Actor);
    class AVoxelWorld* GetVoxelWorldContainingPosition(class UObject* WorldContextObject, FVector position);
    FIntPoint GetVoxelFloatTextureSize(FVoxelFloatTexture Texture);
    FIntPoint GetVoxelColorTextureSize(FVoxelColorTexture Texture);
    FVector2D GetUV(FVoxelMaterial Material, int32 Channel);
    int32 GetTaskCount(class AVoxelWorld* World);
    FVoxelSpawnersSave GetSpawnersSave(class AVoxelWorld* World);
    uint8 GetSingleIndex(FVoxelMaterial Material);
    FVoxelIntBox GetRenderBoundsOverlappingDataBounds(class AVoxelWorld* World, FVoxelIntBox DataBounds, int32 LOD);
    void GetRawMaterial(FVoxelMaterial Material, uint8& R, uint8& G, uint8& B, uint8& A, uint8& U0, uint8& V0, uint8& U1, uint8& v1, uint8& U2, uint8& v2, uint8& U3, uint8& V3);
    float GetPeakMemoryUsageInMB(EVoxelMemoryUsageType Type);
    int32 GetNumberOfVoxelThreads();
    FVector GetNormal(class AVoxelWorld* World, FIntVector position);
    void GetMultiIndex(FVoxelMaterial Material, bool bSortByStrength, float& Strength0, uint8& Index0, float& Strength1, uint8& Index1, float& Strength2, uint8& Index2, float& Strength3, uint8& Index3, float& Wetness);
    int32 GetMin_Intvector(FIntVector Vector);
    float GetMemoryUsageInMB(EVoxelMemoryUsageType Type);
    int32 GetMax_Intvector(FIntVector Vector);
    int32 GetIntOutput(class AVoxelWorld* World, FName Name, float X, float Y, float Z, int32 DefaultValue);
    int32 GetHistoryPosition(class AVoxelWorld* World);
    float GetFloatOutput(class AVoxelWorld* World, FName Name, float X, float Y, float Z, float DefaultValue);
    float GetEstimatedCollisionsMemoryUsageInMB(class AVoxelWorld* World);
    FLinearColor GetColor(FVoxelMaterial Material);
    FVoxelIntBox GetBounds(class AVoxelWorld* World);
    TArray<class AVoxelWorld*> GetAllVoxelWorldsOverlappingBox(class UObject* WorldContextObject, FBox Box);
    TArray<class AVoxelWorld*> GetAllVoxelWorldsOverlappingActor(class AActor* Actor);
    TArray<class AVoxelWorld*> GetAllVoxelWorldsContainingPosition(class UObject* WorldContextObject, FVector position);
    FIntVector Divide_IntVectorInt(FIntVector Left, int32 Right);
    void DestroyToolRendering(class AVoxelWorld* World, FVoxelToolRenderingRef Ref);
    FVoxelFloatTexture CreateVoxelFloatTextureFromTextureChannel(class UTexture2D* Texture, EVoxelRGBA Channel);
    FVoxelColorTexture CreateVoxelColorTextureFromVoxelFloatTexture(FVoxelFloatTexture Texture, EVoxelRGBA Channel, bool bNormalize);
    FVoxelPaintMaterial CreateUVPaintMaterial(FVoxelPaintMaterialUV UV);
    FVoxelToolRenderingRef CreateToolRendering(class AVoxelWorld* World);
    class UTexture2D* CreateTextureFromVoxelFloatTexture(FVoxelFloatTexture VoxelTexture);
    class UTexture2D* CreateTextureFromVoxelColorTexture(FVoxelColorTexture VoxelTexture);
    FVoxelPaintMaterial CreateSingleIndexPaintMaterial(FVoxelPaintMaterialSingleIndex SingleIndex);
    class UTexture2D* CreateOrUpdateTextureFromVoxelFloatTexture(FVoxelFloatTexture VoxelTexture, class UTexture2D*& Texture);
    class UTexture2D* CreateOrUpdateTextureFromVoxelColorTexture(FVoxelColorTexture VoxelTexture, class UTexture2D*& Texture);
    FVoxelPaintMaterial CreateMultiIndexWetnessPaintMaterial(float WetnessValue);
    FVoxelPaintMaterial CreateMultiIndexRawPaintMaterial(FVoxelPaintMaterialMultiIndexRaw MultiIndexRaw);
    FVoxelPaintMaterial CreateMultiIndexPaintMaterial(FVoxelPaintMaterialMultiIndex MultiIndex);
    FVoxelPaintMaterial CreateFiveWayBlendPaintMaterial(FVoxelPaintMaterialFiveWayBlend FiveWayBlend);
    FVoxelPaintMaterial CreateColorPaintMaterial(FVoxelPaintMaterialColor Color);
    bool Compare_IntVectorIntVector(FIntVector Left, FIntVector Right);
    void CompactVoxelTexturePool(class AVoxelWorld* World);
    void ClearValueData(class AVoxelWorld* World, bool bUpdateRender);
    void ClearMaterialData(class AVoxelWorld* World, bool bUpdateRender);
    void ClearFrames(class AVoxelWorld* World);
    void ClearDirtyData(class AVoxelWorld* World, bool bUpdateRender);
    void ClearAllData(class AVoxelWorld* World, bool bUpdateRender);
    void BindVoxelGenerationEvent(class AVoxelWorld* World, FBindVoxelGenerationEventOnGenerate OnGenerate, bool bFireExistingOnes, int32 ChunkSize, int32 GenerationDistanceInChunks);
    void BindVoxelChunkEvents(class AVoxelWorld* World, FBindVoxelChunkEventsOnActivate OnActivate, FBindVoxelChunkEventsOnDeactivate OnDeactivate, bool bFireExistingOnes, int32 ChunkSize, int32 ActivationDistanceInChunks);
    bool AreCollisionsEnabled(class AVoxelWorld* World, FVector position, int32& LOD, bool bConvertToVoxelSpace);
    FVoxelMaterial ApplyPaintMaterial(FVoxelMaterial Material, FVoxelPaintMaterial PaintMaterial, float Strength);
    void ApplyNewMaterials(class AVoxelWorld* World);
    void ApplyLODSettings(class AVoxelWorld* World);
    void AddNeighborsToSet(const TSet<FIntVector>& InSet, TSet<FIntVector>& OutSet);
    void AddInstances(class AVoxelWorld* World, class UStaticMesh* Mesh, const TArray<FTransform>& Transforms, const TArray<FLinearColor>& Colors, FVoxelInstancedMeshSettings InstanceSettings, FVoxelSpawnerActorSettings ActorSettings, FVector FloatingDetectionOffset);
    FIntVector Add_IntVectorIntVector(FIntVector Left, FIntVector Right);
};

struct FModifiedVoxelValue
{
    FIntVector position;
    float OldValue;
    float NewValue;

};

struct FModifiedVoxelMaterial
{
    FIntVector position;
    FVoxelMaterial OldMaterial;
    FVoxelMaterial NewMaterial;

};

class UVoxelToolsBase : public UBlueprintFunctionLibrary
{

    FVoxelIntBox GetModifiedVoxelValuesBounds(const TArray<FModifiedVoxelValue>& ModifiedVoxels);
    FVoxelIntBox GetModifiedVoxelMaterialsBounds(const TArray<FModifiedVoxelMaterial>& ModifiedVoxels);
};

class UVoxelBoxTools : public UVoxelToolsBase
{

    void SetValueBoxAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, float Value, const TArray<FIntVector>& IgnoredPos, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    void SetValueBox(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
    void SetMaterialBoxAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, const FVoxelPaintMaterial& PaintMaterial, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
    void SetMaterialBox(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, const FVoxelPaintMaterial& PaintMaterial, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
    void RemoveBoxAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    void RemoveBox(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
    void AddBoxAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    void AddBox(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
};

struct FVoxelMaterialIndices
{
};

class UVoxelCachedMaterialCollection : public UVoxelMaterialCollectionBase
{
    TMap<class FVoxelMaterialIndices, class UMaterialInterface*> CachedMaterials;

};

class AVoxelCharacter : public ACharacter
{
};

struct FVoxelGeneratorPicker
{
    EVoxelGeneratorPickerType Type;
    TSubclassOf<class UVoxelGenerator> Class;
    class UVoxelGenerator* Object;
    TMap<class FName, class FString> Parameters;

};

struct FVoxelCookingSettings
{
    int32 RenderOctreeDepth;
    float VoxelSize;
    EVoxelRenderType RenderType;
    FVoxelGeneratorPicker Generator;
    bool bLogProgress;
    bool bFastCollisionCook;
    bool bCleanCollisionMesh;

};

struct FVoxelCookedData
{
};

struct FVoxelObjectArchiveEntry
{
    TSoftObjectPtr<UObject> Object;
    int32 Index;

};

struct FVoxelUncompressedWorldSave
{
    TArray<FVoxelObjectArchiveEntry> Objects;

};

class UVoxelCookingLibrary : public UBlueprintFunctionLibrary
{

    FVoxelCookingSettings MakeVoxelCookingSettingsFromVoxelWorld(class AVoxelWorld* World);
    void LoadCookedVoxelData(FVoxelCookedData CookedData, class AVoxelWorld* World);
    FVoxelCookedData CookVoxelDataWithSave(FVoxelCookingSettings Settings, FVoxelUncompressedWorldSave SAVE);
    FVoxelCookedData CookVoxelData(FVoxelCookingSettings Settings);
};

class UVoxelGenerator : public UObject
{
};

class UVoxelTransformableGenerator : public UVoxelGenerator
{
};

class UVoxelTransformableGeneratorWithBounds : public UVoxelTransformableGenerator
{
};

struct FVoxelDataAssetImportSettings_MagicaVox
{
    bool bUsePalette;
    int32 ModelIndex;

};

class UVoxelDataAsset : public UVoxelTransformableGeneratorWithBounds
{
    bool bSubtractiveAsset;
    FIntVector PositionOffset;
    float Tolerance;
    FIntVector Size;
    float UncompressedSizeInMB;
    float CompressedSizeInMB;
    EVoxelDataAssetImportSource Source;
    TArray<FString> Paths;
    FVoxelDataAssetImportSettings_MagicaVox ImportSettings_MagicaVox;
    int32 VoxelCustomVersion;
    uint32 ValueConfigFlag;
    uint32 MaterialConfigFlag;

    FIntVector GetSize();
    FVoxelIntBox GetBounds();
};

class AVoxelDataItemActor : public AActor
{
    bool bAutomaticUpdates;
    float RefreshDelay;

    void ScheduleRefresh();
    void K2_AddItemToWorld(class AVoxelWorld* World);
};

class UVoxelDataSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

struct FVoxelCompressedWorldSave
{
    TArray<FVoxelObjectArchiveEntry> Objects;

};

struct FVoxelValueMaterial
{
    FIntVector position;
    float Value;
    FVoxelMaterial Material;

};

struct FVoxelDataMemoryUsageInMB
{
    float DirtyValues;
    float CachedValues;
    float DirtyMaterials;
    float CachedMaterials;

};

struct FVoxelFindClosestNonEmptyVoxelResult
{
    bool bSuccess;
    FIntVector position;
    float Value;
    FVoxelMaterial Material;

};

class UVoxelDataTools : public UBlueprintFunctionLibrary
{

    void SetValueAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FIntVector position, float Value, bool bHideLatentWarnings);
    void SetValue(class AVoxelWorld* World, FIntVector position, float Value);
    void SetMaterialAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FIntVector position, FVoxelMaterial Material, bool bHideLatentWarnings);
    void SetMaterial(class AVoxelWorld* World, FIntVector position, FVoxelMaterial Material);
    void SetBoxAsDirtyAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bDirtyValues, bool bDirtyMaterials, bool bHideLatentWarnings);
    void SetBoxAsDirty(class AVoxelWorld* World, FVoxelIntBox Bounds, bool bDirtyValues, bool bDirtyMaterials);
    void RoundVoxelsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void RoundVoxels(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void RoundToGeneratorAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bPreserveNormals, bool bHideLatentWarnings);
    void RoundToGenerator(class AVoxelWorld* World, FVoxelIntBox Bounds, bool bPreserveNormals);
    bool LoadFromSave(const class AVoxelWorld* World, const FVoxelUncompressedWorldSave& SAVE);
    bool LoadFromCompressedSave(const class AVoxelWorld* World, const FVoxelCompressedWorldSave& SAVE);
    void GetVoxelsValueAndMaterialAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVoxelValueMaterial>& Voxels, class AVoxelWorld* World, const TArray<FIntVector>& Positions, bool bHideLatentWarnings);
    void GetVoxelsValueAndMaterial(TArray<FVoxelValueMaterial>& Voxels, class AVoxelWorld* World, const TArray<FIntVector>& Positions);
    void GetValueAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, float& Value, class AVoxelWorld* World, FIntVector position, bool bHideLatentWarnings);
    void GetValue(float& Value, class AVoxelWorld* World, FIntVector position);
    void GetSaveAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelUncompressedWorldSave& OutSave, bool bHideLatentWarnings);
    void GetSave(class AVoxelWorld* World, FVoxelUncompressedWorldSave& OutSave);
    void GetMaterialAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelMaterial& Material, class AVoxelWorld* World, FIntVector position, bool bHideLatentWarnings);
    void GetMaterial(FVoxelMaterial& Material, class AVoxelWorld* World, FIntVector position);
    void GetInterpolatedValue(float& Value, class AVoxelWorld* World, FVector position);
    FVoxelDataMemoryUsageInMB GetDataMemoryUsageInMB(class AVoxelWorld* World);
    void GetCompressedSaveAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelCompressedWorldSave& OutSave, bool bHideLatentWarnings);
    void GetCompressedSave(class AVoxelWorld* World, FVoxelCompressedWorldSave& OutSave);
    void FindHeightVoxel(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FIntVector>& Coords, class AVoxelWorld* World, const FIntVector& VoxelSize, bool bHideLatentWarnings);
    void FindClosestNonEmptyVoxelAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelFindClosestNonEmptyVoxelResult& Result, class AVoxelWorld* World, FVector position, bool bReadMaterial, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    void FindClosestNonEmptyVoxel(FVoxelFindClosestNonEmptyVoxelResult& Result, class AVoxelWorld* World, FVector position, bool bReadMaterial, bool bConvertToVoxelSpace);
    void CompressIntoHeightmap(class AVoxelWorld* World, class UVoxelHeightmapAsset* HeightmapAsset, bool bHeightmapAssetMatchesWorld);
    void ClearUnusedMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void ClearUnusedMaterials(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void ClearCachedValuesAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void ClearCachedValues(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void ClearCachedMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void ClearCachedMaterials(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void CheckIfSameAsGeneratorAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void CheckIfSameAsGenerator(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void CheckForSingleValuesAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void CheckForSingleValues(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void CheckForSingleMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void CheckForSingleMaterials(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void CacheValuesAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void CacheValues(class AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded);
    void CacheMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void CacheMaterials(class AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded);
};

class UVoxelDebugSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

class UVoxelDebugUtilities : public UBlueprintFunctionLibrary
{

    void DrawDebugIntBox(class AVoxelWorld* World, FVoxelIntBox Bounds, FTransform Transform, float LifeTime, float Thickness, FLinearColor Color);
    void DrawDataOctree(class AVoxelWorld* World, EVoxelDataType DataType, float LifeTime, bool bShowSingle, bool bShowCached, FColor SingleColor, FColor SingleDirtyColor, FColor CachedColor, FColor DirtyColor);
    void DebugVoxelsInsideBounds(class AVoxelWorld* World, FVoxelIntBox Bounds, FLinearColor Color, float LifeTime, float Thickness, bool bDebugDensities, FLinearColor TextColor);
};

class UVoxelDynamicSubsystemProxy : public UVoxelSubsystemProxy
{
};

class UVoxelLODSubsystemProxy : public UVoxelDynamicSubsystemProxy
{
};

class UVoxelDefaultLODSubsystemProxy : public UVoxelLODSubsystemProxy
{
};

class UVoxelRendererSubsystemProxy : public UVoxelDynamicSubsystemProxy
{
};

class UVoxelDefaultRendererSubsystemProxy : public UVoxelRendererSubsystemProxy
{
};

class AVoxelDisableEditsBox : public AVoxelPlaceableItemActor
{
    class UBoxComponent* Box;

};

class UVoxelEmptyGenerator : public UVoxelTransformableGenerator
{
};

class UVoxelErosion : public UObject
{
    int32 Size;
    float DeltaTime;
    float Scale;
    float Gravity;
    float SedimentCapacity;
    float SedimentDissolving;
    float SedimentDeposition;
    float RainStrength;
    float Evaporation;
    FVoxelFloatTexture RainMapInit;
    FVoxelFloatTexture HeightmapInit;

    void Step(int32 Count);
    bool IsInitialized();
    void Initialize();
    FVoxelFloatTexture GetWaterHeightTexture();
    FVoxelFloatTexture GetTerrainHeightTexture();
    FVoxelFloatTexture GetSedimentTexture();
};

class UVoxelEventSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

class UVoxelFixedResolutionLODSubsystemProxy : public UVoxelLODSubsystemProxy
{
};

struct FVoxelFlatGeneratorDataItemConfig
{
    float Smoothness;
    int32 Mask;
    bool bSubtractItems;

};

class UVoxelFlatGenerator : public UVoxelGenerator
{
    FLinearColor Color;
    TArray<FVoxelFlatGeneratorDataItemConfig> DataItemConfigs;

};

struct FVoxelToolTickData
{
    FVector2D MousePosition;
    FVector CameraViewDirection;
    bool bEdit;
    TMap<class FName, class bool> Keys;
    TMap<FName, float> Axes;
    TEnumAsByte<ECollisionChannel> CollisionChannel;

};

class UVoxelTool : public UObject
{
    FName ToolName;
    FText ToolTip;
    bool bShowInDropdown;
    bool bShowPaintMaterial;
    class UVoxelToolSharedConfig* SharedConfig;
    bool bEnabled;
    FVoxelToolTickData FrozenTickData;

    FVoxelToolTickData MakeVoxelToolTickData(class APlayerController* PlayerController, bool bEdit, const TMap<class FName, class bool>& Keys, const TMap<FName, float>& Axes, FVector2D MousePosition, FVector CameraDirection, TEnumAsByte<ECollisionChannel> CollisionChannel);
    class UVoxelTool* MakeVoxelTool(TSubclassOf<class UVoxelTool> ToolClass);
    TMap<class FName, class bool> MakeToolKeys(bool bAlternativeMode);
    TMap<FName, float> MakeToolAxes(float BrushSizeDelta, float FalloffDelta, float StrengthDelta);
    void K2_SimpleTick(class APlayerController* PlayerController, bool bEdit, const TMap<class FName, class bool>& Keys, const TMap<FName, float>& Axes, const FK2_SimpleTickDoEditOverride& DoEditOverride, TEnumAsByte<ECollisionChannel> CollisionChannel);
    void K2_AdvancedTick(class UObject* WorldContextObject, const FVoxelToolTickData& TickData, const FK2_AdvancedTickDoEditOverride& DoEditOverride);
    bool IsKeyDown(FVoxelToolTickData TickData, FName Key);
    bool IsAlternativeMode(FVoxelToolTickData TickData);
    class AVoxelWorld* GetVoxelWorld();
    FName GetToolName();
    FVector GetRayOrigin(FVoxelToolTickData TickData);
    FVector GetRayDirection(FVoxelToolTickData TickData);
    float GetAxis(FVoxelToolTickData TickData, FName Axis);
    void EnableTool();
    void DoEditDynamicOverride__DelegateSignature(FVector position, FVector Normal);
    void DisableTool();
    bool Deproject(FVoxelToolTickData TickData, FVector2D ScreenPosition, FVector& WorldPosition, FVector& WorldDirection);
    void Apply(class AVoxelWorld* World, FVector position, FVector Normal, const TMap<class FName, class bool>& Keys, const TMap<FName, float>& Axes);
};

struct FVoxelToolBaseConfig
{
    class UMaterialInterface* OverlayMaterial;
    class UMaterialInterface* MeshMaterial;
    float Stride;
    bool bUseFixedDirection;
    FRotator FixedDirection;
    bool bUseFixedNormal;
    FVector FixedNormal;
    bool bHasAlignment;
    EVoxelToolAlignment Alignment;
    bool bAirMode;
    float DistanceToCamera;
    bool bShowPlanePreview;

};

struct FVoxelIntBoxWithValidity
{
    FVoxelIntBox Box;
    bool bValid;

};

class UVoxelToolBase : public UVoxelTool
{
    class AVoxelWorld* VoxelWorld;
    class UMaterialInstanceDynamic* ToolOverlayMaterialInstance;
    class UMaterialInstanceDynamic* ToolMeshMaterialInstance;
    class UMaterialInstanceDynamic* PlaneMeshMaterialInstance;

    void UpdateToolMesh(class UStaticMesh* Mesh, class UMaterialInterface* Material, const FTransform& Transform, FName ID);
    void SetToolOverlayBounds(const FBox& Bounds);
    bool LastFrameCanEdit();
    void K2_UpdateRender(class UMaterialInstanceDynamic* OverlayMaterialInstance, class UMaterialInstanceDynamic* MeshMaterialInstance);
    void K2_Tick();
    void K2_GetToolConfig(FVoxelToolBaseConfig InConfig, FVoxelToolBaseConfig& OutConfig);
    FVoxelIntBoxWithValidity K2_DoEdit();
    float GetValueAfterAxisInput(FName AxisName, float CurrentValue, float Min, float Max);
    FVector GetToolPreviewPosition();
    FVector GetToolPosition();
    FVector GetToolNormal();
    FVector GetToolDirection();
    FVoxelToolTickData GetTickData();
    float GetMouseMovementSize();
    FVoxelToolTickData GetLastFrameTickData();
    float GetDeltaTime();
    FVoxelIntBox GetBoundsToCache(const FVoxelIntBox& Bounds);
    bool CanEdit();
};

class UVoxelFlattenTool : public UVoxelToolBase
{
    class UMaterialInterface* ToolMaterial;
    float Strength;
    bool bFreezeOnClick;
    bool bUseAverage;
    bool bUseFixedRotation;
    FRotator FixedRotation;
    bool bPropagateMaterials;
    bool bEnableFalloff;
    EVoxelFalloff FalloffType;
    float Falloff;

};

class UVoxelGeneratorCacheSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

class UVoxelGeneratorCache : public UObject
{

    class UVoxelTransformableGeneratorInstanceWrapper* MakeTransformableGeneratorInstance(FVoxelTransformableGeneratorPicker Picker);
    class UVoxelGeneratorInstanceWrapper* MakeGeneratorInstance(FVoxelGeneratorPicker Picker);
};

class UVoxelGeneratorInstanceWrapper : public UObject
{

    bool IsValid();
};

class UVoxelTransformableGeneratorInstanceWrapper : public UObject
{

    bool IsValid();
};

struct FVoxelGeneratorInit
{
    float VoxelSize;
    int32 WorldSize;
    EVoxelRenderType RenderType;
    EVoxelMaterialConfig MaterialConfig;
    class UVoxelMaterialCollectionBase* MaterialCollection;
    TWeakObjectPtr<class AVoxelWorld> World;

};

class UVoxelGeneratorTools : public UBlueprintFunctionLibrary
{

    bool SetTransformableGeneratorParameter(const FVoxelTransformableGeneratorPicker& Picker, FName UniqueName, int32 Value);
    bool SetGeneratorParameter(const FVoxelGeneratorPicker& Picker, FName UniqueName, int32 Value);
    FVoxelTransformableGeneratorPicker MakeTransformableGeneratorPickerFromObject(class UVoxelTransformableGenerator* Generator);
    FVoxelTransformableGeneratorPicker MakeTransformableGeneratorPickerFromClass(TSubclassOf<class UVoxelTransformableGenerator> GeneratorClass);
    class UVoxelTransformableGeneratorInstanceWrapper* MakeTransformableGeneratorInstance(FVoxelTransformableGeneratorPicker GeneratorPicker, FVoxelGeneratorInit GeneratorInit);
    FVoxelGeneratorPicker MakeGeneratorPickerFromObject(class UVoxelGenerator* Generator);
    FVoxelGeneratorPicker MakeGeneratorPickerFromClass(TSubclassOf<class UVoxelGenerator> GeneratorClass);
    class UVoxelGeneratorInstanceWrapper* MakeGeneratorInstance(FVoxelGeneratorPicker GeneratorPicker, FVoxelGeneratorInit GeneratorInit);
    bool IsValid_TransformableGeneratorPicker(FVoxelTransformableGeneratorPicker GeneratorPicker);
    bool IsValid_GeneratorPicker(FVoxelGeneratorPicker GeneratorPicker);
    void CreateFloatTextureFromGeneratorAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelFloatTexture& OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY, bool bHideLatentWarnings);
    void CreateFloatTextureFromGenerator(FVoxelFloatTexture& OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY);
    void CreateColorTextureFromGeneratorAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelColorTexture& OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY, bool bHideLatentWarnings);
    void CreateColorTextureFromGenerator(FVoxelColorTexture& OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY);
};

class UVoxelHeightmapAsset : public UVoxelTransformableGeneratorWithBounds
{
    float Scale;
    float HeightScale;
    float HeightOffset;
    bool bInfiniteExtent;
    float AdditionalThickness;
    float Precision;
    int32 Width;
    int32 Height;
    int32 VoxelCustomVersion;
    uint32 MaterialConfigFlag;

    int32 GetWidth();
    int32 GetHeight();
};

class UVoxelHeightmapAssetFloat : public UVoxelHeightmapAsset
{
};

struct FVoxelHeightmapImporterWeightmapInfos
{
    FFilePath File;
    EVoxelRGBA Layer;
    uint8 Index;

};

class UVoxelHeightmapAssetUINT16 : public UVoxelHeightmapAsset
{
    FString Heightmap;
    EVoxelHeightmapImporterMaterialConfig MaterialConfig;
    TArray<FString> WeightMaps;
    TArray<FVoxelHeightmapImporterWeightmapInfos> WeightmapsInfos;

};

class UVoxelHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
    float Voxel_BuildDelay;
    class UMaterialInterface* Voxel_DebugMaterial;

};

class UVoxelInstancedMaterialCollectionTemplates : public UObject
{
    class UMaterialInterface* Template;
    class UMaterialInterface* Template1x;
    class UMaterialInterface* Template2x;
    class UMaterialInterface* Template3x;
    class UMaterialInterface* Template4x;
    class UMaterialInterface* Template5x;
    class UMaterialInterface* Template6x;

};

struct FVoxelInstancedMaterialCollectionLayer
{
    uint8 LayerIndex;
    class UMaterialInstance* LayerMaterialInstance;
    EVoxelTerrainType TerrainType;

};

class UVoxelInstancedMaterialCollection : public UVoxelCachedMaterialCollection
{
    int32 MaxMaterialsToBlendAtOnce;
    TArray<FString> Redirects;
    FString ParametersPrefix;
    class UVoxelInstancedMaterialCollectionTemplates* Templates;
    TArray<FVoxelInstancedMaterialCollectionLayer> Layers;

};

class UVoxelInstancedMaterialCollectionInstance : public UVoxelInstancedMaterialCollection
{
    class UVoxelInstancedMaterialCollection* LayersSource;

};

class UVoxelInstancedMeshSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

class UVoxelIntBoxLibrary : public UBlueprintFunctionLibrary
{

    FVoxelIntBox TranslateBox(FVoxelIntBox Box, FIntVector position);
    FVoxelIntBox Scale(FVoxelIntBox Box, int32 Scale);
    FVoxelIntBox RemoveTranslation(FVoxelIntBox Box);
    FVoxelIntBox Overlap(FVoxelIntBox A, FVoxelIntBox B);
    bool NotEqual_IntBoxIntBox(FVoxelIntBox A, FVoxelIntBox B);
    FVoxelIntBoxWithValidity MakeIntBoxWithValidity(FVoxelIntBox Box, bool bIsValid);
    FVoxelIntBox MakeIntBoxFromPoints(TArray<FVector> Points);
    FVoxelIntBox MakeIntBox(FIntVector Min, FIntVector Max);
    FVoxelIntBox MakeBoxFromPositionAndRadius(FVector position, float Radius);
    FVoxelIntBox MakeBoxFromLocalPositionAndRadius(FIntVector position, int32 Radius);
    bool IsVectorInsideBox(FVoxelIntBox Box, FVector position);
    bool IsValid(FVoxelIntBox Box);
    bool IsIntVectorInsideBox(FVoxelIntBox Box, FIntVector position);
    bool Intersect(FVoxelIntBox Box, FVoxelIntBox Other);
    FVoxelIntBox InfiniteBox();
    FIntVector GetSize(FVoxelIntBox Box);
    TArray<FIntVector> GetCorners(FVoxelIntBox Box);
    FVector GetCenter(FVoxelIntBox Box);
    FVoxelIntBox Extend_IntVector(FVoxelIntBox Box, FIntVector Extent);
    FVoxelIntBox Extend(FVoxelIntBox Box, int32 Extent);
    bool EqualEqual_IntBoxIntBox(FVoxelIntBox A, FVoxelIntBox B);
    FString Conv_IntBoxToString(FVoxelIntBox IntBox);
    bool Contains(FVoxelIntBox Box, FVoxelIntBox Other);
    FVoxelIntBox Center(FVoxelIntBox Box);
    void BreakIntBoxWithValidity(FVoxelIntBoxWithValidity BoxWithValidity, FVoxelIntBox& Box, bool& bIsValid);
    void BreakIntBox(FVoxelIntBox Box, FIntVector& Min, FIntVector& Max);
    FVoxelIntBox ApplyTransform(FVoxelIntBox Box, FTransform Transform);
    FVoxelIntBox AddPoint(FVoxelIntBox Box, FIntVector Point);
    FVoxelIntBox AddBox(FVoxelIntBox Box, FVoxelIntBox BoxToAdd);
};

struct FVoxelInvokerSettings
{
    bool bUseForLOD;
    int32 LODToSet;
    FVoxelIntBox LODBounds;
    bool bUseForCollisions;
    FVoxelIntBox CollisionsBounds;
    bool bUseForNavmesh;
    FVoxelIntBox NavmeshBounds;

};

class UVoxelInvokerComponentBase : public USceneComponent
{
    bool bIsInvokerEnabled;
    bool bEditorOnlyInvoker;
    bool bUseForEvents;
    bool bUseForPriorities;

    bool ShouldUseInvoker(class AVoxelWorld* VoxelWorld);
    void RefreshAllVoxelInvokers();
    bool IsLocalInvoker();
    FIntVector GetInvokerVoxelPosition(class AVoxelWorld* VoxelWorld);
    FVoxelInvokerSettings GetInvokerSettings(class AVoxelWorld* VoxelWorld);
};

class UVoxelSimpleInvokerComponent : public UVoxelInvokerComponentBase
{
    bool bUseForLOD;
    int32 LODToSet;
    float LODRange;
    bool bUseForCollisions;
    float CollisionsRange;
    bool bUseForNavmesh;
    float NavmeshRange;

    FVector GetInvokerGlobalPosition();
};

class UVoxelInvokerWithPredictionComponent : public UVoxelSimpleInvokerComponent
{
    bool bEnablePrediction;
    float PredictionTime;

};

class UVoxelInvokerAutoCameraComponent : public UVoxelSimpleInvokerComponent
{
};

class UVoxelVolumeInvokerComponent : public UVoxelInvokerComponentBase
{
    bool bUseForLOD;
    int32 LODToSet;
    bool bUseForCollisions;
    bool bUseForNavmesh;

};

class AVoxelLODVolume : public AVolume
{
    class UVoxelVolumeInvokerComponent* InvokerComponent;

};

struct FVoxelLandscapeImporterLayerInfo
{
    class ULandscapeLayerInfoObject* LayerInfo;
    EVoxelRGBA Layer;
    uint8 Index;

};

class AVoxelLandscapeImporter : public AActor
{
    class ALandscape* Landscape;
    EVoxelHeightmapImporterMaterialConfig MaterialConfig;
    TArray<FVoxelLandscapeImporterLayerInfo> LayerInfos;

};

struct FVoxelLandscapeMaterialCollectionLayer
{
    FName Name;
    uint8 Index;

};

struct FVoxelLandscapeMaterialCollectionPermutation
{
    FName Names;

};

class UVoxelLandscapeMaterialCollection : public UVoxelMaterialCollectionBase
{
    int32 MaxMaterialsToBlendAtOnce;
    class UMaterialInterface* Material;
    TMap<class FName, class bool> LayersToIgnore;
    TArray<FVoxelLandscapeMaterialCollectionLayer> Layers;
    TMap<class FVoxelLandscapeMaterialCollectionPermutation, class UMaterialInstanceConstant*> MaterialCache;
    TMap<int32, FVoxelLandscapeMaterialCollectionLayer> IndicesToLayers;

};

struct FVoxelSpawnerGroupChild
{
    class UVoxelMeshSpawner* Spawner;
    float Probability;

};

class UVoxelSpawnerGroup : public UObject
{
    bool bNormalizeProbabilitiesOnEdit;
    TArray<FVoxelSpawnerGroupChild> Children;

};

class UVoxelLevelTool : public UVoxelToolBase
{
    class UMaterialInterface* ToolMaterial;
    class UStaticMesh* CylinderMesh;
    float Falloff;
    float Height;
    float Offset;
    float Stride;

};

class UVoxelLevelTools : public UVoxelToolsBase
{

    void LevelAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void Level(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
};

class UVoxelLineBatchComponent : public UPrimitiveComponent
{
    float DefaultLifeTime;
    bool bCalculateAccurateBounds;

};

struct FVoxelMagicaVoxSceneEntry
{
    FString Name;
    class UVoxelDataAsset* Asset;
    FTransform Transform;
    FString Layer;

};

class UVoxelMagicaVoxScene : public UObject
{
    TArray<FVoxelMagicaVoxSceneEntry> Entries;
    FString ImportPath;

};

class AVoxelMagicaVoxSceneActor : public AActor
{
    float VoxelSize;
    TMap<class AVoxelAssetActor*, class FTransform> ActorTransforms;
    class AVoxelWorld* VoxelWorld;

    void SetScene(class UVoxelMagicaVoxScene* Scene);
    void ApplyVoxelSize();
};

class UMaterialExpressionVoxelLandscapeLayerBlend : public UMaterialExpressionLandscapeLayerBlend
{
};

class UMaterialExpressionVoxelLandscapeLayerSwitch : public UMaterialExpressionLandscapeLayerSwitch
{
};

class UMaterialExpressionVoxelLandscapeLayerWeight : public UMaterialExpressionLandscapeLayerWeight
{
};

class UMaterialExpressionVoxelLandscapeLayerSample : public UMaterialExpressionLandscapeLayerSample
{
};

class UMaterialExpressionVoxelLandscapeVisibilityMask : public UMaterialExpressionLandscapeVisibilityMask
{
};

struct FVoxelHaltonStream
{
    int32 InitialSeed;
    uint32 Seed;

};

class UVoxelMathLibrary : public UBlueprintFunctionLibrary
{

    void ResetHaltonStream(const FVoxelHaltonStream& Stream);
    FVoxelHaltonStream MakeHaltonStream(int32 InitialSeed);
    FVector GetUnitVectorFromRandom(FVector2D Random);
    FVector GetHalton3D(const FVoxelHaltonStream& Stream);
    FVector2D GetHalton2D(const FVoxelHaltonStream& Stream);
    float GetHalton1D(const FVoxelHaltonStream& Stream);
};

class UVoxelMeshImporterInputData : public UObject
{
};

struct FVoxelMeshImporterSettingsBase
{
    float VoxelSize;
    EVoxelAxis SweepDirection;
    bool bReverseSweep;
    bool bWatertight;
    bool bHideLeaks;
    int32 ExactBand;
    float DistanceDivisor;

};

struct FVoxelMeshImporterSettings : public FVoxelMeshImporterSettingsBase
{
    bool bImportColors;
    class UMaterialInterface* ColorsMaterial;
    bool bImportUVs;
    class UMaterialInterface* UVsMaterial;
    int32 RenderTargetSize;

};

struct FVoxelMeshImporterRenderTargetCache
{
    class UTextureRenderTarget2D* ColorsRenderTarget;
    class UTextureRenderTarget2D* UVsRenderTarget;
    class UMaterialInterface* LastRenderedColorsMaterial;
    class UMaterialInterface* LastRenderedUVsMaterial;
    int32 LastRenderedRenderTargetSize;

};

class UVoxelMeshImporterLibrary : public UBlueprintFunctionLibrary
{

    class UTextureRenderTarget2D* CreateTextureFromMaterial(class UObject* WorldContextObject, class UMaterialInterface* Material, int32 Width, int32 Height);
    class UVoxelMeshImporterInputData* CreateMeshDataFromStaticMesh(class UStaticMesh* StaticMesh);
    void ConvertMeshToVoxels_NoMaterials(class UObject* WorldContextObject, class UVoxelMeshImporterInputData* Mesh, FTransform Transform, bool bSubtractive, FVoxelMeshImporterSettingsBase Settings, class UVoxelDataAsset*& Asset, int32& NumLeaks);
    void ConvertMeshToVoxels(class UObject* WorldContextObject, class UVoxelMeshImporterInputData* Mesh, FTransform Transform, bool bSubtractive, FVoxelMeshImporterSettings Settings, FVoxelMeshImporterRenderTargetCache& RenderTargetCache, class UVoxelDataAsset*& Asset, int32& NumLeaks);
};

class AVoxelMeshImporter : public AActor
{
    class UStaticMesh* StaticMesh;
    FVoxelMeshImporterSettings Settings;
    uint32 SizeX;
    uint32 SizeY;
    uint32 SizeZ;
    uint64 NumberOfVoxels;
    float SizeInMB;
    class UStaticMeshComponent* MeshComponent;
    class UMaterialInstanceDynamic* MaterialInstance;
    FBox CachedBox;
    class UStaticMesh* CachedStaticMesh;
    TArray<FVector> CachedVertices;
    FTransform CachedTransform;

};

struct FVoxelBasicSpawnerScaleSettings
{
    EVoxelBasicSpawnerScaling Scaling;
    FFloatInterval ScaleX;
    FFloatInterval ScaleY;
    FFloatInterval ScaleZ;

};

class UVoxelMeshSpawner : public UObject
{
    class UStaticMesh* Mesh;
    TMap<int32, UMaterialInterface*> MaterialsOverrides;
    float DistanceBetweenInstancesInVoxel;
    EVoxelMeshSpawnerInstanceRandom InstanceRandom;
    FName ColorOutputName;
    bool bDistanceBetweenInstancesIsInCm;
    FVoxelSpawnerActorSettings ActorSettings;
    bool bAlwaysSpawnActor;
    FVoxelInstancedMeshSettings InstancedMeshSettings;
    FFloatInterval GroundSlopeAngle;
    bool bEnableHeightRestriction;
    FFloatInterval HeightRestriction;
    float HeightRestrictionFalloff;
    FVoxelBasicSpawnerScaleSettings Scaling;
    EVoxelBasicSpawnerRotation RotationAlignment;
    bool bRandomYaw;
    float RandomPitchAngle;
    FVector LocalPositionOffset;
    FRotator LocalRotationOffset;
    FVector GlobalPositionOffset;
    FVector FloatingDetectionOffset;

};

class UVoxelToolWithAlignment : public UVoxelToolBase
{
    EVoxelToolAlignment Alignment;
    bool bAirMode;
    float DistanceToCamera;
    bool bShowPlanePreview;

};

class UVoxelMeshTool : public UVoxelToolWithAlignment
{
    class UMaterialInterface* ToolMaterial;
    class UStaticMesh* Mesh;
    float Stride;
    bool bSmoothImport;
    float Smoothness;
    bool bProgressiveStamp;
    float Speed;
    FVoxelMeshImporterSettingsBase MeshImporterSettings;
    bool bSculpt;
    bool bPaint;
    int32 PaintMask;
    bool bPaintColors;
    bool bImportColorsFromMesh;
    class UMaterialInterface* ColorsMaterial;
    FColor ColorToPaint;
    bool bPaintUVs;
    bool bImportUVsFromMesh;
    class UMaterialInterface* UVsMaterial;
    FVector2D UV0ToPaint;
    FVector2D UV1ToPaint;
    bool bPaintIndex;
    uint8 IndexToPaint;
    class UTextureRenderTarget2D* UVsRenderTarget;
    class UTextureRenderTarget2D* ColorsRenderTarget;
    int32 RenderTargetSize;
    FVector PositionOffset;
    bool bAbsoluteScale;
    FVector Scale;
    bool bAlignToNormal;
    bool bAlignToMovement;
    FRotator RotationOffset;
    FVoxelMeshImporterRenderTargetCache RenderTargetCache;
    FVoxelMeshImporterSettings AssetData_ImporterSettings;

};

class UVoxelMultiplayerInterface : public UObject
{
};

class UVoxelMultiplayerSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

class UVoxelMultiplayerTcpInterface : public UVoxelMultiplayerInterface
{

    bool StartServer(FString& OutError, FString Ip, int32 Port);
    bool ConnectToServer(FString& OutError, FString Ip, int32 Port);
};

class UVoxelNoClippingComponent : public USceneComponent
{
    float TickRate;
    int32 SearchRange;
    bool bEnableDefaultBehavior;
    float Speed;
    bool bIsPlanet;
    FVector PlanetCenter;
    FVoxelNoClippingComponentMoveTowardsSurface MoveTowardsSurface;
    void OnMoveTowardsSurface();
    FVoxelNoClippingComponentStopMovingTowardsSurface StopMovingTowardsSurface;
    void OnStopMovingTowardsSurface();
    FVoxelNoClippingComponentOnTeleported OnTeleported;
    void OnTeleported();
    bool bIsInsideSurface;

    bool ShouldUseVoxelWorld(class AVoxelWorld* VoxelWorld);
    void OnTeleported__DelegateSignature();
    void OnStopMovingTowardsSurface__DelegateSignature();
    void OnMoveTowardsSurface__DelegateSignature();
};

class UVoxelPhysicsTools : public UBlueprintFunctionLibrary
{

    void ApplyVoxelPhysics(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<TScriptInterface<IVoxelPhysicsPartSpawnerResult>>& Results, class AVoxelWorld* World, FVoxelIntBox Bounds, TScriptInterface<class IVoxelPhysicsPartSpawner> PartSpawner, int32 MinParts, bool bDebug, bool bHideLatentWarnings);
};

class UVoxelPhysicsPartSpawnerResult_VoxelWorlds : public UObject
{
    class AVoxelWorld* VoxelWorld;

};

class UVoxelPhysicsPartSpawner_VoxelWorlds : public UObject
{
    FVoxelPhysicsPartSpawner_VoxelWorldsConfigureVoxelWorld ConfigureVoxelWorld;
    void ConfigureVoxelWorld(class AVoxelWorld* VoxelWorld);
    TSubclassOf<class AVoxelWorld> VoxelWorldClass;

};

class UVoxelPhysicsPartSpawnerResult_Cubes : public UObject
{
    TArray<class AStaticMeshActor*> Cubes;

};

class UVoxelPhysicsPartSpawner_Cubes : public UObject
{
    class UMaterialInterface* Material;
    class UStaticMesh* CubeMesh;
    float SpawnProbability;

};

struct FVoxelPositionValueMaterial
{
    FIntVector position;
    float Value;
    FVoxelMaterial Material;

};

class UVoxelPhysicsPartSpawnerResult_GetVoxels : public UObject
{
    TArray<FVoxelPositionValueMaterial> Voxels;

};

class UVoxelPhysicsPartSpawner_GetVoxels : public UObject
{
};

class IVoxelPhysicsPartSpawnerResult : public IInterface
{
};

class IVoxelPhysicsPartSpawner : public IInterface
{
};

class UVoxelPhysicsRelevancyComponent : public UActorComponent
{
    uint8 MaxVoxelChunksLODForPhysics;
    float TimeToWaitBeforeActivating;
    float TickInterval;

};

struct FVoxelLODMaterialsBase
{
    int32 StartLOD;
    int32 EndLOD;

};

struct FVoxelLODMaterials : public FVoxelLODMaterialsBase
{
    class UMaterialInterface* Material;

};

struct FVoxelLODMaterialCollections : public FVoxelLODMaterialsBase
{
    class UVoxelMaterialCollectionBase* MaterialCollection;

};

struct FVoxelMeshConfig
{
    bool bReceivesDecals;
    bool bRenderCustomDepth;
    ERendererStencilMask CustomDepthStencilWriteMask;
    int32 CustomDepthStencilValue;

};

class AVoxelRuntimeActor : public AActor
{
    float VoxelSize;
    FVoxelGeneratorPicker Generator;
    class UVoxelPlaceableItemManager* PlaceableItemManager;
    bool bCreateWorldAutomatically;
    bool bUseCameraIfNoInvokersFound;
    bool bEnableUndoRedo;
    bool bEnableCustomWorldRebasing;
    bool bMergeAssetActors;
    bool bMergeDisableEditsBoxes;
    bool bDisableOnScreenMessages;
    bool bDisableDebugManager;
    int32 RenderOctreeDepth;
    uint32 WorldSizeInVoxel;
    bool bUseCustomWorldBounds;
    FVoxelIntBox CustomWorldBounds;
    int32 MaxLOD;
    int32 MinLOD;
    float InvokerDistanceThreshold;
    float MinDelayBetweenLODUpdates;
    bool bConstantLOD;
    EVoxelMaterialConfig MaterialConfig;
    class UMaterialInterface* VoxelMaterial;
    class UVoxelMaterialCollectionBase* MaterialCollection;
    class UVoxelMaterialCollectionBase* MaterialCollectionRuntime;
    TArray<FVoxelLODMaterials> LODMaterials;
    TArray<FVoxelLODMaterialCollections> LODMaterialCollections;
    EVoxelUVConfig UVConfig;
    float UVScale;
    EVoxelNormalConfig NormalConfig;
    EVoxelRGBHardness RGBHardness;
    TMap<FString, float> MaterialsHardness;
    bool bHardColorTransitions;
    bool bOneMaterialPerCubeSide;
    TArray<uint8> HolesMaterials;
    TMap<uint8, FVoxelMeshConfig> MaterialsMeshConfigs;
    bool bHalfPrecisionCoordinates;
    bool bInterpolateColors;
    bool bInterpolateUVs;
    bool bSRGBColors;
    EVoxelRenderType RenderType;
    int32 RenderSharpness;
    bool bCreateMaterialInstances;
    bool bDitherChunks;
    float ChunksDitheringDuration;
    bool bCastFarShadow;
    TSubclassOf<class UVoxelProceduralMeshComponent> ProcMeshClass;
    int32 ChunksCullingLOD;
    bool bRenderWorld;
    bool bContributesToStaticLighting;
    bool bUseStaticPath;
    bool bStaticWorld;
    bool bGreedyCubicMesher;
    int32 TexturePoolTextureSize;
    bool bOptimizeIndices;
    bool bGenerateDistanceFields;
    int32 MaxDistanceFieldLOD;
    int32 DistanceFieldBoundsExtension;
    int32 DistanceFieldResolutionDivisor;
    float DistanceFieldSelfShadowBias;
    bool bEnableTransitions;
    bool bMergeChunks;
    int32 ChunksClustersSize;
    bool bDoNotMergeCollisionsAndNavmesh;
    float BoundsExtension;
    class UVoxelSpawnerConfig* SpawnerConfig;
    int32 HISMChunkSize;
    int32 SpawnersCollisionDistanceInVoxel;
    int64 MaxNumberOfFoliageInstances;
    bool bEnableCollisions;
    FBodyInstance CollisionPresets;
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;
    TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn;
    bool bNotifyRigidBodyCollision;
    bool bGenerateOverlapEvents;
    bool bComputeVisibleChunksCollisions;
    int32 VisibleChunksCollisionsMaxLOD;
    class UPhysicalMaterial* PhysMaterialOverride;
    bool bUseCCD;
    bool bSimpleCubicCollision;
    int32 SimpleCubicCollisionLODBias;
    int32 NumConvexHullsPerAxis;
    bool bCleanCollisionMeshes;
    bool bEnableNavmesh;
    bool bComputeVisibleChunksNavmesh;
    int32 VisibleChunksNavmeshMaxLOD;
    TMap<EVoxelTaskType, int32> PriorityCategories;
    TMap<EVoxelTaskType, int32> PriorityOffsets;
    float MeshUpdatesBudget;
    float EventsTickRate;
    int32 DataOctreeInitialSubdivisionDepth;
    bool bEnableMultiplayer;
    TSubclassOf<class UVoxelMultiplayerInterface> MultiplayerInterface;
    float MultiplayerSyncRate;
    TSubclassOf<class UVoxelRendererSubsystemProxy> RendererSubsystem;
    TSubclassOf<class UVoxelLODSubsystemProxy> LODSubsystem;
    TArray<TWeakObjectPtr<UTexture>> DebugTextures;

};

struct FVoxelWorldCreateInfo
{
    bool bOverrideSave;
    FVoxelUncompressedWorldSave SaveOverride;
    bool bOverrideData;
    class AVoxelWorld* DataOverride;

};

class AVoxelWorld : public AVoxelRuntimeActor
{
    FVoxelWorldOnGenerateWorld OnGenerateWorld;
    void OnGenerateWorld();
    FVoxelWorldOnWorldLoaded OnWorldLoaded;
    void OnWorldLoaded(class AVoxelWorld* VoxelWorld);
    FVoxelWorldOnWorldDestroyed OnWorldDestroyed;
    void OnWorldDestroyed();
    FVoxelWorldOnMaxFoliageInstancesReached OnMaxFoliageInstancesReached;
    void OnMaxFoliageInstancesReached();
    class UVoxelWorldRootComponent* WorldRoot;
    class UVoxelLineBatchComponent* LineBatchComponent;
    class UVoxelWorldSaveObject* SaveObject;
    FString SaveFilePath;
    bool bAutomaticallySaveToFile;
    bool bAppendDateToSavePath;
    bool bRecomputeNormalsBeforeBaking;
    class UStaticMesh* BakedMeshTemplate;
    TSubclassOf<class UStaticMeshComponent> BakedMeshComponentTemplate;
    FFilePath BakedDataPath;
    bool bEnableFoliageInEditor;
    bool bAutomaticallyRefreshMaterials;
    bool bAutomaticallyRefreshFoliage;
    FVector EditorOnly_NewScale;
    int32 NumberOfThreads;
    TMap<FName, int32> Seeds;
    class UVoxelMultiplayerInterface* MultiplayerInterfaceInstance;
    class UVoxelGeneratorCache* GeneratorCache;
    class UVoxelPlaceableItemActorHelper* PlaceableItemActorHelper;
    bool bIsToggled;

    void SetWorldSize(int32 NewWorldSizeInVoxels);
    void SetRenderOctreeDepth(int32 NewDepth);
    void SetOffset(const FIntVector& OffsetInVoxels);
    void SetGeneratorObject(class UVoxelGenerator* NewGenerator);
    void SetGeneratorClass(TSubclassOf<class UVoxelGenerator> NewGeneratorClass);
    void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
    void OnWorldLoaded__DelegateSignature(class AVoxelWorld* VoxelWorld);
    void OnWorldDestroyed__DelegateSignature();
    void OnMaxFoliageInstancesReached__DelegateSignature();
    void OnGenerateWorld__DelegateSignature();
    FVector LocalToGlobalFloatBP(const FVector& position);
    FBox LocalToGlobalBounds(const FVoxelIntBox& Bounds);
    FVector LocalToGlobal(const FIntVector& position);
    bool IsLoaded();
    bool IsCreated();
    FVector GlobalToLocalFloatBP(const FVector& position);
    FVoxelIntBox GlobalToLocalBounds(const FBox& Bounds);
    FIntVector GlobalToLocal(const FVector& position, EVoxelWorldCoordinatesRounding Rounding);
    TArray<FIntVector> GetNeighboringPositions(const FVector& GlobalPosition);
    class UVoxelMultiplayerInterface* GetMultiplayerInterfaceInstance();
    FVoxelGeneratorInit GetGeneratorInit();
    class UVoxelGeneratorCache* GetGeneratorCache();
    void DestroyWorld();
    void CreateWorld(FVoxelWorldCreateInfo Info);
    class UVoxelMultiplayerInterface* CreateMultiplayerInterfaceInstance();
    void AddOffset(const FIntVector& OffsetInVoxels, bool bMoveActor);
};

class UVoxelPlaceableItemActorHelper : public UObject
{
};

struct FVoxelDataItemConstructionInfo
{
    class UVoxelGeneratorInstanceWrapper* Generator;
    FVoxelIntBox Bounds;
    TArray<float> Parameters;
    int32 Mask;

};

class UVoxelPlaceableItemManager : public UObject
{
    bool bEnableDebug;
    bool bDebugBounds;
    TArray<FVoxelDataItemConstructionInfo> DataItemInfos;
    class UVoxelGeneratorCache* GeneratorCache;

    void OnGenerate();
    void OnClear();
    class UVoxelGeneratorCache* GetGeneratorCache();
    void DrawDebugPoint(FVector position, FLinearColor Color);
    void DrawDebugLine(FVector Start, FVector End, FLinearColor Color);
    void AddDataItem(FVoxelDataItemConstructionInfo Info);
};

struct FVoxelPerlinWormsSettings
{
    int32 Seed;
    float Radius;
    FVector Start;
    FVector Direction;
    FVector RotationAmplitude;
    int32 NumSegments;
    float SegmentLength;
    float SplitProbability;
    float SplitProbabilityGain;
    int32 BranchMeanSize;
    float BranchSizeVariation;
    FVector NoiseDirection;
    float NoiseSegmentLength;
    int32 MaxWorms;

};

class UVoxelPlaceableItemsUtilities : public UBlueprintFunctionLibrary
{

    void AddWorms(FAddWormsAddWorm AddWorm, FVoxelPerlinWormsSettings Settings);
    void AddWorm__DelegateSignature(FVector Start, FVector End, float Radius);
};

class UVoxelPoolSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

class UVoxelProceduralMeshComponent : public UModelComponent
{
    class UBodySetup* BodySetup;
    class UBodySetup* BodySetupBeingCooked;
    class UStaticMeshComponent* StaticMeshComponent;

    void SetVoxelCollisionsFrozen(const class AVoxelWorld* VoxelWorld, bool bFrozen);
    void InitChunk(uint8 ChunkLOD, FVoxelIntBox ChunkBounds);
    bool AreVoxelCollisionsFrozen(const class AVoxelWorld* VoxelWorld);
};

struct FVoxelLineTraceParameters
{
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    TArray<TEnumAsByte<ECollisionChannel>> CollisionChannelsToIgnore;
    TArray<class AActor*> ActorsToIgnore;
    TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
    FLinearColor TraceColor;
    FLinearColor TraceHitColor;
    float DrawTime;

};

struct FVoxelProjectionHit
{
    FIntVector VoxelPosition;
    FVector2D PlanePosition;
    FHitResult Hit;

};

struct FVoxelSurfaceEditsVoxels
{
};

class UVoxelProjectionTools : public UBlueprintFunctionLibrary
{

    FVoxelLineTraceParameters MakeVoxelLineTraceParameters(TArray<TEnumAsByte<ECollisionChannel>> CollisionChannelsToIgnore, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    TArray<FIntVector> GetHitsPositions(const TArray<FVoxelProjectionHit>& Hits);
    FVector GetHitsAveragePosition(const TArray<FVoxelProjectionHit>& Hits);
    FVector GetHitsAverageNormal(const TArray<FVoxelProjectionHit>& Hits);
    int32 FindProjectionVoxelsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVoxelProjectionHit>& Hits, class AVoxelWorld* World, FVoxelLineTraceParameters Parameters, FVector position, FVector Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance, bool bHideLatentWarnings);
    int32 FindProjectionVoxels(TArray<FVoxelProjectionHit>& Hits, class AVoxelWorld* World, FVoxelLineTraceParameters Parameters, FVector position, FVector Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance);
    FVoxelSurfaceEditsVoxels CreateSurfaceVoxelsFromHitsWithExactValues(class AVoxelWorld* World, const TArray<FVoxelProjectionHit>& Hits);
    FVoxelSurfaceEditsVoxels CreateSurfaceVoxelsFromHits(const TArray<FVoxelProjectionHit>& Hits);
};

class UVoxelSphereToolBase : public UVoxelToolWithAlignment
{
    class UMaterialInterface* ToolMaterial;
    class UStaticMesh* SphereMesh;

};

class UVoxelRevertTool : public UVoxelSphereToolBase
{
    bool bRevertValues;
    bool bRevertMaterials;
    int32 HistoryPosition;
    int32 CurrentHistoryPosition;

};

class UVoxelWorldSaveObject : public UObject
{
    FVoxelCompressedWorldSave SAVE;
    TMap<FIntPoint, int32> TerrainHeights;
    TMap<FIntPoint, int32> TerrainRamps;
    int32 Depth;

};

class UVoxelSaveUtilities : public UBlueprintFunctionLibrary
{

    bool DecompressVoxelSave(const FVoxelCompressedWorldSave& CompressedSave, FVoxelUncompressedWorldSave& OutUncompressedSave);
    void CompressVoxelSave(const FVoxelUncompressedWorldSave& UncompressedSave, FVoxelCompressedWorldSave& OutCompressedSave);
};

class UVoxelSettings : public UDeveloperSettings
{
    int32 NumberOfThreads;
    float PriorityDuration;
    EVoxelThreadPriority ThreadPriority;
    bool bShowNotifications;
    bool bDisableAutoPreview;
    bool bRoundBeforeSaving;
    int32 DefaultCompressionLevel;

};

class UVoxelSmoothTool : public UVoxelToolBase
{
    class UMaterialInterface* ToolMaterial;
    bool bSculpt;
    bool bPaint;
    int32 PaintMask;
    float Strength;
    int32 NumIterations;
    EVoxelFalloff FalloffType;
    float Falloff;

};

class AVoxelSpawnerActor : public AActor
{

    void SetStaticMesh(class UStaticMesh* Mesh, const TMap<int32, UMaterialInterface*>& SectionsMaterials, const FBodyInstance& CollisionPresets);
    void SetInstanceRandom(float Value);
};

class AVoxelMeshSpawnerActor : public AVoxelSpawnerActor
{
    class UStaticMeshComponent* StaticMeshComponent;

};

class AVoxelMeshWithPhysicsRelevancySpawnerActor : public AVoxelMeshSpawnerActor
{
    class UVoxelPhysicsRelevancyComponent* PhysicsRelevancyComponent;

};

struct FVoxelSpawnerOutputName
{
    FName Name;

};

struct FVoxelSpawnerDensity
{
    EVoxelSpawnerDensityType Type;
    float Constant;
    bool bUseMainGenerator;
    FVoxelGeneratorPicker CustomGenerator;
    FVoxelSpawnerOutputName GeneratorOutputName;
    EVoxelRGBA RGBAChannel;
    int32 UVChannel;
    EVoxelSpawnerUVAxis UVAxis;
    int32 FiveWayBlendChannel;
    TArray<int32> SingleIndexChannels;
    TArray<int32> MultiIndexChannels;
    EVoxelSpawnerDensityTransform Transform;

};

struct FVoxelSpawnerConfigSpawner
{
    class UVoxelMeshSpawner* Spawner;
    EVoxelSpawnerType SpawnerType;
    FVoxelSpawnerDensity Density;
    FVoxelSpawnerDensity DensityMultiplier;
    FVoxelSpawnerOutputName HeightGraphOutputName_HeightOnly;
    uint32 ChunkSize_EditorOnly;
    int32 LOD;
    uint32 GenerationDistanceInVoxels_EditorOnly;
    int32 GenerationDistanceInChunks;
    bool bInfiniteGenerationDistance;
    bool bSave;
    bool bDoNotDespawn;
    int32 Seed;
    EVoxelSpawnerConfigElementRandomGenerator RandomGenerator;
    FGuid Guid;
    bool bComputeDensityFirst_HeightOnly;
    bool bCheckIfFloating_HeightOnly;
    bool bCheckIfCovered_HeightOnly;

};

class UVoxelSpawnerCollection : public UObject
{
    FVoxelGeneratorPicker MainGeneratorForDropdowns;
    TArray<FVoxelSpawnerConfigSpawner> Spawners;

};

struct FVoxelSpawnerConfigFiveWayBlendSetup
{
    bool bFourWayBlend;

};

class UVoxelSpawnerConfig : public UVoxelSpawnerCollection
{
    EVoxelSpawnerConfigRayWorldType WorldType;
    FVoxelSpawnerConfigFiveWayBlendSetup FiveWayBlendSetup;
    TArray<class UVoxelSpawnerCollection*> Collections;

};

class UVoxelSpawnerDebugSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

class UVoxelSpawnerImplSubsystemProxy : public UVoxelSpawnerSubsystemProxy
{
};

class UVoxelSphereTool : public UVoxelSphereToolBase
{
    class UMaterialInterface* OverlayMaterial;
    bool bSculpt;
    bool bPaint;
    float PaintStrength;
    EVoxelFalloff FalloffType;
    float Falloff;

};

class UVoxelSphereTools : public UVoxelToolsBase
{

    void TrimSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, const FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void TrimSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, const FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void SmoothSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Strength, int32 NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void SmoothSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Strength, int32 NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void SmoothMaterialSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Strength, int32 NumIterations, int32 Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void SmoothMaterialSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Strength, int32 NumIterations, int32 Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
    void SetValueSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void SetValueSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void SetMaterialSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, const FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void SetMaterialSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, const FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
    void RevertSphereToGeneratorAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void RevertSphereToGenerator(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void RevertSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, int32 HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void RevertSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, int32 HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void RemoveSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void RemoveSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void ApplyMaterialKernelSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, int32 Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void ApplyMaterialKernelSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, int32 Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
    void ApplyKernelSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void ApplyKernelSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void AddSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void AddSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
};

class AVoxelStaticWorld : public AActor
{
    class UStaticMeshComponent* BaseMesh;
    TArray<class UStaticMeshComponent*> Meshes;

};

struct FVoxelSurfaceEditsProcessedVoxels
{
};

class UVoxelSurfaceEditTools : public UVoxelToolsBase
{

    void PropagateVoxelMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
    void PropagateVoxelMaterials(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
    void EditVoxelValuesAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    void EditVoxelValues(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
    void EditVoxelMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelPaintMaterial& PaintMaterial, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
    void EditVoxelMaterials(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelPaintMaterial& PaintMaterial, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
};

struct FVoxelSurfaceToolMask
{
    EVoxelSurfaceToolMaskType Type;
    class UTexture2D* Texture;
    EVoxelRGBA Channel;
    FVoxelGeneratorPicker Generator;
    TArray<FName> SeedsToRandomize;
    bool bScaleWithBrushSize;
    class UTexture2D* GeneratorDebugTexture;
    float Scale;
    float Ratio;

};

class UVoxelSurfaceTool : public UVoxelToolBase
{
    class UMaterialInterface* ToolMaterial;
    bool bSculpt;
    float SculptStrength;
    bool bPropagateMaterials;
    bool bPaint;
    float PaintStrength;
    bool b2DBrush;
    bool bMovementAffectsStrength;
    float Stride;
    bool bAlignToMovement;
    FRotator FixedDirection;
    bool bModulateStrengthByDeltaTime;
    bool bEnableFalloff;
    EVoxelFalloff FalloffType;
    float Falloff;
    bool bUseMask;
    FVoxelSurfaceToolMask Mask;
    class UTexture2D* MaskGeneratorCache_RenderTexture;

};

struct FVoxelSurfaceEditsStackElement
{
};

struct FVoxelSurfaceEditsStack
{
};

class UVoxelSurfaceTools : public UBlueprintFunctionLibrary
{

    void GetStrengthMaskScale(float& ScaleX, float& ScaleY, class AVoxelWorld* World, FVoxelFloatTexture Mask, float SizeX, float SizeY, bool bConvertToVoxelSpace);
    FVoxelIntBox GetBounds(FVoxelSurfaceEditsProcessedVoxels Voxels);
    void FindSurfaceVoxelsFromDistanceField(FVoxelSurfaceEditsVoxels& Voxels, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded, EVoxelComputeDevice ComputeDevice);
    void FindSurfaceVoxelsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsVoxels& Voxels, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals, bool bHideLatentWarnings);
    void FindSurfaceVoxels2DAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsVoxels& Voxels, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals, bool bHideLatentWarnings);
    void FindSurfaceVoxels2D(FVoxelSurfaceEditsVoxels& Voxels, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals);
    void FindSurfaceVoxels(FVoxelSurfaceEditsVoxels& Voxels, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals);
    void DebugSurfaceVoxels(class AVoxelWorld* World, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float LifeTime);
    FVoxelSurfaceEditsStackElement ApplyTerrace(int32 TerraceHeightInVoxels, float Angle, int32 ImmutableVoxels);
    FVoxelSurfaceEditsStackElement ApplyStrengthMask(class AVoxelWorld* World, FVoxelFloatTexture Mask, FVector EditPosition, float ScaleX, float ScaleY, FVector PlaneNormal, FVector PlaneTangent, EVoxelSamplerMode SamplerMode, bool bConvertToVoxelSpace);
    FVoxelSurfaceEditsStackElement ApplyStrengthCurve(class AVoxelWorld* World, FVector Center, float Radius, class UCurveFloat* StrengthCurve, bool bConvertToVoxelSpace);
    void ApplyStackAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, FVoxelSurfaceEditsVoxels Voxels, FVoxelSurfaceEditsStack Stack, bool bHideLatentWarnings);
    FVoxelSurfaceEditsProcessedVoxels ApplyStack(FVoxelSurfaceEditsVoxels Voxels, FVoxelSurfaceEditsStack Stack);
    FVoxelSurfaceEditsStackElement ApplyFlatten(class AVoxelWorld* World, FVector PlanePoint, FVector PlaneNormal, EVoxelSDFMergeMode MergeMode, bool bConvertToVoxelSpace);
    FVoxelSurfaceEditsStackElement ApplyFalloff(class AVoxelWorld* World, EVoxelFalloff FalloffType, FVector Center, float Radius, float Falloff, bool bConvertToVoxelSpace);
    FVoxelSurfaceEditsStackElement ApplyConstantStrength(float Strength);
    FVoxelSurfaceEditsStack AddToStack(FVoxelSurfaceEditsStack Stack, FVoxelSurfaceEditsStackElement Element);
};

struct FVoxelTestValues
{
};

class UVoxelTestLibrary : public UBlueprintFunctionLibrary
{

    void TestValues(FVoxelTestValues ValuesA, FVoxelTestValues ValuesB);
    FVoxelTestValues ReadValues(class AVoxelWorld* World, FVoxelIntBox Bounds);
};

class UVoxelTexturePoolSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

class UVoxelTextureTools : public UBlueprintFunctionLibrary
{

    FVoxelFloatTexture Minimum(FVoxelFloatTexture Texture, float Radius);
    FVoxelFloatTexture Maximum(FVoxelFloatTexture Texture, float Radius);
};

class UVoxelToolSharedConfig : public UObject
{
    float BrushSize;
    FVoxelPaintMaterial PaintMaterial;
    float ToolOpacity;
    float AlignToMovementSmoothness;
    float ControlSpeed;
    TArray<class AVoxelWorld*> WorldsToEdit;
    bool bCacheData;
    bool bMultiThreaded;
    EVoxelComputeDevice ComputeDevice;
    bool bRegenerateSpawners;
    bool bCheckForSingleValues;
    bool bWaitForUpdates;
    bool bDebug;
    float FixedDeltaTime;
    class UStaticMesh* PlaneMesh;
    class UMaterialInterface* PlaneMaterial;
    FVoxelToolSharedConfigOnBoundsUpdated OnBoundsUpdated;
    void VoxelTool_OnBoundsUpdated(class AVoxelWorld* World, FVoxelIntBox Bounds);

};

class UVoxelToolLibrary : public UBlueprintFunctionLibrary
{

    void UpdateSphereOverlayMaterial(class UVoxelToolBase* Tool, class UMaterialInstanceDynamic* OverlayMaterialInstance, EVoxelFalloff FalloffType, float Falloff);
};

class UVoxelToolManager : public UObject
{
    class UVoxelToolSharedConfig* SharedConfig;
    class UVoxelTool* ActiveTool;
    TArray<class UVoxelTool*> Tools;

    void SetActiveToolByName(FName NewActiveTool);
    void SetActiveToolByClass(TSubclassOf<class UVoxelTool> NewActiveTool);
    void SetActiveTool(class UVoxelTool* NewActiveTool);
    class UVoxelToolSharedConfig* K2_GetSharedConfig();
    TArray<class UVoxelTool*> GetTools();
    class UVoxelTool* GetActiveTool();
    void CreateDefaultTools(bool bLoadBlueprints);
};

class UVoxelToolRenderingSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

class UVoxelTrimTool : public UVoxelToolBase
{
    class UMaterialInterface* ToolMaterial;
    float Falloff;
    float Roughness;

};

class UVoxelWorldRootComponent : public UPrimitiveComponent
{
    class UBodySetup* BodySetup;

};

struct FVoxelRange
{
    double Min;
    double Max;

};

struct FVoxelBoolVector
{
    bool bX;
    bool bY;
    bool bZ;

};

struct FVoxelGeneratorParameterTerminalType
{
    EVoxelGeneratorParameterPropertyType PropertyType;
    FName PropertyClass;

};

struct FVoxelGeneratorParameterType : public FVoxelGeneratorParameterTerminalType
{
    EVoxelGeneratorParameterContainerType ContainerType;
    FVoxelGeneratorParameterTerminalType ValueType;

};

struct FVoxelGeneratorParameter
{
    FName ID;
    FVoxelGeneratorParameterType Type;
    FString Name;
    FString Category;
    FString ToolTip;
    int32 Priority;
    TMap<class FName, class FString> MetaData;
    FString DefaultValue;

};

struct FVoxelSurfaceEditsVoxelBase
{
    FIntVector position;
    FVector Normal;
    float Value;
    FVector SurfacePosition;

};

struct FVoxelSurfaceEditsVoxel : public FVoxelSurfaceEditsVoxelBase
{
    float Strength;

};

#endif
