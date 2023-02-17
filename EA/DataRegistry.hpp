#ifndef UE4SS_SDK_DataRegistry_HPP
#define UE4SS_SDK_DataRegistry_HPP

#include "DataRegistry_enums.hpp"

struct FDataRegistryCachePolicy
{
    bool bCacheIsAlwaysVolatile;
    bool bUseCurveTableCacheVersion;
    int32 MinNumberKept;
    int32 MaxNumberKept;
    float ForceKeepSeconds;
    float ForceReleaseSeconds;

};

struct FDataRegistryId
{
    FDataRegistryType RegistryType;
    FName ItemName;

};

struct FDataRegistryIdFormat
{
    FGameplayTag BaseGameplayTag;

};

struct FDataRegistryLookup
{
};

struct FDataRegistrySourceItemId
{
};

struct FDataRegistrySource_DataTableRules
{
    bool bPrecacheTable;
    float CachedTableKeepSeconds;

};

struct FDataRegistryType
{
    FName Name;

};

class UDataRegistry : public UObject
{
    FName RegistryType;
    FDataRegistryIdFormat IdFormat;
    class UScriptStruct* ItemStruct;
    TArray<class UDataRegistrySource*> DataSources;
    TArray<class UDataRegistrySource*> RuntimeSources;
    float TimerUpdateFrequency;
    FDataRegistryCachePolicy DefaultCachePolicy;

};

class UDataRegistrySettings : public UDeveloperSettings
{
    TArray<FDirectoryPath> DirectoriesToScan;
    bool bInitializeAllLoadedRegistries;
    bool bIgnoreMissingCookedAssetRegistryData;

};

class UDataRegistrySource : public UObject
{
    class UDataRegistrySource* ParentSource;

};

class UDataRegistrySource_CurveTable : public UDataRegistrySource
{
    TSoftObjectPtr<UCurveTable> SourceTable;
    FDataRegistrySource_DataTableRules TableRules;
    class UCurveTable* CachedTable;
    class UCurveTable* PreloadTable;

};

class UDataRegistrySource_DataTable : public UDataRegistrySource
{
    TSoftObjectPtr<UDataTable> SourceTable;
    FDataRegistrySource_DataTableRules TableRules;
    class UDataTable* CachedTable;
    class UDataTable* PreloadTable;

};

class UDataRegistrySubsystem : public UEngineSubsystem
{

    bool NotEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B);
    bool NotEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B);
    bool IsValidDataRegistryType(FDataRegistryType DataRegistryType);
    bool IsValidDataRegistryId(FDataRegistryId DataRegistryId);
    bool GetCachedItemFromLookupBP(FDataRegistryId ItemId, const FDataRegistryLookup& ResolvedLookup, FTableRowBase& OutItem);
    bool GetCachedItemBP(FDataRegistryId ItemId, FTableRowBase& OutItem);
    void FindCachedItemBP(FDataRegistryId ItemId, EDataRegistrySubsystemGetItemResult& OutResult, FTableRowBase& OutItem);
    void EvaluateDataRegistryCurve(FDataRegistryId ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult& OutResult, float& OutValue);
    bool EqualEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B);
    bool EqualEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B);
    FString Conv_DataRegistryTypeToString(FDataRegistryType DataRegistryType);
    FString Conv_DataRegistryIdToString(FDataRegistryId DataRegistryId);
    bool AcquireItemBP(FDataRegistryId ItemId, FAcquireItemBPAcquireCallback AcquireCallback);
};

class UMetaDataRegistrySource : public UDataRegistrySource
{
    EMetaDataRegistrySourceAssetUsage AssetUsage;
    FAssetManagerSearchRules SearchRules;
    TMap<class FName, class UDataRegistrySource*> RuntimeChildren;

};

class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource
{
    TSubclassOf<class UDataRegistrySource_CurveTable> CreatedSource;
    FDataRegistrySource_DataTableRules TableRules;

};

class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource
{
    TSubclassOf<class UDataRegistrySource_DataTable> CreatedSource;
    FDataRegistrySource_DataTableRules TableRules;

};

#endif
