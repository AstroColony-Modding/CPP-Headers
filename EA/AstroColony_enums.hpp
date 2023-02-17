enum class EAIProfession {
    None = 0,
    Trainee = 1,
    Scientist = 2,
    Cook = 3,
    Engineer = 4,
    Farmer = 5,
    Miner = 6,
    Breeder = 7,
    Transporter = 8,
    RemoteFabricator = 9,
    _MAX = 10,
    EAIProfession_MAX = 11,
};

enum class EAIWorkActionType {
    None = 0,
    CallAction = 1,
    ResourceAction = 2,
    AIDemandAction = 3,
    SelfAction = 4,
    TransferAction = 5,
    EAIWorkActionType_MAX = 6,
};

enum class EAIWorkRequestState {
    None = 0,
    Found = 1,
    PrimaryTarget = 2,
    SecondaryTarget = 3,
    Completed = 4,
    Frozen = 5,
    EAIWorkRequestState_MAX = 6,
};

enum class EAnimalGrowingPhase {
    NoAnimal = 0,
    Animal = 1,
    WateringOne = 2,
    GrowingOne = 3,
    FeedingOne = 4,
    GrowingTwo = 5,
    WateringTwo = 6,
    GrowingThree = 7,
    FeedingTwo = 8,
    GrowingFour = 9,
    ReadyToHarvest = 10,
    Harvesting = 11,
    _MAX = 12,
    EAnimalGrowingPhase_MAX = 13,
};

enum class EAsteroidCatchStateChanged {
    Attracted = 0,
    Catched = 1,
    AttractedRemoved = 2,
    ProcessedRemoved = 3,
    ProcessedEnd = 4,
    EAsteroidCatchStateChanged_MAX = 5,
};

enum class EBarrierReportType {
    Increase = 0,
    Decrese = 1,
    Both = 2,
    EBarrierReportType_MAX = 3,
};

enum class EBlackHoleType {
    First_BlueRed = 0,
    Second_RedGreen = 1,
    Third_GreenBlack = 2,
    EBlackHoleType_MAX = 3,
};

enum class EButtonBarAction {
    BACK = 0,
    CONTINUE = 1,
    SETTINGS_RESTORE_DEFAULT = 2,
    OPEN_OPTIONS = 3,
    APPLY_CHANGES = 4,
    TAB_NAVIGATE_NEXT = 5,
    TAB_NAVIGATE_PREVIOUS = 6,
    TAB_NEXT_SUBSCREEN = 7,
    TAB_PREVIOUS_SUBSCREEN = 8,
    EButtonBarAction_MAX = 9,
};

enum class EButtonBarItemVisibility {
    NONE = 0,
    ALWAYS = 1,
    ONLY_MOUSE_AND_KEYBOARD = 2,
    ONLY_GAMEPAD = 3,
    EButtonBarItemVisibility_MAX = 4,
};

enum class EChunkGenerationType {
    None = 0,
    Planet = 1,
    AsteroidDebris = 2,
    BlackHole = 3,
    MeteorRain = 4,
    CometStrike = 5,
    ElectromagneticField = 6,
    FreezeBreaze = 7,
    SolarWind = 8,
    Nebula = 9,
    Planetoid = 10,
    _MAX = 11,
    EChunkGenerationType_MAX = 12,
};

enum class EDeviceType {
    Electric = 0,
    Water = 1,
    Signal = 2,
    EDeviceType_MAX = 3,
};

enum class EDialogBoxElementType {
    None = 0,
    Button = 1,
    CurrencyButton = 2,
    EDialogBoxElementType_MAX = 3,
};

enum class EDockingState {
    Undocked = 0,
    Docking = 1,
    Docked = 2,
    ShuttleArrival = 3,
    EDockingState_MAX = 4,
};

