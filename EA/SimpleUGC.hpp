#ifndef UE4SS_SDK_SimpleUGC_HPP
#define UE4SS_SDK_SimpleUGC_HPP

struct FModTab
{
    FString TabName;
    TSubclassOf<class UUserWidget> TabWidget;

};

struct FUGCPackage
{
    FString PackagePath;
    FString Version;
    FString Author;
    FString Description;

};

class IGCInterface : public IInterface
{
};

class UACModConfig : public UObject
{
    TArray<class UObject*> GameObjectsToOverride;
    bool GenerateTabForMaps;
    TArray<FModTab> TabWidgets;
    TArray<class UTexture2D*> ModIcon;

};

class UMakeReplaceableActorComponent : public UActorComponent
{
    TSubclassOf<class AActor> CompatibleReplacement;

};

class UReplacementActorComponent : public UActorComponent
{
    TArray<class TSubclassOf<AActor>> ActorClassesToReplace;

};

class UUGCBaseGameInstance : public UGameInstance
{
    class UUGCRegistry* UGCRegistry;

};

class UUGCBlueprintLibrary : public UBlueprintFunctionLibrary
{

    class UUGCRegistry* GetUGCRegistry(class UObject* WorldContextObject);
};

class UUGCRegistry : public UObject
{
    TArray<FUGCPackage> UGCPackages;
    TMap<class TSubclassOf<AActor>, class TSubclassOf<AActor>> RegisteredOverrides;
    TArray<class UObject*> LoadedAssets;

    void RegisterOverrideForClass(TSubclassOf<class AActor> ClassToOverride, TSubclassOf<class AActor> OverrideClass);
    TSubclassOf<class AActor> GetOverrideForActorClass(TSubclassOf<class AActor> ActorClass);
    bool GetMapsInPackage(const FUGCPackage& Package, TArray<FName>& Maps);
    bool GetAllClassesInPackage(const FUGCPackage& Package, TArray<class UClass*>& Classes);
    bool GetActorClassesWithReplacementActorComponentsInPackage(const FUGCPackage& Package, TArray<class TSubclassOf<AActor>>& ActorClasses);
    bool FindUGCPackages();
    void ClearOverrideForClass(TSubclassOf<class AActor> ActorClass);
    bool ApplyOverridesForActorClass(TSubclassOf<class AActor> ActorClass);
    bool ApplyAllOverridesInPackage(FUGCPackage Package);
};

#endif
