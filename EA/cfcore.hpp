#ifndef UE4SS_SDK_cfcore_HPP
#define UE4SS_SDK_cfcore_HPP

#include "cfcore_enums.hpp"

struct FCFCoreSettings
{
    int64 gameId;
    FString apiKey;
    int32 maxConcurrentInstallations;
    FString modsDirectory;
    EModsDirectoryMode modsDirectoryMode;
    FString userDataDirectory;

};

struct FCFCoreSearchModsFilter
{
    int32 classId;
    int32 categoryId;
    FString GameVersion;
    FString searchFilter;
    ECFCoreModsSearchSortField sortField;
    ECFCoreSortOrder sortOrder;
    ECFCoreModLoaderType modLoaderType;
    int32 gameVersionTypeId;

};

struct FCFCoreGetCategoriesFilter
{
    int32 classId;

};

struct FCFCoreApiRequestPagination
{
    int32 Index;
    int32 pageSize;

};

class UCFCoreBPLibrary : public UBlueprintFunctionLibrary
{

    FCFCoreSettings MakeSettings(int64 game_id, FString api_key, FString mods_directory, FString user_data_directory, int32 max_concurrent_installations);
    FCFCoreSearchModsFilter MakeSearchModsFilter(int32 class_id, int32 category_id, FString game_version, FString search_filter, ECFCoreModsSearchSortField sort_field, ECFCoreSortOrder sort_order, ECFCoreModLoaderType mod_loader_type, int32 game_version_type_id);
    FCFCoreGetCategoriesFilter MakeGetCategoriesFilter(int32 class_id);
    FCFCoreApiRequestPagination MakeApiRequestPagination(int32 Index, int32 page_size);
};

class UCFCoreEditorSettings : public UObject
{
    int64 gameId;
    FString apiKey;
    int32 maxConcurrentInstallations;

};

struct FModLinks
{
    FString websiteUrl;
    FString wikiUrl;
    FString issuesUrl;
    FString sourceUrl;

};

struct FCategory
{
    int64 ID;
    int64 gameId;
    FString Name;
    FString slug;
    FString URL;
    FString iconUrl;
    FDateTime dateModified;
    bool isClass;
    int32 classId;
    int32 parentCategoryId;
    int32 displayIndex;

};

struct FModAuthor
{
    int64 ID;
    FString Name;
    FString URL;

};

struct FModAsset
{
    int64 ID;
    int64 modId;
    FString Title;
    FString Description;
    FString thumbnailUrl;
    FString URL;

};

struct FFileHash
{
    FString Value;
    ECFCoreHashAlgo algo;

};

struct FSortableGameVersion
{
    FString gameVersionName;
    FString gameVersionPadded;
    FString GameVersion;
    FDateTime gameVersionReleaseDate;
    int32 gameVersionTypeId;

};

struct FFileDependency
{
    int64 modId;
    int64 fileId;
    ECFCoreFileRelationType relationType;

};

struct FFileModule
{
    FString Name;
    int64 fingerprint;

};

struct FFile
{
    int64 ID;
    int64 gameId;
    int64 modId;
    bool isAvailable;
    FString DisplayName;
    FString Filename;
    ECFCoreFileReleaseType releaseType;
    ECFCoreFileStatus fileStatus;
    TArray<FFileHash> hashes;
    FDateTime fileDate;
    int64 fileLength;
    int64 downloadCount;
    FString downloadUrl;
    TArray<FString> gameVersions;
    TArray<FSortableGameVersion> sortableGameVersions;
    TArray<FFileDependency> dependencies;
    bool ExposeAsAlternative;
    int64 parentProjectFileId;
    int64 alternateFileId;
    bool isServerPack;
    int64 serverPackFileId;
    int64 fileFingerprint;
    TArray<FFileModule> modules;

};

struct FFileIndex
{
    FString GameVersion;
    int64 fileId;
    FString Filename;
    ECFCoreFileReleaseType releaseType;
    int32 gameVersionTypeId;
    ECFCoreModLoaderType modLoader;

};