enum class EEHAchievement {
    FIRST_TECH = 0,
    BARRIER_OXYGEN = 1,
    MOVE = 2,
    GROW_PLANT = 3,
    BREED_ANIMAL = 4,
    SIGNAL = 5,
    NEXT_UNIVERSE = 6,
    LOGIC_CIRCUIT = 7,
    BLACK_HOLE = 8,
    FIRST_COLONIST = 9,
    FIRST_VEHICLE = 10,
    METEOR_RAIN = 11,
    COMET = 12,
    ELECTRICSTORM = 13,
    FOUND_COLONY = 14,
    END_GAME = 15,
    _MAX = 16,
    EEHAchievement_MAX = 17,
};

enum class EEHBackgroundType {
    None = 0,
    Background1 = 1,
    Background2 = 2,
    EEHBackgroundType_MAX = 3,
};

enum class EEHBillboardTemplateType {
    Device = 0,
    HumanNeeds = 1,
    AINeeds = 2,
    Resources = 3,
    _MAX = 4,
    EEHBillboardTemplateType_MAX = 5,
};

enum class EEHBillboardType {
    Electricity = 0,
    Water = 1,
    Hunger = 2,
    Sleep = 3,
    Oxygen = 4,
    Grain = 5,
    Plant = 6,
    Animal = 7,
    Profession = 8,
    NoPath = 9,
    Transferred = 10,
    Construction = 11,
    EnergyReceiver = 12,
    Resources = 13,
    _MAX = 14,
    EEHBillboardType_MAX = 15,
};

enum class EEHDebugMode {
    None = 0,
    Grid = 1,
    Universe = 2,
    PriorityOrder = 3,
    SmoothMovement = 4,
    EEHDebugMode_MAX = 5,
};

enum class EEHDecalType {
    GateIn = 0,
    GateOut = 1,
    Electricity = 2,
    Water = 3,
    StationOrigin = 4,
    SignalIn = 5,
    SignalOut = 6,
    _MAX = 7,
    EEHDecalType_MAX = 8,
};

enum class EEHDialogBoxButtonImage {
    None = 0,
    SteamStore = 1,
    MicrosoftStore = 2,
    SeasonalCurrency = 3,
    EEHDialogBoxButtonImage_MAX = 4,
};

enum class EEHHUDMenuType {
    None = 0,
    Technology = 1,
    Construction = 2,
    Inventory = 3,
    Guidebook = 4,
    Map = 5,
    Resources = 6,
    Astronauts = 7,
    Vehicles = 8,
    PhotoMode = 9,
    _MAX = 10,
    EEHHUDMenuType_MAX = 11,
};

enum class EEHInstanceRotation {
    Rot0 = 0,
    Rot90 = 1,
    Rot180 = 2,
    Rot270 = 3,
    EEHInstanceRotation_MAX = 4,
};

enum class EEHLineType {
    White = 0,
    Blue = 1,
    Orange = 2,
    Missing = 3,
    _MAX = 4,
    EEHLineType_MAX = 5,
};

enum class EEHMenuPlatformVisibility {
    BOTH = 0,
    PC_ONLY = 1,
    XBOX_ONLY = 2,
    EEHMenuPlatformVisibility_MAX = 3,
};

enum class EEHMetamorphosisType {
    TransformPipe = 0,
    FarmLand = 1,
    Pasture = 2,
    Water = 3,
    Electric = 4,
    Fundation = 5,
    Pillar = 6,
    Signal = 7,
    TypeMet = 8,
    TypeMet2 = 9,
    TypeMet3 = 10,
    TypeMet4 = 11,
    Undefined = 12,
    EEHMetamorphosisType_MAX = 13,
};

enum class EEHMiningResourceType {
    None = 0,
    Stone = 1,
    Ice = 2,
    CoalOre = 3,
    IronOre = 4,
    CopperOre = 5,
    GoldOre = 6,
    AnorhiteOre = 7,
    TitaniumOre = 8,
    UraniumOre = 9,
    Quartz = 10,
    Dirt = 11,
    _MAX = 12,
    EEHMiningResourceType_MAX = 13,
};

