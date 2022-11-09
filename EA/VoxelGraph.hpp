#ifndef UE4SS_SDK_VoxelGraph_HPP
#define UE4SS_SDK_VoxelGraph_HPP

#include "VoxelGraph_enums.hpp"

class UVoxelGraphGeneratorHelper : public UVoxelTransformableGenerator
{
    bool bEnableRangeAnalysis;

};

class UVDI_Capsule_Graph : public UVoxelGraphGeneratorHelper
{
    float Noise_Amplitude;
    int32 Seed;

};

class UVDI_Example_Crater_Graph : public UVoxelGraphGeneratorHelper
{
};

class UVDI_Ravine_Graph : public UVoxelGraphGeneratorHelper
{
};

class UVDI_Sphere_Graph : public UVoxelGraphGeneratorHelper
{
};

class UVG_Example_Craters : public UVoxelGraphGeneratorHelper
{
    float Radius;

};

class UVG_Example_Dunes : public UVoxelGraphGeneratorHelper
{
    float Direction_X;
    float Direction_Y;
    float Dune_Frequency;
    float Height;
    float Noise_Frequency;

};

class UVG_Example_Erosion : public UVoxelGraphGeneratorHelper
{
    float Erosion_Material_Offset;
    float Erosion_Material_Strength;
    float Erosion_Strength;
    float Height;
    TSoftObjectPtr<UMaterialInterface> Rocks;
    TSoftObjectPtr<UMaterialInterface> Snow;
    float Valleys_Height;

};

class UVG_Example_FastCraters : public UVoxelGraphGeneratorHelper
{
};

class UVG_Example_MultiIndex : public UVoxelGraphGeneratorHelper
{
    TSoftObjectPtr<UMaterialInterface> Layer_0;
    TSoftObjectPtr<UMaterialInterface> Layer_1;
    TSoftObjectPtr<UMaterialInterface> Layer_2;
    TSoftObjectPtr<UMaterialInterface> Layer_3;

};

struct FVoxelPin
{
    FGuid PinId;
    FString DefaultValue;
    EVoxelPinCategory PinCategory;
    TArray<class UVoxelNode*> OtherNodes;
    TArray<FGuid> OtherPinIds;

};

class UVoxelNode : public UObject
{
    TArray<FVoxelPin> InputPins;
    TArray<FVoxelPin> OutputPins;
    class UVoxelGraphGenerator* Graph;
    int32 InputPinCount;

};

class UVoxelNodeHelper : public UVoxelNode
{
};

class UVoxelExposedNode : public UVoxelNodeHelper
{
    FString DisplayName;
    FName UniqueName;
    FString Category;
    FString ToolTip;
    int32 Priority;
    FString UIMin;
    FString UIMax;
    TMap<class FName, class FString> CustomMetaData;
    bool bCanBeRenamed;

};

class UVoxelAssetPickerNode : public UVoxelExposedNode
{
};

class UVoxelPureNode : public UVoxelNodeHelper
{
};

class UVoxelNode_FLess : public UVoxelPureNode
{
};

class UVoxelNode_FLessEqual : public UVoxelPureNode
{
};

class UVoxelNode_FGreater : public UVoxelPureNode
{
};

class UVoxelNode_FGreaterEqual : public UVoxelPureNode
{
};

class UVoxelNode_FEqual : public UVoxelPureNode
{
};

class UVoxelNode_FNotEqual : public UVoxelPureNode
{
};

class UVoxelNode_ILess : public UVoxelPureNode
{
};

class UVoxelNode_ILessEqual : public UVoxelPureNode
{
};

class UVoxelNode_IGreater : public UVoxelPureNode
{
};

class UVoxelNode_IGreaterEqual : public UVoxelPureNode
{
};

class UVoxelNode_IEqual : public UVoxelPureNode
{
};

class UVoxelNode_INotEqual : public UVoxelPureNode
{
};

struct FBiomeMapElement
{
    FColor Color;
    FString Name;

};

class UVoxelNode_BiomeMapSampler : public UVoxelExposedNode
{
    class UTexture2D* Texture;
    int32 Threshold;
    TArray<FBiomeMapElement> Biomes;

};

class UVoxelNode_BiomeMerge : public UVoxelNode
{
    TArray<FString> Biomes;
    float Tolerance;

};

class UVoxelNodeWithDependencies : public UVoxelNodeHelper
{
};

class UVoxelNodeWithContext : public UVoxelNodeWithDependencies
{
};

class UVoxelNode_LOD : public UVoxelNodeWithContext
{
};

class UVoxelNode_VoxelSize : public UVoxelNodeHelper
{
};

