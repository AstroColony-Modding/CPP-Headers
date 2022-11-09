#ifndef UE4SS_SDK_SB_WelcomeRef_HPP
#define UE4SS_SDK_SB_WelcomeRef_HPP

class USB_WelcomeRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* IronBar;
    class UEHItem* CopperBar;
    class UEHItem* IronResource;
    class UEHItem* CopperResource;

    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemProduced(FEHItemInstance ProducedItem);
    void OnResourceItemPicked(FEHItemInstance PickedItem);
    void LocalMissionStarted();
    void OnMenuOpenStateChanged(bool IsOpened);
    void ExecuteUbergraph_SB_WelcomeRef(int32 EntryPoint);
};

#endif
