enum class EEditorPreviewState {
    None = 0,
    Active = 1,
    Pressed = 2,
    Selected = 4,
    Hovered = 16,
    EEditorPreviewState_MAX = 17,
};

enum class ETGScreenNavigationDirection {
    Forwards = 0,
    Backwards = 1,
    ETGScreenNavigationDirection_MAX = 2,
};

enum class ETGScrollDirection {
    LEFT = 0,
    RIGHT = 1,
    UP = 2,
    DOWN = 3,
    ETGScrollDirection_MAX = 4,
};

enum class ETGSoundChannel {
    Master = 0,
    Effects = 1,
    GameMusic = 2,
    MenuMusic = 3,
    UserInterface = 4,
    ETGSoundChannel_MAX = 5,
};

enum class ETGUISceneState {
    Opening = 0,
    Open = 1,
    Closing = 2,
    Closed = 3,
    ETGUISceneState_MAX = 4,
};

enum class ETGUIShakeDirection {
    Up = 0,
    Down = 1,
    Left = 2,
    Right = 3,
    ETGUIShakeDirection_MAX = 4,
};

enum class ETextBoxContentType {
    Default = 0,
    Number = 1,
    ETextBoxContentType_MAX = 2,
};

