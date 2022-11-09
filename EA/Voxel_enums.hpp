enum class EVoxelTaskType {
    ChunksMeshing = 0,
    CollisionsChunksMeshing = 1,
    VisibleChunksMeshing = 2,
    VisibleCollisionsChunksMeshing = 3,
    CollisionCooking = 4,
    FoliageBuild = 5,
    HISMBuild = 6,
    AsyncEditFunctions = 7,
    MeshMerge = 8,
    RenderOctree = 9,
    Max = 10,
};

enum class EVoxelRenderType {
    MarchingCubes = 0,
    Cubic = 1,
    SurfaceNets = 2,
    EVoxelRenderType_MAX = 3,
};

enum class EVoxelRGBHardness {
    FourWayBlend = 0,
    FiveWayBlend = 1,
    R = 2,
    G = 3,
    B = 4,
    A = 5,
    U0 = 6,
    U1 = 7,
    V0 = 8,
    V1 = 9,
    EVoxelRGBHardness_MAX = 10,
};

enum class EVoxelNormalConfig {
    NoNormal = 0,
    GradientNormal = 1,
    FlatNormal = 2,
    MeshNormal = 3,
    EVoxelNormalConfig_MAX = 4,
};

enum class EVoxelUVConfig {
    GlobalUVs = 0,
    PackWorldUpInUVs = 1,
    PerVoxelUVs = 2,
    Max = 3,
};

enum class EVoxelMaterialConfig {
    RGB = 0,
    SingleIndex = 1,
    DoubleIndex_DEPRECATED = 2,
    MultiIndex = 3,
    EVoxelMaterialConfig_MAX = 4,
};

enum class EVoxelGeneratorPickerType {
    Class = 0,
    Object = 1,
    EVoxelGeneratorPickerType_MAX = 2,
};

enum class EVoxelWorldCoordinatesRounding {
    RoundToNearest = 0,
    RoundUp = 1,
    RoundDown = 2,
    EVoxelWorldCoordinatesRounding_MAX = 3,
};

enum class EVoxelAssetActorPreviewUpdateType {
    Manually = 0,
    EndOfMove = 1,
    RealTime = 2,
    EVoxelAssetActorPreviewUpdateType_MAX = 3,
};

enum class EVoxelAssetMergeMode {
    AllValues = 0,
    AllMaterials = 1,
    AllValuesAndAllMaterials = 2,
    InnerValues = 3,
    InnerMaterials = 4,
    InnerValuesAndInnerMaterials = 5,
    EVoxelAssetMergeMode_MAX = 6,
};

enum class EVoxelMemoryUsageType {
    VoxelsDirtyValuesData = 0,
    VoxelsDirtyMaterialsData = 1,
    VoxelsCachedValuesData = 2,
    VoxelsCachedMaterialsData = 3,
    UndoRedo = 4,
    Multiplayer = 5,
    IntermediateBuffers = 6,
    MeshesIndices = 7,
    MeshesTessellationIndices = 8,
    MeshesVertices = 9,
    MeshesColors = 10,
    MeshesUVsAndTangents = 11,
    DataAssets = 12,
    HeightmapAssets = 13,
    UncompressedSaves = 14,
    CompressedSaves = 15,
    EVoxelMemoryUsageType_MAX = 16,
};

enum class EVoxelDataAssetImportSource {
    None = 0,
    MagicaVox = 1,
    RawVox = 2,
    Mesh = 3,
    EVoxelDataAssetImportSource_MAX = 4,
};

enum class EVoxelShapeType {
    Bowl = 0,
    Donut = 1,
    Boomerang = 2,
    Bullet = 3,
    Spike = 4,
    Cauliflower = 5,
    Fang = 6,
    Elipsoid = 7,
    Spheroid = 8,
    Crater = 9,
    _MAX = 10,
    EVoxelShapeType_MAX = 11,
};

enum class EVoxelTerrainType {
    Mud = 0,
    Frozen = 1,
    Gravel = 2,
    Sand = 3,
    Volcanic = 4,
    Moss = 5,
    None = 6,
    Ice = 7,
    Stone = 8,
    Quartz = 9,
    Magma = 10,
    Water = 11,
    _MAX = 12,
    EVoxelTerrainType_MAX = 13,
};

enum class EVoxelDataItemCombineMode {
    Min = 0,
    Max = 1,
    Sum = 2,
};

enum class EVoxel32BitMask {
    Channel0 = 0,
    Channel1 = 1,
    Channel2 = 2,
    Channel3 = 3,
    Channel4 = 4,
    Channel5 = 5,
    Channel6 = 6,
    Channel7 = 7,
    Channel8 = 8,
    Channel9 = 9,
    Channel10 = 10,
    Channel11 = 11,
    Channel12 = 12,
    Channel13 = 13,
    Channel14 = 14,
    Channel15 = 15,
    Channel16 = 16,
    Channel17 = 17,
    Channel18 = 18,
    Channel19 = 19,
    Channel20 = 20,
    Channel21 = 21,
    Channel22 = 22,
    Channel23 = 23,
    Channel24 = 24,
    Channel25 = 25,
    Channel26 = 26,
    Channel27 = 27,
    Channel28 = 28,
    Channel29 = 29,
    Channel30 = 30,
    Channel31 = 31,
    EVoxel32BitMask_MAX = 32,
};

enum class EVoxelAxis {
    X = 0,
    Y = 1,
    Z = 2,
    EVoxelAxis_MAX = 3,
};

enum class EVoxelComputeDevice {
    CPU = 0,
    GPU = 1,
    EVoxelComputeDevice_MAX = 2,
};

enum class EVoxelFalloff {
    Linear = 0,
    Smooth = 1,
    Spherical = 2,
    Tip = 3,
    EVoxelFalloff_MAX = 4,
};

