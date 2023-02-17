#ifndef UE4SS_SDK_HairStrandsCore_HPP
#define UE4SS_SDK_HairStrandsCore_HPP

#include "HairStrandsCore_enums.hpp"

struct FFollicleMaskOptions
{
    class UGroomAsset* Groom;
    EFollicleMaskChannel Channel;

};

struct FGoomBindingGroupInfo
{
    int32 RenRootCount;
    int32 RenLODCount;
    int32 SimRootCount;
    int32 SimLODCount;

};

struct FGroomAnimationInfo
{
    uint32 NumFrames;
    float SecondsPerFrame;
    float Duration;
    float StartTime;
    float EndTime;
    int32 StartFrame;
    int32 EndFrame;
    EGroomCacheAttributes Attributes;

};

struct FGroomBuildSettings
{
    bool bOverrideGuides;
    float HairToGuideDensity;
    EGroomInterpolationQuality InterpolationQuality;
    EGroomInterpolationWeight InterpolationDistance;
    bool bRandomizeGuide;
    bool bUseUniqueGuide;

};

struct FGroomCacheImportSettings
{
    bool bImportGroomCache;
    bool bImportGroomAsset;
    FSoftObjectPath GroomAsset;

};

struct FGroomCacheInfo
{
    int32 Version;
    EGroomCacheType Type;
    FGroomAnimationInfo AnimationInfo;

};

struct FGroomConversionSettings
{
    FVector Rotation;
    FVector Scale;

};

struct FGroomHairGroupPreview
{
    int32 GroupID;
    int32 CurveCount;
    int32 GuideCount;
    FHairGroupsInterpolation InterpolationSettings;

};

struct FHairAdvancedRenderingSettings
{
    bool bUseStableRasterization;
    bool bScatterSceneLighting;

};

struct FHairBendConstraint
{
    bool SolveBend;
    bool ProjectBend;
    float BendDamping;
    float BendStiffness;
    FRuntimeFloatCurve BendScale;

};

struct FHairCardsClusterSettings
{
    float ClusterDecimation;
    EHairCardsClusterType Type;
    bool bUseGuide;

};

struct FHairCardsGeometrySettings
{
    EHairCardsGenerationType GenerationType;
    int32 CardsCount;
    EHairCardsClusterType ClusterType;
    float MinSegmentLength;
    float AngularThreshold;
    float MinCardsLength;
    float MaxCardsLength;

};

struct FHairCardsTextureSettings
{
    int32 AtlasMaxResolution;
    int32 PixelPerCentimeters;
    int32 LengthTextureCount;
    int32 DensityTextureCount;

};

struct FHairCollisionConstraint
{
    bool SolveCollision;
    bool ProjectCollision;
    float StaticFriction;
    float KineticFriction;
    float StrandsViscosity;
    FIntVector GridDimension;
    float CollisionRadius;
    FRuntimeFloatCurve RadiusScale;

};

struct FHairDecimationSettings
{
    float CurveDecimation;
    float VertexDecimation;

};

struct FHairExternalForces
{
    FVector GravityVector;
    float AirDrag;
    FVector AirVelocity;

};

struct FHairGeometrySettings
{
    float HairWidth;
    float HairRootScale;
    float HairTipScale;
    float HairClipScale;

};

struct FHairGroupCardsInfo
{
    int32 NumCards;
    int32 NumCardVertices;

};

struct FHairGroupCardsTextures
{
    class UTexture2D* DepthTexture;
    class UTexture2D* CoverageTexture;
    class UTexture2D* TangentTexture;
    class UTexture2D* AttributeTexture;
    class UTexture2D* AuxilaryDataTexture;

};

struct FHairGroupDesc
{
    float HairLength;
    float HairWidth;
    bool HairWidth_Override;
    float HairRootScale;
    bool HairRootScale_Override;
    float HairTipScale;
    bool HairTipScale_Override;
    float HairClipScale;
    bool HairClipScale_Override;
    float HairShadowDensity;
    bool HairShadowDensity_Override;
    float HairRaytracingRadiusScale;
    bool HairRaytracingRadiusScale_Override;
    bool bUseHairRaytracingGeometry;
    bool bUseHairRaytracingGeometry_Override;
    float LODBias;
    bool bUseStableRasterization;
    bool bUseStableRasterization_Override;
    bool bScatterSceneLighting;
    bool bScatterSceneLighting_Override;
    bool bSupportVoxelization;
    bool bSupportVoxelization_Override;
    int32 LODForcedIndex;

};

struct FHairGroupInfo
{
    int32 GroupID;
    int32 NumCurves;
    int32 NumGuides;
    int32 NumCurveVertices;
    int32 NumGuideVertices;
    float MaxCurveLength;

};

