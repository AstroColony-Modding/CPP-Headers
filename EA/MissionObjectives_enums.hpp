enum class EChangeLastActiveReasons {
    MissionStarted = 0,
    ObjectiveUpdated = 1,
    ObjectiveCompleted = 2,
    EChangeLastActiveReasons_MAX = 3,
};

enum class EMOScriptedTriggerReason {
    None = 0,
    NodeActivated = 1,
    ObjectiveCompleted = 2,
    _MAX = 3,
    EMOScriptedTriggerReason_MAX = 4,
};

enum class EMissionState {
    None = 0,
    InProgress = 1,
    Successful = 2,
    Failure = 3,
    EMissionState_MAX = 4,
};

enum class ENodeCharacter {
    Neutral = 0,
    Positive = 1,
    Negative = 2,
    ENodeCharacter_MAX = 3,
};

