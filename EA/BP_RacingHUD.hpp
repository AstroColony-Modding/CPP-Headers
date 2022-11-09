#ifndef UE4SS_SDK_BP_RacingHUD_HPP
#define UE4SS_SDK_BP_RacingHUD_HPP

class ABP_RacingHUD_C : public AEHHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UWBP_RacingHUDWidget_C* RacingHUDWidget;

    void OnHUDWidgetSpawned(class UTGHUDWidget* SpawnedHUDWidget);
    void ExecuteUbergraph_BP_RacingHUD(int32 EntryPoint);
};

#endif