struct FHairGroupInfoWithVisibility : public FHairGroupInfo
{
    bool bIsVisible;

};

struct FHairGroupsCardsSourceDescription
{
    class UMaterialInterface* Material;
    FName MaterialSlotName;
    EHairCardsSourceType SourceType;
    class UStaticMesh* ProceduralMesh;
    FString ProceduralMeshKey;
    class UStaticMesh* ImportedMesh;
    FHairGroupsProceduralCards ProceduralSettings;
    FHairGroupCardsTextures Textures;
    int32 GroupIndex;
    int32 LODIndex;
    FHairGroupCardsInfo CardsInfo;
    FString ImportedMeshKey;

};

struct FHairGroupsInterpolation
{
    FHairDecimationSettings DecimationSettings;
    FHairInterpolationSettings InterpolationSettings;

};

struct FHairGroupsLOD
{
    TArray<FHairLODSettings> LODs;
    float ClusterWorldSize;
    float ClusterScreenSizeScale;

};

struct FHairGroupsMaterial
{
    class UMaterialInterface* Material;
    FName SlotName;

};

struct FHairGroupsMeshesSourceDescription
{
    class UMaterialInterface* Material;
    FName MaterialSlotName;
    class UStaticMesh* ImportedMesh;
    FHairGroupCardsTextures Textures;
    int32 GroupIndex;
    int32 LODIndex;
    FString ImportedMeshKey;

};

struct FHairGroupsPhysics
{
    FHairSolverSettings SolverSettings;
    FHairExternalForces ExternalForces;
    FHairMaterialConstraints MaterialConstraints;
    FHairStrandsParameters StrandsParameters;

};

struct FHairGroupsProceduralCards
{
    FHairCardsClusterSettings ClusterSettings;
    FHairCardsGeometrySettings GeometrySettings;
    FHairCardsTextureSettings TextureSettings;
    int32 Version;

};

struct FHairGroupsRendering
{
    FName MaterialSlotName;
    class UMaterialInterface* Material;
    FHairGeometrySettings GeometrySettings;
    FHairShadowSettings ShadowSettings;
    FHairAdvancedRenderingSettings AdvancedSettings;

};

struct FHairInterpolationSettings
{
    bool bOverrideGuides;
    float HairToGuideDensity;
    EHairInterpolationQuality InterpolationQuality;
    EHairInterpolationWeight InterpolationDistance;
    bool bRandomizeGuide;
    bool bUseUniqueGuide;

};

struct FHairLODSettings
{
    float CurveDecimation;
    float VertexDecimation;
    float AngularThreshold;
    float ScreenSize;
    float ThicknessScale;
    bool bVisible;
    EGroomGeometryType GeometryType;

};

struct FHairMaterialConstraints
{
    FHairBendConstraint BendConstraint;
    FHairStretchConstraint StretchConstraint;
    FHairCollisionConstraint CollisionConstraint;

};

struct FHairShadowSettings
{
    float HairShadowDensity;
    float HairRaytracingRadiusScale;
    bool bUseHairRaytracingGeometry;
    bool bVoxelize;

};

struct FHairSolverSettings
{
    bool EnableSimulation;
    EGroomNiagaraSolvers NiagaraSolver;
    TSoftObjectPtr<UNiagaraSystem> CustomSystem;
    int32 SubSteps;
    int32 IterationCount;

};

struct FHairStrandsParameters
{
    EGroomStrandsSize StrandsSize;
    float StrandsDensity;
    float StrandsSmoothing;
    float StrandsThickness;
    FRuntimeFloatCurve ThicknessScale;

};

struct FHairStretchConstraint
{
    bool SolveStretch;
    bool ProjectStretch;
    float StretchDamping;
    float StretchStiffness;
    FRuntimeFloatCurve StretchScale;

};

struct FMovieSceneGroomCacheParams
{
    class UGroomCache* GroomCache;
    FFrameNumber FirstLoopStartFrameOffset;
    FFrameNumber StartFrameOffset;
    FFrameNumber EndFrameOffset;
    float PlayRate;
    uint8 bReverse;

};

struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneGroomCacheSectionTemplateParameters Params;

};

struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;

};

class AGroomActor : public AActor
{
    class UGroomComponent* GroomComponent;

};

class UGroomAsset : public UObject
{
    TArray<FHairGroupInfoWithVisibility> HairGroupsInfo;
    TArray<FHairGroupsRendering> HairGroupsRendering;
    TArray<FHairGroupsPhysics> HairGroupsPhysics;
    TArray<FHairGroupsInterpolation> HairGroupsInterpolation;
    TArray<FHairGroupsLOD> HairGroupsLOD;
    TArray<FHairGroupsCardsSourceDescription> HairGroupsCards;
    TArray<FHairGroupsMeshesSourceDescription> HairGroupsMeshes;
    TArray<FHairGroupsMaterial> HairGroupsMaterials;
    bool EnableGlobalInterpolation;
    EGroomInterpolationType HairInterpolationType;
    EHairLODSelectionType LODSelectionType;
    FPerPlatformInt MinLOD;
    FPerPlatformBool DisableBelowMinLodStripping;
    TArray<float> EffectiveLODBias;
    TArray<class UAssetUserData*> AssetUserData;