enum class EEHOptionWidgetActionType {
    NavigationLeft = 0,
    NavigationRight = 1,
    Confirm = 2,
    EEHOptionWidgetActionType_MAX = 3,
};

enum class EEHPlanetoidSurfaceDetailType {
    None = 0,
    RockSmallA = 1,
    RockSmallB = 2,
    RockSmallC = 3,
    RockMediumA = 4,
    RockMediumB = 5,
    RockMediumC = 6,
    RockLargeA = 7,
    RockLargeB = 8,
    RockLargeC = 9,
    DebrisA = 10,
    DebrisB = 11,
    DebrisC = 12,
    BushA = 13,
    BushB = 14,
    BushC = 15,
    GrassA = 16,
    GrassB = 17,
    GrassC = 18,
    _MAX = 19,
    EEHPlanetoidSurfaceDetailType_MAX = 20,
};

enum class EEHPopMenuType {
    None = 0,
    DepositItems = 1,
    Recipes = 2,
    Recycling = 3,
    TransferAstronaut = 4,
    _MAX = 5,
    EEHPopMenuType_MAX = 6,
};

enum class EEHPreviewPlayerActions {
    None = 0,
    Interact = 1,
    Open = 2,
    Select = 4,
    Inspect = 8,
    Extract = 16,
    Enter = 32,
    Leave = 64,
    Cancel = 128,
    Remove = 256,
    RemoveSelected = 512,
    RotateRight = 1024,
    RotateLeft = 2048,
    AddVoxel = 4096,
    Upgrade = 8192,
    Jump = 16384,
    Crouch = 32768,
    Turbo = 65536,
    NextVariant = 131072,
    PreviousVariant = 262144,
    EEHPreviewPlayerActions_MAX = 262145,
};

enum class EEHPreviewVehicleActions {
    None = 0,
    StrafeLeft = 1,
    StrafeRight = 2,
    Land = 4,
    SaveOxygen = 8,
    Excavate = 16,
    BoosterJump = 32,
    EEHPreviewVehicleActions_MAX = 33,
};

enum class EEHRotationDirection {
    Left = 0,
    Right = 1,
    EEHRotationDirection_MAX = 2,
};

enum class EEHScenarioFailureReason {
    None = 0,
    PlayerDeath = 1,
    TimesUp = 2,
    EEHScenarioFailureReason_MAX = 3,
};

enum class EEHSlotDragType {
    NoDrag = 0,
    Orderable = 1,
    Selectable = 2,
    Assignable = 3,
    Items = 4,
    Garbage = 5,
    EEHSlotDragType_MAX = 6,
};

enum class EEHSoftAsyncLoadPhase {
    PrimaryAssets = 0,
    DataProvider = 1,
    GameplayList = 2,
    Vehicles = 3,
    Map = 4,
    Interface = 5,
    _MAX = 6,
    EEHSoftAsyncLoadPhase_MAX = 7,
};

enum class EEHStartingStationSize {
    Small = 0,
    Medium = 1,
    Large = 2,
    EEHStartingStationSize_MAX = 3,
};

enum class EEHThrusterSize {
    Small = 0,
    Medium = 1,
    Large = 2,
    EEHThrusterSize_MAX = 3,
};

enum class EEHToastNature {
    Neutral = 0,
    Positive = 1,
    Negative = 2,
    _MAX = 3,
    EEHToastNature_MAX = 4,
};

enum class EEHTrackableType {
    SpaceStation = 0,
    Planetoid = 1,
    Blackhole = 2,
    MeteorRain = 3,
    CometStrike = 4,
    ElectromagneticField = 5,
    _MAX = 6,
    EEHTrackableType_MAX = 7,
};

