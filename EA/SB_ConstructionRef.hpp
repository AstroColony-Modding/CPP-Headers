#ifndef UE4SS_SDK_SB_ConstructionRef_HPP
#define UE4SS_SDK_SB_ConstructionRef_HPP

class USB_ConstructionRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;

    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ExecuteUbergraph_SB_ConstructionRef(int32 EntryPoint);
};

#endif