    void TestCleanStrands();
    void OffsetStrandsPivot(const FVector& Offset);
    void OffsetGroomPivot(const FVector& Offset);
    void CopyHairMeshesOnly(class UGroomAsset* SourceGroom);
    void CopyHairGroupsData(class UGroomAsset* SourceGroom);
};

class UGroomAssetImportData : public UAssetImportData
{
    class UGroomImportOptions* ImportOptions;

};

class UGroomBindingAsset : public UObject
{
    EGroomBindingMeshType GroomBindingType;
    class UGroomAsset* Groom;
    class USkeletalMesh* SourceSkeletalMesh;
    class USkeletalMesh* TargetSkeletalMesh;
    class UGeometryCache* SourceGeometryCache;
    class UGeometryCache* TargetGeometryCache;
    int32 NumInterpolationPoints;
    int32 MatchingSection;
    TArray<FGoomBindingGroupInfo> GroupInfos;

};

class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{

    class UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
    class UGroomBindingAsset* CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
    class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(FString DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
    class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
};

class UGroomCache : public UObject
{
    FGroomCacheInfo GroomCacheInfo;

};

class UGroomCacheImportData : public UAssetImportData
{
    FGroomCacheImportSettings Settings;

};

class UGroomCacheImportOptions : public UObject
{
    FGroomCacheImportSettings ImportSettings;

};

class UGroomComponent : public UMeshComponent
{
    class UGroomAsset* GroomAsset;
    class UGroomCache* GroomCache;
    TArray<class UNiagaraComponent*> NiagaraComponents;
    class USkeletalMesh* SourceSkeletalMesh;
    class UGroomBindingAsset* BindingAsset;
    class UPhysicsAsset* PhysicsAsset;
    class UMaterialInterface* Strands_DebugMaterial;
    class UMaterialInterface* Strands_DefaultMaterial;
    class UMaterialInterface* Cards_DefaultMaterial;
    class UMaterialInterface* Meshes_DefaultMaterial;
    class UNiagaraSystem* AngularSpringsSystem;
    class UNiagaraSystem* CosseratRodsSystem;
    FString AttachmentName;
    TArray<FHairGroupDesc> GroomGroupsDesc;
    bool bRunning;
    bool bLooping;
    bool bManualTick;
    float ElapsedTime;

    void TestPrimitiveParam();
    void SetGroomAsset(class UGroomAsset* Asset);
    void SetBindingAsset(class UGroomBindingAsset* InBinding);
};

class UGroomCreateBindingOptions : public UObject
{
    EGroomBindingMeshType GroomBindingType;
    class USkeletalMesh* SourceSkeletalMesh;
    class USkeletalMesh* TargetSkeletalMesh;
    class UGeometryCache* SourceGeometryCache;
    class UGeometryCache* TargetGeometryCache;
    int32 NumInterpolationPoints;
    int32 MatchingSection;

};

class UGroomCreateFollicleMaskOptions : public UObject
{
    int32 Resolution;
    int32 RootRadius;
    TArray<FFollicleMaskOptions> Grooms;

};

class UGroomCreateStrandsTexturesOptions : public UObject
{
    int32 Resolution;
    EStrandsTexturesTraceType TraceType;
    float TraceDistance;
    EStrandsTexturesMeshType MeshType;
    class UStaticMesh* StaticMesh;
    class USkeletalMesh* SkeletalMesh;
    int32 LODIndex;
    int32 SectionIndex;
    int32 UVChannelIndex;
    TArray<int32> GroupIndex;

};

class UGroomHairGroupsPreview : public UObject
{
    TArray<FGroomHairGroupPreview> Groups;

};

class UGroomImportOptions : public UObject
{
    FGroomConversionSettings ConversionSettings;
    TArray<FHairGroupsInterpolation> InterpolationSettings;

};

class UGroomPluginSettings : public UObject
{
    float GroomCacheLookAheadBuffer;

};

class UMovieSceneGroomCacheSection : public UMovieSceneSection
{
    FMovieSceneGroomCacheParams Params;

};

class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;

};

class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{
    class UGroomAsset* DefaultSource;
    class AActor* SourceActor;

};

class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
    class UPhysicsAsset* DefaultSource;
    class AActor* SourceActor;

};

class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{
};

class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{
    FIntVector GridSize;

};

#endif
