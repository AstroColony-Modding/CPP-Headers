#ifndef UE4SS_SDK_SB_HarpoonConnectorRef_HPP
#define UE4SS_SDK_SB_HarpoonConnectorRef_HPP

class USB_HarpoonConnectorRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnDockingStateChanged();
    void OnAttractedPlanetidChanged();
    void BindHarpoonConnectors();
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ExecuteUbergraph_SB_HarpoonConnectorRef(int32 EntryPoint);
};

#endif