class UVoxelNode_WorldSize : public UVoxelNodeHelper
{
};

class UVoxelNode_CompileTimeConstant : public UVoxelNodeHelper
{
    FName Name;
    EVoxelPinCategory Type;
    TMap<class FName, class FString> Constants;

};

class UVoxelCoordinateNode : public UVoxelNodeWithDependencies
{
};

class UVoxelNode_XF : public UVoxelCoordinateNode
{
};

class UVoxelNode_YF : public UVoxelCoordinateNode
{
};

class UVoxelNode_ZF : public UVoxelCoordinateNode
{
};

class UVoxelNode_GlobalX : public UVoxelCoordinateNode
{
};

class UVoxelNode_GlobalY : public UVoxelCoordinateNode
{
};

class UVoxelNode_GlobalZ : public UVoxelCoordinateNode
{
};

class UVoxelNode_LocalToGlobal : public UVoxelNodeWithContext
{
};

class UVoxelNode_GlobalToLocal : public UVoxelNodeWithContext
{
};

class UVoxelNode_TransformVector : public UVoxelNodeWithContext
{
};

class UVoxelNode_InverseTransformVector : public UVoxelNodeWithContext
{
};

class UVoxelNode_Curve : public UVoxelExposedNode
{
    class UCurveFloat* Curve;

};

class UVoxelNode_CurveColor : public UVoxelExposedNode
{
    class UCurveLinearColor* Curve;

};

class UVoxelNode_DataAssetSampler : public UVoxelExposedNode
{
    class UVoxelDataAsset* Asset;
    bool bBilinearInterpolation;

};

class UVoxelMaterialNode : public UVoxelNodeHelper
{
};

class UVoxelNode_MakeMaterialFromSingleIndex : public UVoxelMaterialNode
{
};

class UVoxelNode_GetDoubleIndex : public UVoxelMaterialNode
{
};

class UVoxelNode_MakeMaterialFromColor : public UVoxelMaterialNode
{
};

class UVoxelNode_MakeMaterialFromDoubleIndex : public UVoxelMaterialNode
{
};

class UVoxelNode_CreateDoubleIndexMaterial : public UVoxelMaterialNode
{
};

class UVoxelSetterNode : public UVoxelNodeHelper
{
};

class UVoxelNode_MaterialSetter : public UVoxelSetterNode
{
};

class UVoxelNode_SetDoubleIndex : public UVoxelNode_MaterialSetter
{
};

class UVoxelNode_WorldGeneratorSampler : public UVoxelExposedNode
{
    FVoxelGeneratorPicker WorldGenerator;
    TArray<FName> Seeds;

};

class UVoxelNode_XI : public UVoxelNodeHelper
{
};

class UVoxelNode_YI : public UVoxelNodeHelper
{
};

class UVoxelNode_ZI : public UVoxelNodeHelper
{
};

class UVoxelNode_PerlinWormDistance : public UVoxelNodeHelper
{
};

class UVoxelExample_Cave : public UVoxelGraphGeneratorHelper
{
    float Bottom_Noise_Frequency;
    float Bottom_Noise_Scale;
    int32 Bottom_Noise_Seed;
    int32 Global_Height_Seed;
    int32 Top_Noise_Seed;
    float Top_Noise_Frequency;
    float Top_Noise_Scale;
    float Bottom_Top_Merge_Smoothness;
    float Global_Height_Merge_Smoothness;
    float Global_Height_Noise_Frequency;
    float Global_Height_Noise_Scale;
    float Global_Height_Offset;
    float Cave_Height;
    float Cave_Radius;
    float Cave_Walls_Smoothness;

};

class UVoxelExample_Cliffs : public UVoxelGraphGeneratorHelper
{
    float Cliffs_Slope;
    float Height;
    float Overhangs;
    float Base_Shape_Frequency;
    float Base_Shape_Offset;
    int32 Base_Shape_Seed;
    int32 Sides_Noise_Seed;
    int32 Top_Noise_Seed;
    float Sides_Noise_Amplitude;
    float Sides_Noise_Frequency;
    float Top_Noise_Frequency;
    float Top_Noise_Scale;

};

class UVoxelExample_FloatingIslandOnion : public UVoxelGraphGeneratorHelper
{
    float Height;
    float Perturb_Amplitude;
    float Perturb_Frequency;
    int32 Seed;
    float Top_Noise_Frequency;
    float Top_Noise_Height;

};