enum class EEHUIOverlayID {
    None = 0,
    Roster = 1,
    ButtonBar = 2,
    IconBar = 3,
    Toast = 4,
    BuildVersion = 5,
    Nameplate = 6,
    MatchmakingState = 7,
    TextChat = 8,
    Tooltip = 9,
    NotificationDialog = 10,
    ModsHUB = 11,
    _MAX = 12,
    EEHUIOverlayID_MAX = 13,
};

enum class EEHUIPopupID {
    None = 0,
    EHDialogBox = 1,
    EHDialogBoxWide = 2,
    Authentication = 3,
    EEHUIPopupID_MAX = 4,
};

enum class EEHUIPopupPriority {
    HIGH = 0,
    MEDIUM = 1,
    LOW = 2,
    NONE = 3,
    EEHUIPopupPriority_MAX = 4,
};

enum class EEHUIScreenID {
    None = 0,
    MainMenu = 1,
    StartGame = 2,
    Campaign = 3,
    Sandbox = 4,
    Survival = 5,
    Settings = 6,
    Booting = 7,
    Pause = 8,
    PauseMinimal = 9,
    PauseMultiplayer = 10,
    Save = 11,
    Load = 12,
    Mods = 13,
    Summary = 14,
    Demo = 15,
    Beta = 16,
    NewGame = 17,
    Multiplayer = 18,
    HostGame = 19,
    EEHUIScreenID_MAX = 20,
};

enum class EEHUIUnderlayID {
    None = 0,
    Background = 1,
    RetainFocus = 2,
    _MAX = 3,
    EEHUIUnderlayID_MAX = 4,
};

enum class EEHVehicleAction {
    StrafeLeft = 0,
    StrafeRight = 1,
    Land = 2,
    SaveOxygen = 3,
    Excavate = 4,
    BoosterJump = 5,
    EEHVehicleAction_MAX = 6,
};

enum class EEHVehiclePartMirrorType {
    None = 0,
    LeftRight = 1,
    RearFront = 2,
    All = 3,
    _MAX = 4,
    EEHVehiclePartMirrorType_MAX = 5,
};

enum class EEHVehiclePartScale {
    None = 0,
    UseXforXY = 1,
    UseXforXZ = 2,
    UseXforXYZ = 3,
    EEHVehiclePartScale_MAX = 4,
};

enum class EEHVehiclePartType {
    Chassis = 0,
    Wheel = 1,
    Thruster = 2,
    Drill = 3,
    Container = 4,
    ShipBody = 5,
    Windshield = 6,
    WingLeft = 7,
    WingRight = 8,
    WingletLeft = 9,
    WingletRight = 10,
    LandingLegs = 11,
    Gun = 12,
    Booster = 13,
    _MAX = 14,
    EEHVehiclePartType_MAX = 15,
};

enum class EEHVehicleType {
    Rover = 0,
    Spacecraft = 1,
    Vehicle3 = 2,
    _MAX = 3,
    EEHVehicleType_MAX = 4,
};

enum class EEHWidgetIndicatorType {
    Icon = 0,
    InfoTextStatic = 1,
    InfoTextRadial = 2,
    _MAX = 3,
    EEHWidgetIndicatorType_MAX = 4,
};

enum class EElevateTypes {
    None = 0,
    Ladder = 1,
    Stairs = 2,
    EElevateTypes_MAX = 3,
};

enum class EGlobalPointType {
    None = 0,
    Coin = 1,
    BasicScience = 2,
    EngineeringScience = 3,
    ChemistryScience = 4,
    BiologyScience = 5,
    SpaceScience = 6,
    HighTechScience = 7,
    Electricity = 8,
    Water = 9,
    Oxygen = 10,
    _MAX = 11,
    EGlobalPointType_MAX = 12,
};

enum class EHAnimalSize {
    Small = 0,
    Medium = 1,
    Large = 2,
    EHAnimalSize_MAX = 3,
};

