#ifndef UE4SS_SDK_BP_CinematicDoor_HPP
#define UE4SS_SDK_BP_CinematicDoor_HPP

class ABP_CinematicDoor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_DoorLower;
    class UStaticMeshComponent* SM_DoorUpper;
    class USceneComponent* SharedRoot;
    float OpeningDoor_NewTrack_0_1A7BB08D4EA623E90B40BE980F93C831;
    TEnumAsByte<ETimelineDirection::Type> OpeningDoor__Direction_1A7BB08D4EA623E90B40BE980F93C831;
    class UTimelineComponent* OpeningDoor;

    void OpeningDoor__FinishedFunc();
    void OpeningDoor__UpdateFunc();
    void OpenDoor();
    void ExecuteUbergraph_BP_CinematicDoor(int32 EntryPoint);
};

#endif
