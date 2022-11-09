#ifndef UE4SS_SDK_BP_SpaceSky_HPP
#define UE4SS_SDK_BP_SpaceSky_HPP

class ABP_SpaceSky_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* PlanetRing;
    class UStaticMeshComponent* Start2;
    class UStaticMeshComponent* Star;
    class UStaticMeshComponent* Down;
    class UStaticMeshComponent* Up;
    class UStaticMeshComponent* Front;
    class UStaticMeshComponent* Back;
    class UStaticMeshComponent* Right;
    class UStaticMeshComponent* Left;
    class USceneComponent* Scene;
    TArray<TSoftObjectPtr<UTexture2D>> DarkTextures;
    TArray<TSoftObjectPtr<UTexture2D>> AngitorTextures;
    TArray<TSoftObjectPtr<UTexture2D>> EchvoraTextures;
    TArray<TSoftObjectPtr<UTexture2D>> LerendoTextures;
    TArray<TSoftObjectPtr<UTexture2D>> MortinoTextures;
    TArray<TSoftObjectPtr<UTexture2D>> NysechTextures;
    TArray<TSoftObjectPtr<UTexture2D>> RyrakTextures;
    TArray<TSoftObjectPtr<UTexture2D>> ArotheTextures;
    TArray<TSoftObjectPtr<UTexture2D>> KaldarTextures;
    TArray<class UMaterialInstanceDynamic*> SpaceSkyGameMaterial;
    bool IsGreenBackground;
    int32 TexturesIndex;
    bool UseMaterialOverrides;
    FLinearColor ColorOverride;
    float DesaturationOverride;
    FLinearColor StarsColorOverride;
    TSoftClassPtr<UObject> MenuPC;

    void LoadMenuTexturesBlocking();
    void UpdateMaterialParams(int32 Index, class UTexture* Value);
    void UpdateSaturation(bool MapActive);
    void RefreshMaterials();
    void CreateSide(class UTexture* Texture2D);
    void InitMaterials();
    void UserConstructionScript();
    void OnLoaded_E80C3235460FE5B9370349AD980D2704(class UObject* Loaded);
    void OnLoaded_E80C3235460FE5B9370349AD87B9B763(class UObject* Loaded);
    void OnLoaded_E80C3235460FE5B9370349ADED9212DD(class UObject* Loaded);
    void OnLoaded_E80C3235460FE5B9370349AD88B71D73(class UObject* Loaded);
    void OnLoaded_E80C3235460FE5B9370349AD94B37AF6(class UObject* Loaded);
    void OnLoaded_E80C3235460FE5B9370349ADA1179B25(class UObject* Loaded);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnUniverseChanged(uint8 PreviousIndex, uint8 NewIndex);
    void ExecuteUbergraph_BP_SpaceSky(int32 EntryPoint);
};

#endif