enum class EHBreedAnimalTypes {
    None = 0,
    Pig = 1,
    Chicken = 2,
    Cow = 3,
    Sheep = 4,
    _MAX = 5,
    EHBreedAnimalTypes_MAX = 6,
};

enum class EHCollectiveConstructionType {
    TwoDim_Full = 0,
    TwoDim_Horizontal = 1,
    TwoDim_Vertical = 2,
    OneDim_Full = 3,
    OneDim_Horizontal = 4,
    OneDim_Vertical = 5,
    Diagonal_Full = 6,
    Diagonal_Horizontal = 7,
    Diagonal_Vertical = 8,
    CustomConstruction = 9,
    EHCollectiveConstructionType_MAX = 10,
};

enum class EHConstructParticleType {
    Dissolve = 0,
    Disintegration = 1,
    EHConstructParticleType_MAX = 2,
};

enum class EHConstructRotationType {
    Default = 0,
    LockCollectiveRotation = 1,
    UseDragRotation = 2,
    UserCantChangeRotation = 3,
    NoRotationForceZero = 4,
    EHConstructRotationType_MAX = 5,
};

enum class EHConstructionType {
    Floor = 0,
    Wall = 1,
    Device = 2,
    Utilities = 3,
    Mining = 4,
    Farming = 5,
    Paths = 6,
    LogicBlocks = 7,
    Gadgets = 8,
    Resources = 9,
    AI = 10,
    _MAX = 11,
    EHConstructionType_MAX = 12,
};

enum class EHHarvestPlantTypes {
    None = 0,
    Wheat = 1,
    Tree = 2,
    Tomatoes = 3,
    Sunflower = 4,
    Potato = 5,
    NopalCactus = 6,
    TigerLily = 7,
    Rosemary = 8,
    _MAX = 9,
    EHHarvestPlantTypes_MAX = 10,
};

enum class EHHumanNeedID {
    None = 0,
    Oxygen = 1,
    Thirst = 2,
    Hunger = 3,
    Toilet = 4,
    Temperature = 5,
    Comfort = 6,
    Sleep = 7,
    EHHumanNeedID_MAX = 8,
};

enum class EHJobModeType {
    None = 0,
    Select = 1,
    Construct = 2,
    ModifyTerrain = 3,
    PickUpItem = 4,
    _MAX = 5,
    EHJobModeType_MAX = 6,
};

enum class EInstanceCellType {
    None = 0,
    Block = 1,
    Resource = 2,
    AI = 3,
    Logic = 4,
    Visual = 5,
    Floor = 6,
    Wall = 7,
    DiagonalWall = 8,
    EInstanceCellType_MAX = 9,
};

enum class ELineDirection {
    None = 0,
    In = 1,
    Out = 2,
    ELineDirection_MAX = 3,
};

enum class EMenuType {
    None = 0,
    MainMenu = 1,
    StartGame = 2,
    NewGame = 3,
    StartDemo = 4,
    StartBeta = 5,
    ContinueGame = 6,
    Multiplayer = 7,
    MapEditor = 8,
    Settings = 9,
    Extras = 10,
    Exit = 11,
    SaveGame = 12,
    LoadGame = 13,
    Mods = 14,
    Campaign = 15,
    Sandbox = 16,
    Survival = 17,
    Ex_Credits = 18,
    Ex_Help = 19,
    Pm_Resume = 20,
    Pm_BackToMainMenu = 21,
    Pm_RestartLevel = 22,
    EMenuType_MAX = 23,
};

enum class EPlantGrowingPhase {
    NotPlanted = 0,
    Planted = 1,
    WateringOne = 2,
    GrowingOne = 3,
    WateringTwo = 4,
    GrowingTwo = 5,
    WateringThree = 6,
    GrowingThree = 7,
    ReadyToHarvest = 8,
    Harvesting = 9,
    _MAX = 10,
    EPlantGrowingPhase_MAX = 11,
};

