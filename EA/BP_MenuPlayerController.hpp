#ifndef UE4SS_SDK_BP_MenuPlayerController_HPP
#define UE4SS_SDK_BP_MenuPlayerController_HPP

class ABP_MenuPlayerController_C : public AEHGamePlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_SpaceCarryComponent_C* BP_SpaceCarryComponent;
    class UBP_TechTreeComponent_C* BP_TechTreeManager;
    class UBP_GridComponent_C* BP_GridComponent;
    int32 AntiAliasingQualityCached;

    void UpdateMenuVisuals();
    void UpdateMainMenuPresence();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_MenuPlayerController(int32 EntryPoint);
};

#endif