struct FCFCoreMod
{
    int64 ID;
    int64 gameId;
    int32 gamePopularityRank;
    FString Name;
    FString slug;
    FModLinks links;
    FString summary;
    ECFCoreModStatus status;
    int64 downloadCount;
    bool isFeatured;
    int32 classId;
    int32 primaryCategoryId;
    TArray<FCategory> Categories;
    TArray<FModAuthor> authors;
    FModAsset logo;
    TArray<FModAsset> screenshots;
    int64 mainFileId;
    TArray<FFile> latestFiles;
    TArray<FFileIndex> latestFilesIndexes;
    FDateTime dateCreated;
    FDateTime dateModified;
    FDateTime dateReleased;
    bool allowModDistribution;
    bool isAvailable;
    int64 thumbsUpCount;

};

struct FInstalledMod
{
    FDateTime dateInstalled;
    FDateTime dateUpdated;
    EInstalledModStatus status;
    FString pathOnDisk;
    bool Enabled;
    FCFCoreMod details;
    FFile installedFile;
    FFile latestUpdatedFile;

};

struct FLibraryProgressDataTransfer
{
    int32 progress;
    int64 transferredBytes;
    int64 transferRateBytesPerSecond;
    FString Filename;

};

struct FLibraryProgress
{
    int64 modId;
    int64 fileId;
    ELibraryProgressState State;
    FLibraryProgressDataTransfer dataTransfer;

};

struct FCFCoreApiResponseError
{
    bool cancelled;
    bool badRequest;
    bool serverUnreachable;
    bool missingPriviliges;
    bool tokenExpired;
    bool resourceExpired;
    bool failedToParseServerResponse;
    FString Description;

};

struct FCFCoreError
{
    bool isError;
    ECFCoreErrorCodes code;
    FCFCoreApiResponseError apiError;
    FString Description;

};

struct FCFCoreApiResponsePagination
{
    int32 Index;
    int32 pageSize;
    int32 resultCount;
    int32 totalCount;

};

struct FGameVersionType
{
    int64 ID;
    int64 gameId;
    FString Name;
    FString slug;

};

struct FGameVersionsByType
{
    int64 Type;
    TArray<FString> versions;

};

struct FGameAssets
{
    FString iconUrl;
    FString tileUrl;
    FString coverUrl;

};

struct FGame
{
    int64 ID;
    FString Name;
    FString slug;
    FDateTime dateModified;
    FGameAssets assets;
    ECFCoreStatus status;
    ECFCoreApiStatus apiStatus;

};

class UCFCoreSubsystem : public UEngineSubsystem
{

