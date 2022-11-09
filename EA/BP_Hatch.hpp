#ifndef UE4SS_SDK_BP_Hatch_HPP
#define UE4SS_SDK_BP_Hatch_HPP

class ABP_Hatch_C : public AEHInteractiveActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_HiCityHatchB;
    class UStaticMeshComponent* SM_HiCityHatchA;
    class USceneComponent* DefaultSceneRoot;
    float HatchAnim_CloseValue_5366A1534633D4C85428FDA67CC75101;
    TEnumAsByte<ETimelineDirection::Type> HatchAnim__Direction_5366A1534633D4C85428FDA67CC75101;
    class UTimelineComponent* HatchAnim;
    FVector DoorClosed;
    FVector DoorOpen;
    FVector DoorOpen_2;

    void HatchAnim__FinishedFunc();
    void HatchAnim__UpdateFunc();
    void OnInteractionStarted();
    void ExecuteUbergraph_BP_Hatch(int32 EntryPoint);
};

#endif