class UVoxelExample_HeightmapComposition : public UVoxelGraphGeneratorHelper
{
    float Depth;
    bool Flip_X;
    bool Flip_Y;
    TSoftObjectPtr<UVoxelHeightmapAssetUINT16> heightmap_x0_y0;
    TSoftObjectPtr<UVoxelHeightmapAssetUINT16> heightmap_x0_y1;
    TSoftObjectPtr<UVoxelHeightmapAssetUINT16> heightmap_x1_y0;
    TSoftObjectPtr<UVoxelHeightmapAssetUINT16> heightmap_x1_y1;
    float Size_X;
    float Size_Y;

};

class UVoxelExample_HollowPlanet : public UVoxelGraphGeneratorHelper
{
    float Intersection_Smoothness;
    float Noise_Bias;
    float Noise_Frequency;
    float Noise_Scale;
    float Radius;
    int32 Seed;
    bool Use_IQ_Noise;

};

class UVoxelExample_IQNoise : public UVoxelGraphGeneratorHelper
{
    float Frequency;
    float Height;
    int32 Seed;

};

class UVoxelExample_LayeredPlanet : public UVoxelGraphGeneratorHelper
{
    float Frequency;
    TSoftObjectPtr<UCurveFloat> None1;
    int32 Seed;
    bool Slice_Mode;

};

class UVoxelExample_LayeredWorld : public UVoxelGraphGeneratorHelper
{
    float Frequency;
    TSoftObjectPtr<UCurveFloat> None1;
    int32 Seed;

};

class UVoxelExample_Planet : public UVoxelGraphGeneratorHelper
{
    float Frequency;
    int32 Noise_Seed;
    float Noise_Strength;
    TSoftObjectPtr<UCurveLinearColor> PlanetColorCurve;
    TSoftObjectPtr<UCurveFloat> PlanetCurve;
    float Radius;

};

class UVoxelExample_Ravines : public UVoxelGraphGeneratorHelper
{
    float _3D_Noise_Frequency;
    int32 _3D_Noise_Seed;
    float Bottom_Transition_Smoothness;
    float Height;
    float Top_Transition_Smoothness;

};

class UVoxelExample_RingWorld : public UVoxelGraphGeneratorHelper
{
    float Radius;
    float RingEdgesHardness;
    float Scale;
    float Thickness;
    float Width_in_Degrees;
    float RiverDepth;
    float RiverWidth;
    FLinearColor BeachColor;
    FLinearColor MountainsColorHigh;
    FLinearColor MountainsColorLowHigh;
    FLinearColor MountainsColorLowLow;
    TSoftObjectPtr<UCurveFloat> MoutainsMaskCurve;
    FLinearColor PlainsColorHigh;
    FLinearColor PlainsColorLow;
    float PlainsNoiseFrequency;
    float PlainsNoiseHeight;
    TSoftObjectPtr<UCurveFloat> PlainsNoiseStrengthCurve;
    TSoftObjectPtr<UCurveFloat> RingMainShapeCurve;
    FLinearColor RingOuterColor;
    FLinearColor RiverColor;
    TSoftObjectPtr<UCurveFloat> RiverDepthCurve;
    float MountainsNoiseFrequency;
    float MountainsNoiseHeight;
    float BaseNoiseFrquency;
    float BaseNoiseHeight;
    float BaseHeight;

};

class UVoxelExample_Tool_NoisyColors : public UVoxelGraphGeneratorHelper
{
    FLinearColor Color;

};

class UVoxelNode_SetColor : public UVoxelNode_MaterialSetter
{
};

class UVoxelNode_SetSingleIndex : public UVoxelNode_MaterialSetter
{
};

class UVoxelNode_SetMultiIndexWetness : public UVoxelNode_MaterialSetter
{
};

class UVoxelNode_AddMultiIndex : public UVoxelNode_MaterialSetter
{
};

class UVoxelNode_SetUVs : public UVoxelNode_MaterialSetter
{
    bool bSetU;
    bool bSetV;

};

struct FVoxelGraphOutput
{
    FName Name;
    EVoxelDataPinCategory Category;
    FGuid Guid;
    uint32 Index;

};

class UVoxelNode_SetNode : public UVoxelSetterNode
{
    uint32 Index;
    FVoxelGraphOutput CachedOutput;

};

class UVoxelNode_SetValueNode : public UVoxelNode_SetNode
{
};

class UVoxelNode_FunctionSeparator : public UVoxelNodeHelper
{
};

struct FVoxelNamedDataPin
{
    EVoxelDataPinCategory Type;
    FString Name;

};

class UVoxelNode_FlowMerge : public UVoxelNode
{
    TArray<FVoxelNamedDataPin> Types;

};

class UVoxelNode_SampleFoliageMaterialIndex : public UVoxelNodeWithContext
{
};

