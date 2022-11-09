#ifndef UE4SS_SDK_SB_AsteroidCatcherRef_HPP
#define UE4SS_SDK_SB_AsteroidCatcherRef_HPP

class USB_AsteroidCatcherRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* AsteroidCatcher;

    void HandleAsteroidCatcherItemProduced(FEHItemInstance ProducedItem);
    void HandleAsteroidCatcherStateChanged(EAsteroidCatchStateChanged CatchStateChange);
    void UnbindAsteroidCatcher();
    void BindAsteroidCatcher();
    void CheckAsteroidCatcherElectricityEfficiency();
    void CheckElectricLineConnection();
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void OnElectricNetworkChanged();
    void ExecuteUbergraph_SB_AsteroidCatcherRef(int32 EntryPoint);
};

#endif