enum class EVoxelDataType {
    Values = 0,
    Materials = 1,
    EVoxelDataType_MAX = 2,
};

enum class EVoxelSamplerMode {
    Clamp = 0,
    Tile = 1,
    EVoxelSamplerMode_MAX = 2,
};

enum class EVoxelSpawnerActorSpawnType {
    All = 0,
    OnlyFloating = 1,
    EVoxelSpawnerActorSpawnType_MAX = 2,
};

enum class EVoxelRGBA {
    R = 0,
    G = 1,
    B = 2,
    A = 3,
    EVoxelRGBA_MAX = 4,
};

enum class EVoxelCellularReturnType {
    CellValue = 0,
    Distance = 1,
    Distance2 = 2,
    Distance2Add = 3,
    Distance2Sub = 4,
    Distance2Mul = 5,
    Distance2Div = 6,
    EVoxelCellularReturnType_MAX = 7,
};

enum class EVoxelCellularDistanceFunction {
    Euclidean = 0,
    Manhattan = 1,
    Natural = 2,
    EVoxelCellularDistanceFunction_MAX = 3,
};

enum class EVoxelNoiseFractalType {
    FBM = 0,
    Billow = 1,
    RigidMulti = 2,
    EVoxelNoiseFractalType_MAX = 3,
};

enum class EVoxelNoiseInterpolation {
    Linear = 0,
    Hermite = 1,
    Quintic = 2,
    EVoxelNoiseInterpolation_MAX = 3,
};

enum class EVoxelGeneratorParameterPropertyType {
    Float = 0,
    Int = 1,
    Bool = 2,
    Name = 3,
    Object = 4,
    Struct = 5,
    EVoxelGeneratorParameterPropertyType_MAX = 6,
};

enum class EVoxelGeneratorParameterContainerType {
    None = 0,
    Array = 1,
    Set = 2,
    Map = 3,
    EVoxelGeneratorParameterContainerType_MAX = 4,
};

enum class EVoxelHeightmapImporterMaterialConfig {
    RGB = 0,
    FourWayBlend = 1,
    FiveWayBlend = 2,
    SingleIndex = 3,
    MultiIndex = 4,
    EVoxelHeightmapImporterMaterialConfig_MAX = 5,
};

enum class EVoxelMaterialMask_BP {
    R = 0,
    G = 1,
    B = 2,
    A = 3,
    U0 = 4,
    V0 = 5,
    U1 = 6,
    V1 = 7,
    U2 = 8,
    V2 = 9,
    U3 = 10,
    V3 = 11,
    EVoxelMaterialMask_MAX = 12,
};

enum class EVoxelMeshSpawnerInstanceRandom {
    Random = 0,
    VoxelMaterial = 1,
    ColorOutput = 2,
    EVoxelMeshSpawnerInstanceRandom_MAX = 3,
};

enum class EVoxelBasicSpawnerRotation {
    AlignToSurface = 0,
    AlignToWorldUp = 1,
    RandomAlign = 2,
    EVoxelBasicSpawnerRotation_MAX = 3,
};

enum class EVoxelBasicSpawnerScaling {
    Uniform = 0,
    Free = 1,
    LockXY = 2,
    EVoxelBasicSpawnerScaling_MAX = 3,
};

enum class EVoxelPaintMaterialType {
    Color = 0,
    FiveWayBlend = 1,
    SingleIndex = 2,
    MultiIndex = 3,
    MultiIndexWetness = 4,
    MultiIndexRaw = 5,
    UV = 6,
    EVoxelPaintMaterialType_MAX = 7,
};

enum class EVoxelProjectionShape {
    Circle = 0,
    Square = 1,
    EVoxelProjectionShape_MAX = 2,
};

enum class EVoxelThreadPriority {
    Normal = 0,
    AboveNormal = 1,
    BelowNormal = 2,
    Highest = 3,
    Lowest = 4,
    SlightlyBelowNormal = 5,
    TimeCritical = 6,
    EVoxelThreadPriority_MAX = 7,
};

enum class EVoxelSpawnerConfigRayWorldType {
    Flat = 0,
    Sphere = 1,
    EVoxelSpawnerConfigRayWorldType_MAX = 2,
};

enum class EVoxelSpawnerType {
    Ray = 0,
    Height = 1,
    EVoxelSpawnerType_MAX = 2,
};

enum class EVoxelSpawnerConfigElementRandomGenerator {
    Sobol = 0,
    Halton = 1,
    EVoxelSpawnerConfigElementRandomGenerator_MAX = 2,
};

enum class EVoxelSpawnerDensityTransform {
    Identity = 0,
    OneMinus = 1,
    EVoxelSpawnerDensityTransform_MAX = 2,
};

enum class EVoxelSpawnerUVAxis {
    U = 0,
    V = 1,
    EVoxelSpawnerUVAxis_MAX = 2,
};

enum class EVoxelSpawnerDensityType {
    Constant = 0,
    GeneratorOutput = 1,
    MaterialRGBA = 2,
    MaterialUVs = 3,
    MaterialFiveWayBlend = 4,
    SingleIndex = 5,
    MultiIndex = 6,
    EVoxelSpawnerDensityType_MAX = 7,
};

enum class EVoxelSurfaceToolMaskType {
    Texture = 0,
    Generator = 1,
    EVoxelSurfaceToolMaskType_MAX = 2,
};

enum class EVoxelSDFMergeMode {
    Union = 0,
    Intersection = 1,
    Override = 2,
    EVoxelSDFMergeMode_MAX = 3,
};

enum class EVoxelToolAlignment {
    Surface = 0,
    View = 1,
    Ground = 2,
    Up = 3,
    EVoxelToolAlignment_MAX = 4,
};