class UVoxelNode_NoiseNode : public UVoxelNodeWithContext
{
    float Frequency;
    EVoxelNoiseInterpolation Interpolation;
    uint32 NumberOfSamples;
    float Tolerance;
    TArray<FVoxelRange> OutputRanges;

};

class UVoxelNode_2DGavoronoiNoise : public UVoxelNode_NoiseNode
{
    float Jitter;

};

class UVoxelNode_NoiseNodeFractal : public UVoxelNode_NoiseNode
{
    int32 FractalOctaves;
    float FractalLacunarity;
    float FractalGain;
    EVoxelNoiseFractalType FractalType;
    TMap<FString, uint8> LODToOctavesMap;

};

class UVoxelNode_2DGavoronoiNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
    float Jitter;

};

class UVoxelNode_NoiseNodeWithDerivativeFractal : public UVoxelNode_NoiseNodeFractal
{
    bool bComputeDerivative;

};

class UVoxelNode_2DErosion : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
    float Jitter;

};

class UVoxelNode_GeneratorSamplerBase : public UVoxelExposedNode
{
};

class UVoxelNode_GeneratorMerge : public UVoxelNode_GeneratorSamplerBase
{
    class UVoxelGraphOutputsConfig* Outputs;
    EVoxelMaterialConfig MaterialConfig;
    TArray<FVoxelGeneratorPicker> Generators;
    float Tolerance;

};

class UVoxelNode_SingleGeneratorSamplerBase : public UVoxelNode_GeneratorSamplerBase
{
    FVoxelGeneratorPicker Generator;

};

class UVoxelNode_GetGeneratorValue : public UVoxelNode_SingleGeneratorSamplerBase
{
};

class UVoxelNode_GetGeneratorMaterial : public UVoxelNode_SingleGeneratorSamplerBase
{
};

class UVoxelNode_GetGeneratorCustomOutput : public UVoxelNode_SingleGeneratorSamplerBase
{
    FName OutputName;

};

class UVoxelNode_GetLandscapeCollectionIndex : public UVoxelExposedNode
{
    FName LayerName;

};

class UVoxelNode_GetMaterialCollectionIndex : public UVoxelAssetPickerNode
{
    class UMaterialInterface* Material;

};

class UVoxelNode_GradientPerturb : public UVoxelNode_NoiseNode
{
};

class UVoxelNode_GradientPerturbFractal : public UVoxelNode_NoiseNodeFractal
{
};

class UVoxelNode_2DGradientPerturb : public UVoxelNode_GradientPerturb
{
};

class UVoxelNode_2DGradientPerturbFractal : public UVoxelNode_GradientPerturbFractal
{
};

class UVoxelNode_3DGradientPerturb : public UVoxelNode_GradientPerturb
{
};

class UVoxelNode_3DGradientPerturbFractal : public UVoxelNode_GradientPerturbFractal
{
};

class UVoxelGraphAssetNode : public UVoxelNodeWithContext
{
    FVoxelGeneratorPicker DefaultGenerator;

};

class UVoxelNode_EditGetValue : public UVoxelGraphAssetNode
{
};

class UVoxelNode_EditGetMaterial : public UVoxelGraphAssetNode
{
};

class UVoxelNode_EditGetCustomOutput : public UVoxelGraphAssetNode
{
    FName OutputName;

};

class UVoxelNode_EditGetHardness : public UVoxelNodeHelper
{
};

class UVoxelGraphDataItemConfig : public UObject
{
    TArray<FName> Parameters;

};

class UVoxelGraphGenerator : public UVoxelTransformableGenerator
{
    class UVoxelGraphOutputsConfig* Outputs;
    bool bAutomaticPreview;
    bool bShowFlowMergeAndFunctionsWarnings;
    bool bUseCppClassInsteadOfGraph;
    TSoftClassPtr<UVoxelGenerator> GeneratedCppClass;
    bool bCompileToCppOnSave;
    FFilePath SaveLocation;
    bool bBuiltinPluginGenerator;
    bool bEnableRangeAnalysis;
    bool bEnableDebugGraph;
    bool bShowFunctions;
    bool bDetailedErrors;
    bool bShowPinsIds;
    bool bShowAxisDependencies;
    EVoxelGraphGeneratorDebugLevel DebugLevel;
    FString TargetToDebug;
    int32 FunctionToDebug;
    EVoxelFunctionAxisDependencies AxisDependenciesToDebug;
    float NodesDepthScaleFactor;
    bool bHideDataNodes;
    TArray<class UVoxelNode*> AllNodes;
    TArray<class UVoxelNode*> DebugNodes;
    class UVoxelNode* FirstNode;
    FGuid FirstNodePinId;
    class UVoxelGraphPreviewSettings* PreviewSettings;

};

