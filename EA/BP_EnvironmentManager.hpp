#ifndef UE4SS_SDK_BP_EnvironmentManager_HPP
#define UE4SS_SDK_BP_EnvironmentManager_HPP

class ABP_EnvironmentManager_C : public AEHEnvironmentManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class USceneComponent* DefaultSceneRoot;
    class ADirectionalLight* LightSource;
    class ASkyLight* SkyLight;
    class UParticleSystemComponent* MovingDustRef;
    class APostProcessVolume* PostProcessVolume;
    float Wetness;
    float WaterDrops;
    class UParticleSystemComponent* RainRef;
    bool IsDustActive;
    bool IsRainActive;
    bool IsDayActive;
    TArray<TSoftObjectPtr<UVolumeTexture>> DistanceTexturesMedium;
    TArray<TSoftObjectPtr<UVolumeTexture>> DistanceTexturesUltra;
    class USoundBase* SB;

    void PlayGameplayMusic();
    void AdjustVolume(bool ToLowVolume);
    void PreloadNebulas();
    void UpdateLightIntensity();
    void ScannerActivated(bool ScannerActive);
    void UpdateRain(bool IsRainActive);
    void UpdateDust(bool IsDustActive, FLinearColor DustColor);
    void UpdateNightActive(bool Active);
    void NormalDistribution(float X, float my, float sigma2, float& Value);
    void InpActEvt_Insert_K2Node_InputKeyEvent_0(FKey Key);
    void OnPlayerEnteredGrid(class AEHGrid* Grid);
    void OnPlayerLeftGrid(class AEHGrid* Grid);
    void HandleSettingsApplied();
    void ToggleRain();
    void ReceiveBeginPlay();
    void ToggleDust();
    void ToggleDayNight();
    void ExecuteUbergraph_BP_EnvironmentManager(int32 EntryPoint);
};

#endif
