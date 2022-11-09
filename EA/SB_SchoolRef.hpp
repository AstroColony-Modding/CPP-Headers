#ifndef UE4SS_SDK_SB_SchoolRef_HPP
#define UE4SS_SDK_SB_SchoolRef_HPP

class USB_SchoolRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnTrainedCompleted(EAIProfession Profession);
    void BindSchoolTraining();
    void CheckColumnDestroyed(class AVoxelWorld* World, bool& Destroyed);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void ExecuteUbergraph_SB_SchoolRef(int32 EntryPoint);
};

#endif