struct FVoxelGraphMacroPin
{
    FString Name;
    EVoxelPinCategory Category;
    FString ToolTip;
    FString DefaultValue;
    bool bCustomDefaultValue;

};

class UVoxelGraphMacroInputOutputNode : public UVoxelNode
{
    TArray<FVoxelGraphMacroPin> Pins;
    class UVoxelGraphMacro* Macro;

};

class UVoxelGraphMacroInputNode : public UVoxelGraphMacroInputOutputNode
{
};

class UVoxelGraphMacroOutputNode : public UVoxelGraphMacroInputOutputNode
{
};

class UVoxelGraphMacro : public UVoxelGraphGenerator
{
    FString ToolTip;
    FString Keywords;
    FString CustomCategory;
    FString CustomName;
    bool bShowInContextMenu;
    bool bVectorOnlyNode;
    class UVoxelGraphMacroInputNode* InputNode;
    class UVoxelGraphMacroOutputNode* OutputNode;

};

class UVoxelGraphMacroNode : public UVoxelNode
{
    class UVoxelGraphMacro* Macro;

};

class UVoxelGraphOutputsConfig : public UObject
{
    TArray<FVoxelGraphOutput> Outputs;

};

class UVoxelGraphPreviewSettings : public UObject
{
    bool bShowStats;
    bool bShowValues;
    FString MinValue;
    FString MaxValue;
    FVoxelIntBox PreviewedBounds;
    EVoxelGraphPreviewAxes LeftToRight;
    EVoxelGraphPreviewAxes BottomToTop;
    int32 Resolution;
    int32 ResolutionMultiplierLog;
    FIntVector Center;
    FIntVector PreviewedVoxel;
    EVoxelGraphPreviewShowValue ShowValue;
    EVoxelMaterialConfig MaterialConfig;
    class UVoxelMaterialCollectionBase* MaterialCollection;
    class UVoxelPlaceableItemManager* PlaceableItemManager;
    float VoxelSize;
    EVoxelRenderType RenderType;
    EVoxelGraphPreviewType PreviewType2D;
    bool bDrawColoredDistanceField;
    EVoxelGraphMaterialPreviewType MaterialPreviewType;
    int32 MultiIndexToPreview;
    TArray<FColor> IndexColors;
    bool bHybridMaterialRendering;
    float CostPercentile;
    int32 NumRangeAnalysisChunksPerAxis;
    bool bHeightmapMode;
    bool bHeightBasedColor;
    bool bEnableWater;
    float Height;
    FVector LightDirection;
    float StartBias;
    int32 MaxSteps;
    float Brightness;
    float ShadowDensity;
    class UStaticMesh* Mesh;
    class UMaterialInterface* HeightmapMaterial;
    class UMaterialInterface* SliceMaterial;
    bool bAutoNormalize;
    float NormalizeMinValue;
    float NormalizeMaxValue;
    int32 LODToPreview;

};

class UVoxelNode_HeightmapSampler : public UVoxelExposedNode
{
    bool bFloatHeightmap;
    class UVoxelHeightmapAssetFloat* HeightmapFloat;
    class UVoxelHeightmapAssetUINT16* HeightmapUINT16;
    EVoxelSamplerMode SamplerType;
    bool bCenter;

};

class UVoxelNode_HeightSplitter : public UVoxelNodeHelper
{
    int32 NumSplits;

};

class UVoxelNode_If : public UVoxelNodeHelper
{
    EVoxelNodeIfBranchToUseForRangeAnalysis BranchToUseForRangeAnalysis;

};

class UVoxelNode_IfWithDefaultToFalse : public UVoxelNode_If
{
};

class UVoxelNode_IfWithDefaultToTrue : public UVoxelNode_If
{
};

class UVoxelLocalVariableBase : public UVoxelNode
{
};

class UVoxelLocalVariableDeclaration : public UVoxelLocalVariableBase
{
    FName Name;
    EVoxelPortalNodePinCategory Category;
    FGuid VariableGuid;

};

struct FVoxelPortalNodeSelector
{
    TWeakObjectPtr<class UVoxelLocalVariableDeclaration> Input;

};

class UVoxelLocalVariableUsage : public UVoxelLocalVariableBase
{
    FVoxelPortalNodeSelector Selector;
    class UVoxelLocalVariableDeclaration* Declaration;
    FGuid DeclarationGuid;

};

class UVoxelNode_GetColor : public UVoxelMaterialNode
{
};