enum class EPlayerActionType {
    Interact = 0,
    Open = 1,
    Select = 2,
    Inspect = 3,
    Extract = 4,
    Enter = 5,
    Leave = 6,
    Cancel = 7,
    Remove = 8,
    RemoveSelected = 9,
    RotateRight = 10,
    RotateLeft = 11,
    AddVoxel = 12,
    Upgrade = 13,
    Jump = 14,
    Crouch = 15,
    Turbo = 16,
    NextVariant = 17,
    PreviousVariant = 18,
    Pick = 19,
    EPlayerActionType_MAX = 20,
};

enum class EPushDirection {
    Both = 0,
    In = 1,
    Out = 2,
    EPushDirection_MAX = 3,
};

enum class EResrouceContainerType {
    Storage = 0,
    Production = 1,
    Required = 2,
    EResrouceContainerType_MAX = 3,
};

enum class ESettingOptionType {
    None = 0,
    AudioMasterVolume = 1,
    AudioEffectsVolume = 2,
    AudioGameMusicVolume = 3,
    AudioMenuMusicVolume = 4,
    AudioUserInterfaceVolume = 5,
    VideoScreenResolution = 6,
    VideoWindowMode = 7,
    VideoVsync = 8,
    VideoResolutionScale = 9,
    VideoAntiAliasing = 10,
    VideoShadowQuality = 11,
    VideoPostProcessingQuality = 12,
    VideoViewDistanceQuality = 13,
    VideoTextureQuality = 14,
    VideoVisualEffectQuality = 15,
    VideoFoliageQuality = 16,
    VideoShadingQuality = 17,
    VideoFrameRateLimit = 18,
    VideoBrightness = 19,
    VideoGamma = 20,
    VideoContrast = 21,
    GameplayJetpackMaintainHeight = 22,
    GameplayAutosaveInterval = 23,
    GameplayAutosaveMaxCount = 24,
    GameplayRecoverysaveMaxCount = 25,
    GameplayFOV = 26,
    GameplayVerticalMouseSensitivity = 27,
    GameplayVerticalMouseInverted = 28,
    GameplayHorizontalMouseSensitivity = 29,
    GameplayHorizontalMouseInverted = 30,
    InterfaceLanguage = 31,
    InterfaceUIScaling = 32,
    InterfaceShowTooltips = 33,
    InterfaceShowTutorialMessages = 34,
    InterfaceShowAlerts = 35,
    InterfaceRestoreOpenWindowState = 36,
    KeyMoveForward = 37,
    KeyMoveBackward = 38,
    KeyMoveLeft = 39,
    KeyMoveRight = 40,
    KeyFlyUp = 41,
    KeyFlyDown = 42,
    KeyTurnLeft = 43,
    KeyTurnRight = 44,
    KeyJump = 45,
    KeySlowdown = 46,
    KeyTurbo = 47,
    KeyToolSelectNone = 48,
    KeyToolScan = 49,
    KeyToolJetpack = 50,
    KeyToolPickaxe = 51,
    KeyActionInteract = 52,
    KeyActionSelect = 53,
    KeyActionOpen = 54,
    KeyActionClose = 55,
    KeyActionLeave = 56,
    KeyActionCancel = 57,
    KeyActionRemove = 58,
    KeyActionRemoveSelected = 59,
    KeyActionUpgrade = 60,
    KeyActionRotateLeft = 61,
    KeyActionRotateRight = 62,
    KeyInvCategory1 = 63,
    KeyInvCategory2 = 64,
    KeyInvCategory3 = 65,
    KeyInvCategory4 = 66,
    KeyInvCategory5 = 67,
    KeyInvCategory6 = 68,
    KeyInvCategory7 = 69,
    KeyInvSlot1 = 70,
    KeyInvSlot2 = 71,
    KeyInvSlot3 = 72,
    KeyInvSlot4 = 73,
    KeyInvSlot5 = 74,
    KeyInvSlot6 = 75,
    KeyInvSlot7 = 76,
    KeyInvSlot8 = 77,
    KeyUtilityHelp = 78,
    KeyUtilityQuickSave = 79,
    KeyUtilityQuickLoad = 80,
    KeyUIOptons = 81,
    KeyUIInventory = 82,
    KeyUIConstruction = 83,
    KeyUITechnology = 84,
    KeyUIPlayerInfo = 85,
    KeyUIGuidebook = 86,
    KeyUIMap = 87,
    KeyUIResources = 88,
    KeyUIAstronauts = 89,
    ESettingOptionType_MAX = 90,
};