    void Unitialize(FUnitializeOn_uninitialized on_uninitialized, FUnitializeOn_error on_error);
    void UninstallMod(int64 mod_id, FUninstallModOn_uninstalled on_uninstalled, FUninstallModOn_error on_error);
    void SynchronizeWithServer(FSynchronizeWithServerOn_success on_success, FSynchronizeWithServerOn_error on_error);
    void SendSecurityCode(FString email, FSendSecurityCodeOn_success on_success, FSendSecurityCodeOn_error on_error);
    void IsAuthenticated(FIsAuthenticatedOn_is_auth on_is_auth);
    void InstallMod(FCFCoreMod mod, FInstallModOn_progress on_progress, FInstallModOn_installed on_installed, FInstallModOn_error on_error);
    void Initialize(const FCFCoreSettings& Settings, FInitializeOn_initialized on_initialized, FInitializeOn_error on_error);
    void GetInstalledMods(FGetInstalledModsOn_installed_mods on_installed_mods, FGetInstalledModsOn_error on_error);
    void GenerateAuthToken(FString email, int32 security_code, FGenerateAuthTokenOn_success on_success, FGenerateAuthTokenOn_error on_error);
    void CFCoreUninitializeDelegate__DelegateSignature();
    void CFCoreSuccessDelegate__DelegateSignature();
    void CFCoreLibUninstallDelegate__DelegateSignature(const FInstalledMod& uninstalled_mod);
    void CFCoreLibInstallProgressDelegate__DelegateSignature(const FLibraryProgress& progress);
    void CFCoreLibInstallDelegate__DelegateSignature(const FInstalledMod& installed_mod);
    void CFCoreLibGetInstalledModsDelegate__DelegateSignature(const TArray<FInstalledMod>& installed_mods);
    void CFCoreIsAuthenticatedDelegate__DelegateSignature(bool is_authenticated);
    void CFCoreInitializeDelegate__DelegateSignature();
    void CFCoreErrorDelegate__DelegateSignature(const FCFCoreError& Error);
    void CFCoreApiSearchModsDelegate__DelegateSignature(const TArray<FCFCoreMod>& mods, const FCFCoreApiResponsePagination& pagination);
    void CFCoreApiGetVersionTypesDelegate__DelegateSignature(const TArray<FGameVersionType>& version_types);
    void CFCoreApiGetVersionsDelegate__DelegateSignature(const TArray<FGameVersionsByType>& versions);
    void CFCoreApiGetModsDelegate__DelegateSignature(const TArray<FCFCoreMod>& mods);
    void CFCoreApiGetModDescDelegate__DelegateSignature(FString Description);
    void CFCoreApiGetModDelegate__DelegateSignature(const FCFCoreMod& mod);
    void CFCoreApiGetGameDelegate__DelegateSignature(const FGame& Game);
    void CFCoreApiGetCategoriesDelegate__DelegateSignature(const TArray<FCategory>& Categories);
    void CancelInstallation(int64 mod_id, FCancelInstallationOn_success on_success, FCancelInstallationOn_error on_error);
    void ApiUpdateThumbsUp(int64 modId, ECFCoreThumbsUpDirection Direction, FApiUpdateThumbsUpOn_success on_success, FApiUpdateThumbsUpOn_error on_error);
    void ApiSearchMods(FCFCoreSearchModsFilter Filter, FCFCoreApiRequestPagination pagination, FApiSearchModsOn_results on_results, FApiSearchModsOn_error on_error);
    void ApiGetVersionTypes(FApiGetVersionTypesOn_results on_results, FApiGetVersionTypesOn_error on_error);
    void ApiGetVersions(FApiGetVersionsOn_results on_results, FApiGetVersionsOn_error on_error);
    void ApiGetMods(const TArray<int64> modIds, FApiGetModsOn_results on_results, FApiGetModsOn_error on_error);
    void ApiGetModDescription(int64 modId, FApiGetModDescriptionOn_mod_desc on_mod_desc, FApiGetModDescriptionOn_error on_error);
    void ApiGetMod(int64 modId, FApiGetModOn_mod on_mod, FApiGetModOn_error on_error);
    void ApiGetGame(FApiGetGameOn_game on_game, FApiGetGameOn_error on_error);
    void ApiGetCategories(FCFCoreGetCategoriesFilter Filter, FApiGetCategoriesOn_results on_results, FApiGetCategoriesOn_error on_error);
};

struct FAuthToken
{
    FString Token;

};

struct FAuthTokenResponse
{
    FAuthToken Data;

};

struct FCategoryArrayResponse
{
    TArray<FCategory> Data;

};

struct FEmptyResponse
{
    FString Data;

};

struct FGameResponse
{
    FGame Data;

};

struct FGameVersionByTypeArrayResponse
{
    TArray<FGameVersionsByType> Data;

};

struct FGameVersionTypeArrayResponse
{
    TArray<FGameVersionType> Data;

};

struct FGetAuthTokenRequestDto
{
    FString email;
    int32 otp;

};

struct FGetModsByIdsRequestDto
{
    TArray<int64> modIds;

};

struct FInstalledModArray
{
    TArray<FInstalledMod> installedMods;

};

struct FModArrayResponse
{
    TArray<FCFCoreMod> Data;
    FCFCoreApiResponsePagination pagination;

};

struct FModResponse
{
    FCFCoreMod Data;

};

struct FSendSecurityCodeRequestDto
{
    FString email;

};

struct FStringResponse
{
    FString Data;

};

struct FUpdateVoteRequestDto
{
    ECFCoreThumbsUpDirection Direction;

};

struct FUserContextInfo
{
    FString AuthToken;

};

#endif