class UVoxelNode_GetIndex : public UVoxelMaterialNode
{
};

class UVoxelNode_GetUVChannel : public UVoxelMaterialNode
{
};

class UVoxelNode_FMax : public UVoxelPureNode
{
};

class UVoxelNode_FMin : public UVoxelPureNode
{
};

class UVoxelNode_IMax : public UVoxelPureNode
{
};

class UVoxelNode_IMin : public UVoxelPureNode
{
};

class UVoxelNode_FAdd : public UVoxelPureNode
{
};

class UVoxelNode_FMultiply : public UVoxelPureNode
{
};

class UVoxelNode_FSubstract : public UVoxelPureNode
{
};

class UVoxelNode_FDivide : public UVoxelPureNode
{
};

class UVoxelNode_IAdd : public UVoxelPureNode
{
};

class UVoxelNode_IMultiply : public UVoxelPureNode
{
};

class UVoxelNode_ISubstract : public UVoxelPureNode
{
};

class UVoxelNode_IDivide : public UVoxelPureNode
{
};

class UVoxelNode_ILeftBitShift : public UVoxelPureNode
{
};

class UVoxelNode_IRightBitShift : public UVoxelPureNode
{
};

class UVoxelNode_FloatOfInt : public UVoxelPureNode
{
};

class UVoxelNode_Round : public UVoxelPureNode
{
};

class UVoxelNode_Lerp : public UVoxelPureNode
{
};

class UVoxelNode_SafeLerp : public UVoxelPureNode
{
};

class UVoxelNode_SmoothStep : public UVoxelPureNode
{
};

class UVoxelNode_Clamp : public UVoxelPureNode
{
};

class UVoxelNode_BAnd : public UVoxelPureNode
{
};

class UVoxelNode_BOr : public UVoxelPureNode
{
};

class UVoxelNode_BNot : public UVoxelPureNode
{
};

class UVoxelNode_SwitchInt : public UVoxelNodeHelper
{
};

class UVoxelNode_SwitchFloat : public UVoxelNodeHelper
{
};

class UVoxelNode_SwitchColor : public UVoxelNodeHelper
{
};

class UVoxelNode_1MinusX : public UVoxelPureNode
{
};

class UVoxelNode_OneOverX : public UVoxelPureNode
{
};

class UVoxelNode_MinusX : public UVoxelPureNode
{
};

class UVoxelNode_Sqrt : public UVoxelPureNode
{
};

class UVoxelNode_Pow : public UVoxelPureNode
{
};

class UVoxelNode_IMod : public UVoxelPureNode
{
};

class UVoxelNode_FMod : public UVoxelPureNode
{
};

class UVoxelNode_FAbs : public UVoxelPureNode
{
};

class UVoxelNode_IAbs : public UVoxelPureNode
{
};

class UVoxelNode_Ceil : public UVoxelPureNode
{
};

class UVoxelNode_Floor : public UVoxelPureNode
{
};

class UVoxelNode_VectorLength : public UVoxelPureNode
{
};

class UVoxelNode_Fraction : public UVoxelPureNode
{
};

class UVoxelNode_FSign : public UVoxelPureNode
{
};

class UVoxelNode_ISign : public UVoxelPureNode
{
};

class UVoxelNode_InvSqrt : public UVoxelPureNode
{
};

class UVoxelNode_Loge : public UVoxelPureNode
{
};

class UVoxelNode_Exp : public UVoxelPureNode
{
};

class UVoxelNode_Sin : public UVoxelPureNode
{
};

class UVoxelNode_Asin : public UVoxelPureNode
{
};

class UVoxelNode_Sinh : public UVoxelPureNode
{
};

class UVoxelNode_Cos : public UVoxelPureNode
{
};

class UVoxelNode_Acos : public UVoxelPureNode
{
};

class UVoxelNode_SinCos : public UVoxelPureNode
{
};

class UVoxelNode_Tan : public UVoxelPureNode
{
};

class UVoxelNode_Atan : public UVoxelPureNode
{
};

class UVoxelNode_Atan2 : public UVoxelPureNode
{
};

class UVoxelNode_VectorRotateAngleAxis : public UVoxelPureNode
{
};

class UVoxelNode_BreakColorInt : public UVoxelPureNode
{
};

class UVoxelNode_BreakColorFloat : public UVoxelPureNode
{
};

class UVoxelNode_MakeColorInt : public UVoxelPureNode
{
};

class UVoxelNode_MakeColorFloat : public UVoxelPureNode
{
};

class UVoxelNode_RGBToHSV : public UVoxelPureNode
{
};