enum class ESettingPreviewType {
    None = 0,
    Default = 1,
    Controller_Front = 2,
    Controller_Top = 3,
    Gamma = 4,
    ESettingPreviewType_MAX = 5,
};

enum class ESettingWidgetType {
    None = 0,
    Stepper = 1,
    Dropdown = 2,
    Slider = 3,
    Button = 4,
    Toggle = 5,
    RadioButtons = 6,
    InputBinding = 7,
    Splitter = 8,
    InputBindingDisplay = 9,
    ESettingWidgetType_MAX = 10,
};

enum class ESettingsCategoryType {
    None = 0,
    Audio = 1,
    Video = 2,
    Gameplay = 3,
    Interface = 4,
    Controls = 5,
    MouseAndKeyboard = 6,
    Gamepad = 7,
    ChangeKeyBindings = 8,
    ChangeControllerBindings = 9,
    ESettingsCategoryType_MAX = 10,
};

enum class ESettingsControllerActions {
    None = 0,
    ThrowGrenade = 1,
    XboxHome = 2,
    UseRightWeapon = 3,
    Reload = 4,
    ChangeWeapon = 5,
    Melee = 6,
    Flashlight = 7,
    Jump = 8,
    GameMenu = 9,
    Zoom = 10,
    SwitchGrenades = 11,
    Crouch = 12,
    ToggleVisuals_MultiplayerScoreboard = 13,
    NightVision = 14,
    UseEquipment = 15,
    UseLeftWeapon = 16,
    ThrowGrenadeUseLeftWeapon = 17,
    ZoomUseLeftWeapon = 18,
    MeleeUseLeftWeapon = 19,
    ReloadSwapLeftWeapon = 20,
    ReloadLeftWeapon = 21,
    ActionReloadLeftWeapon = 22,
    ActionReloadRightWeapon = 23,
    VISRMode = 24,
    VISRDatabase = 25,
    Sprint = 26,
    UseArmorAbility = 27,
    LookUp = 28,
    LookDown = 29,
    StrafeLeftRight = 30,
    MoveForward = 31,
    MoveBackward = 32,
    RotateLeftRight = 33,
    ESettingsControllerActions_MAX = 34,
};

enum class ESettingsThumbstickActions {
    None = 0,
    LeftStickUp = 1,
    LeftStickLeftRight = 2,
    LeftStickDown = 3,
    RightStickUp = 4,
    RightStickLeftRight = 5,
    RightStickDown = 6,
    ESettingsThumbstickActions_MAX = 7,
};

enum class ESliderStepType {
    ValueStep = 0,
    PercentageStep = 1,
    ESliderStepType_MAX = 2,
};

enum class EToastImageType {
    NONE = 0,
    Emblem = 1,
    Nameplate = 2,
    Avatar = 3,
    Video = 4,
    EToastImageType_MAX = 5,
};

enum class EUnlockType {
    None = 0,
    Item = 1,
    Profession = 2,
    Plant = 3,
    Animal = 4,
    GlobalPoint = 5,
    GameplayEffect = 6,
    Recipe = 7,
    Custom = 8,
    EUnlockType_MAX = 9,
};

enum class UEHRampDirection {
    None = 0,
    Up = 1,
    Down = 2,
    UEHRampDirection_MAX = 3,
};

