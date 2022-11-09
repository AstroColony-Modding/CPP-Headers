enum class ECFCoreErrorCodes {
    None = 0,
    ApiError = 1,
    FileSystemError = 2,
    FailedToInitialize = 3,
    AlreadyInitialized = 4,
    NotImplemented = 5,
    InvalidModParams = 6,
    InstalledModNotFound = 7,
    InstallCancelled = 8,
    MissingModsDirectory = 9,
    MissingModsDirectoryMode = 10,
    MissingUserDataDirectory = 11,
    FailedToLoadModsStateFromDisk = 12,
    FailedToSaveModsStateToDisk = 13,
    MissingLatestFileInformation = 14,
    ModAlreadyBeingInstalled = 15,
    DownloadedFileHasInvalidHash = 16,
    FailedDeletingOutputDirectory = 17,
    FailedToMoveModDirectory = 18,
    FailedSettingAuthToken = 19,
    ECFCoreErrorCodes_MAX = 20,
};

enum class ECFCoreApiStatus {
    None = 0,
    Private = 1,
    Public = 2,
    ECFCoreApiStatus_MAX = 3,
};

enum class ECFCoreStatus {
    None = 0,
    Draft = 1,
    Test = 2,
    PendingReview = 3,
    Rejected = 4,
    Approved = 5,
    Live = 6,
    ECFCoreStatus_MAX = 7,
};

enum class ECFCoreModLoaderType {
    Any = 0,
    Forge = 1,
    Cauldron = 2,
    LiteLoader = 3,
    Fabric = 4,
    ECFCoreModLoaderType_MAX = 5,
};

enum class ECFCoreFileReleaseType {
    None = 0,
    Release = 1,
    Beta = 2,
    Alpha = 3,
    ECFCoreFileReleaseType_MAX = 4,
};

enum class ECFCoreFileRelationType {
    None = 0,
    EmbeddedLibrary = 1,
    OptionalDependency = 2,
    RequiredDependency = 3,
    Tool = 4,
    Incompatible = 5,
    Include = 6,
    ECFCoreFileRelationType_MAX = 7,
};

enum class ECFCoreHashAlgo {
    None = 0,
    Sha1 = 1,
    Md5 = 2,
    ECFCoreHashAlgo_MAX = 3,
};

enum class ECFCoreFileStatus {
    None = 0,
    Processing = 1,
    ChangesRequired = 2,
    UnderReview = 3,
    Approved = 4,
    Rejected = 5,
    MalwareDetected = 6,
    Deleted = 7,
    Archived = 8,
    Testing = 9,
    Released = 10,
    ReadyForReview = 11,
    Deprecated = 12,
    Baking = 13,
    AwaitingPublishing = 14,
    FailedPublishing = 15,
    ECFCoreFileStatus_MAX = 16,
};

enum class ECFCoreModStatus {
    None = 0,
    New = 1,
    ChangesRequired = 2,
    UnderSoftReview = 3,
    Approved = 4,
    Rejected = 5,
    ChangesMade = 6,
    Inactive = 7,
    Abandoned = 8,
    Deleted = 9,
    UnderReview = 10,
    ECFCoreModStatus_MAX = 11,
};

enum class ECFCoreSortOrder {
    None = 0,
    Asc = 1,
    Desc = 2,
    ECFCoreSortOrder_MAX = 3,
};

enum class ECFCoreModsSearchSortField {
    None = 0,
    Featured = 1,
    Popularity = 2,
    LastUpdated = 3,
    Name = 4,
    Author = 5,
    TotalDownloads = 6,
    Category = 7,
    GameVersion = 8,
    ECFCoreModsSearchSortField_MAX = 9,
};

enum class ECFCoreThumbsUpDirection {
    None = 0,
    Up = 1,
    Down = 2,
    ECFCoreThumbsUpDirection_MAX = 3,
};

enum class EInstalledModStatus {
    Pending = 0,
    OutOfDate = 1,
    Normal = 2,
    Invalid = 3,
    WorkingCopy = 4,
    Uploading = 5,
    EInstalledModStatus_MAX = 6,
};

enum class ELibraryProgressState {
    Pending = 0,
    Downloading = 1,
    Uploading = 2,
    Validating = 3,
    Unzipping = 4,
    Zipping = 5,
    Copying = 6,
    CleaningUp = 7,
    Cancelling = 8,
    SuccessfullyCompleted = 9,
    FailedToComplete = 10,
    ELibraryProgressState_MAX = 11,
};

enum class EModsDirectoryMode {
    None = 0,
    CFCore = 1,
    Flat = 2,
    EModsDirectoryMode_MAX = 3,
};

enum class ECompressionError {
    None = 0,
    FailedToReadZip = 1,
    FailedToExtractFile = 2,
    FailedToWriteFile = 3,
    ECompressionError_MAX = 4,
};

enum class EFileSystemError {
    None = 0,
    FailedToReadFromDisk = 1,
    FailedToCreateDirectory = 2,
    FailedToSaveToDisk = 3,
    FailedToOpenFileForWrite = 4,
    EFileSystemError_MAX = 5,
};

