enum ETGInputControllerType {
    MOUSE_AND_KEYBOARD = 0,
    PSX = 1,
    XBOX = 2,
    ETGInputControllerType_MAX = 3,
};

enum class ETGTargetFlags {
    Nothing = 0,
    Allies = 1,
    Enemies = 2,
    Everything = 3,
    ETGTargetFlags_MAX = 4,
};

enum class ETGAxis2D {
    Horizontal = 0,
    Vertical = 1,
    ETGAxis2D_MAX = 2,
};

enum class ETGActivation {
    Activate = 0,
    Deactivate = 1,
    ETGActivation_MAX = 2,
};

enum class ETGToggle {
    On = 0,
    Off = 1,
    ETGToggle_MAX = 2,
};

enum class ETGResult {
    Failed = 0,
    Succeeded = 1,
    ETGResult_MAX = 2,
};

enum class ETGFacingDirection {
    Left = 0,
    Right = 1,
    Forward = 2,
    Back = 3,
    ETGFacingDirection_MAX = 4,
};

enum class ETGSide {
    Left = 0,
    Right = 1,
    ETGSide_MAX = 2,
};

enum class ETGVerticalDirection {
    Up = 0,
    Down = 1,
    ETGVerticalDirection_MAX = 2,
};

