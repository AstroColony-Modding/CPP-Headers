enum class EVoxelDataPinCategory {
    Boolean = 0,
    Int = 1,
    Float = 2,
    Material = 3,
    Color = 4,
    EVoxelDataPinCategory_MAX = 5,
};

enum class EVoxelFunctionAxisDependencies {
    X = 0,
    XYWithCache = 1,
    XYWithoutCache = 2,
    XYZWithCache = 3,
    XYZWithoutCache = 4,
    EVoxelFunctionAxisDependencies_MAX = 5,
};

enum class EVoxelGraphGeneratorDebugLevel {
    BeforeMacroInlining = 0,
    AfterMacroInlining = 1,
    AfterBiomeMergeReplace = 2,
    AfterSmartMinMaxReplace = 3,
    BeforeFillFunctionSeparators = 4,
    Output = 5,
    Function = 6,
    Axis = 7,
    EVoxelGraphGeneratorDebugLevel_MAX = 8,
};

enum class EVoxelGraphMaterialPreviewType {
    RGB = 0,
    Alpha = 1,
    SingleIndex = 2,
    MultiIndex_Overview = 3,
    MultiIndex_SingleIndexPreview = 4,
    MultiIndex_Wetness = 5,
    UV0 = 6,
    UV1 = 7,
    UV2 = 8,
    UV3 = 9,
    EVoxelGraphMaterialPreviewType_MAX = 10,
};

enum class EVoxelGraphPreviewAxes {
    X = 0,
    Y = 1,
    Z = 2,
    EVoxelGraphPreviewAxes_MAX = 3,
};

enum class EVoxelGraphPreviewShowValue {
    ShowValue = 0,
    ShowRange = 1,
    ShowValueAndRange = 2,
    EVoxelGraphPreviewShowValue_MAX = 3,
};

enum class EVoxelGraphPreviewType {
    Density = 0,
    Material = 1,
    Cost = 2,
    RangeAnalysis = 3,
    EVoxelGraphPreviewType_MAX = 4,
};

enum class EVoxelNodeIfBranchToUseForRangeAnalysis {
    None = 0,
    UseTrue = 1,
    UseFalse = 2,
    EVoxelNodeIfBranchToUseForRangeAnalysis_MAX = 3,
};

enum class EVoxelPinCategory {
    Exec = 0,
    Boolean = 1,
    Int = 2,
    Float = 3,
    Material = 4,
    Color = 5,
    Seed = 6,
    Wildcard = 7,
    Vector = 8,
    EVoxelPinCategory_MAX = 9,
};

enum class EVoxelPortalNodePinCategory {
    Boolean = 0,
    Int = 1,
    Float = 2,
    Material = 3,
    Color = 4,
    Seed = 5,
    EVoxelPortalNodePinCategory_MAX = 6,
};