class UVoxelNode_HSVToRGB : public UVoxelPureNode
{
};

class UVoxelNode_InverseTransformPositionXZ : public UVoxelPureNode
{
};

class UVoxelNode_Pi : public UVoxelPureNode
{
};

class UVoxelNode_NormalizeSum : public UVoxelPureNode
{
};

class UVoxelGraphNodeInterface : public UEdGraphNode
{
    FString InfoMsg;
    FString WarningMsg;

};

class UVoxelNode_NoiseNodeWithDerivative : public UVoxelNode_NoiseNode
{
    bool bComputeDerivative;

};

class UVoxelNode_2DValueNoise : public UVoxelNode_NoiseNodeWithDerivative
{
};

class UVoxelNode_2DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
};

class UVoxelNode_2DPerlinNoise : public UVoxelNode_NoiseNodeWithDerivative
{
};

class UVoxelNode_2DPerlinNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
};

class UVoxelNode_2DSimplexNoise : public UVoxelNode_NoiseNode
{
};

class UVoxelNode_2DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
};

class UVoxelNode_2DCubicNoise : public UVoxelNode_NoiseNode
{
};

class UVoxelNode_2DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
};

class UVoxelNode_3DValueNoise : public UVoxelNode_NoiseNodeWithDerivative
{
};

class UVoxelNode_3DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
};

class UVoxelNode_3DPerlinNoise : public UVoxelNode_NoiseNodeWithDerivative
{
};

class UVoxelNode_3DPerlinNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
};

class UVoxelNode_3DSimplexNoise : public UVoxelNode_NoiseNode
{
};

class UVoxelNode_3DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
};

class UVoxelNode_3DCubicNoise : public UVoxelNode_NoiseNode
{
};

class UVoxelNode_3DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
};

class UVoxelNode_CellularNoise : public UVoxelNode_NoiseNode
{
    EVoxelCellularDistanceFunction DistanceFunction;
    EVoxelCellularReturnType ReturnType;
    float Jitter;

};

class UVoxelNode_2DCellularNoise : public UVoxelNode_CellularNoise
{
};

class UVoxelNode_3DCellularNoise : public UVoxelNode_CellularNoise
{
};

class UVoxelNode_IQNoiseBase : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
};

class UVoxelNode_2DIQNoiseBase : public UVoxelNode_IQNoiseBase
{
    float Rotation;

};

class UVoxelNode_2DIQNoise : public UVoxelNode_2DIQNoiseBase
{
};

class UVoxelNode_3DIQNoiseBase : public UVoxelNode_IQNoiseBase
{
    FRotator Rotation;

};

class UVoxelNode_3DIQNoise : public UVoxelNode_3DIQNoiseBase
{
};

class UVoxelNode_CraterNoise : public UVoxelNode_NoiseNode
{
    float Jitter;
    float FalloffExponent;

};

class UVoxelNode_CraterNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
    float Jitter;
    float FalloffExponent;

};

class UVoxelNode_2DCraterNoise : public UVoxelNode_CraterNoise
{
};

class UVoxelNode_3DCraterNoise : public UVoxelNode_CraterNoise
{
};

class UVoxelNode_2DCraterNoiseFractal : public UVoxelNode_CraterNoiseFractal
{
};

class UVoxelNode_3DCraterNoiseFractal : public UVoxelNode_CraterNoiseFractal
{
};

class UVoxelNode_StaticClampFloat : public UVoxelNodeHelper
{
    float Min;
    float Max;

};

class UVoxelNode_RangeAnalysisDebuggerFloat : public UVoxelNodeHelper
{
    float Min;
    float Max;
    float GraphMin;
    float GraphMax;
    float GraphStep;
    FRuntimeFloatCurve Curve;

};

class UVoxelNode_Sleep : public UVoxelNodeHelper
{
    int32 NumberOfLoops;

};

class UVoxelNode_RangeUnion : public UVoxelNodeHelper
{
};

class UVoxelNode_IsSingleBool : public UVoxelNodeHelper
{
};

class UVoxelNode_GetRangeAnalysis : public UVoxelNodeHelper
{
};

class UVoxelNode_SmartMin : public UVoxelNodeHelper
{
};

class UVoxelNode_SmartMax : public UVoxelNodeHelper
{
};

class UVoxelNode_FloatParameter : public UVoxelExposedNode
{
    float Value;

};

class UVoxelNode_IntParameter : public UVoxelExposedNode
{
    int32 Value;

};

class UVoxelNode_ColorParameter : public UVoxelExposedNode
{
    FLinearColor Color;

};

class UVoxelNode_BoolParameter : public UVoxelExposedNode
{
    bool Value;

};

class UVoxelNode_DataItemSample : public UVoxelNodeWithContext
{
    int32 Mask;
    EVoxelDataItemCombineMode CombineMode;

};

class UVoxelNode_DataItemParameters : public UVoxelNodeWithContext
{
    class UVoxelGraphDataItemConfig* Config;
    TMap<FName, float> PreviewValues;

};

class UVoxelNode_RandomFloat : public UVoxelNodeHelper
{
    float Min;
    float Max;

};

class UVoxelNode_RandomInt : public UVoxelNodeHelper
{
    int32 Min;
    int32 Max;

};

class UVoxelSDFNode : public UVoxelPureNode
{
};

class UVoxelNode_SphereSDF : public UVoxelSDFNode
{
};

class UVoxelNode_BoxSDF : public UVoxelSDFNode
{
};

class UVoxelNode_RoundBoxSDF : public UVoxelSDFNode
{
};

class UVoxelNode_TorusSDF : public UVoxelSDFNode
{
};

class UVoxelNode_CappedTorusSDF : public UVoxelSDFNode
{
};

class UVoxelNode_LinkSDF : public UVoxelSDFNode
{
};

class UVoxelNode_CylinderSDF : public UVoxelSDFNode
{
};

class UVoxelNode_ConeSDF : public UVoxelSDFNode
{
};

class UVoxelNode_ConeFastSDF : public UVoxelSDFNode
{
};

class UVoxelNode_InfiniteConeSDF : public UVoxelSDFNode
{
};

class UVoxelNode_PlaneSDF : public UVoxelSDFNode
{
};

class UVoxelNode_HexPrismSDF : public UVoxelSDFNode
{
};

class UVoxelNode_TriPrismSDF : public UVoxelSDFNode
{
};

class UVoxelNode_CapsuleSDF : public UVoxelSDFNode
{
};

class UVoxelNode_VerticalCapsuleSDF : public UVoxelSDFNode
{
};

class UVoxelNode_VerticalCappedCylinderSDF : public UVoxelSDFNode
{
};

class UVoxelNode_CappedCylinderSDF : public UVoxelSDFNode
{
};

class UVoxelNode_RoundedCylinderSDF : public UVoxelSDFNode
{
};

class UVoxelNode_VerticalCappedConeSDF : public UVoxelSDFNode
{
};

class UVoxelNode_CappedConeSDF : public UVoxelSDFNode
{
};

class UVoxelNode_SolidAngleSDF : public UVoxelSDFNode
{
};

class UVoxelNode_VerticalRoundConeSDF : public UVoxelSDFNode
{
};

class UVoxelNode_RoundConeSDF : public UVoxelSDFNode
{
};

class UVoxelNode_EllipsoidSDF : public UVoxelSDFNode
{
};

class UVoxelNode_OctahedronSDF : public UVoxelSDFNode
{
};

class UVoxelNode_OctahedronFastSDF : public UVoxelSDFNode
{
};

class UVoxelNode_PyramidSDF : public UVoxelSDFNode
{
};

class UVoxelNode_SmoothUnion : public UVoxelSDFNode
{
};

class UVoxelNode_SmoothSubtraction : public UVoxelSDFNode
{
};

class UVoxelNode_SmoothIntersection : public UVoxelSDFNode
{
};

class UVoxelSeedNode : public UVoxelNodeHelper
{
};

class UVoxelNode_Seed : public UVoxelExposedNode
{
    int32 DefaultValue;
    FName Name;

};

class UVoxelNode_AddSeeds : public UVoxelSeedNode
{
};

class UVoxelNode_MakeSeeds : public UVoxelSeedNode
{
    int32 NumOutputs;

};

class UVoxelNode_TextureSampler : public UVoxelExposedNode
{
    class UTexture2D* Texture;
    bool bBilinearInterpolation;
    EVoxelSamplerMode Mode;

};

class UVoxelNode_VoxelTextureSampler : public UVoxelExposedNode
{
    bool bBilinearInterpolation;
    EVoxelSamplerMode Mode;
    FVoxelFloatTexture Texture;

};

class UVoxelNode_VoronoiNoiseBase : public UVoxelNodeHelper
{
    bool bComputeNeighbors;
    int32 Dimension;

};

class UVoxelNode_2DVoronoiNoise : public UVoxelNode_VoronoiNoiseBase
{
};

class UVoxelNode_2DWhiteNoise : public UVoxelNodeHelper
{
};

class UVoxelNode_3DWhiteNoise : public UVoxelNodeHelper
{
};

#endif
