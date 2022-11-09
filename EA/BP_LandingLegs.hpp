#ifndef UE4SS_SDK_BP_LandingLegs_HPP
#define UE4SS_SDK_BP_LandingLegs_HPP

class ABP_LandingLegs_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* SC_LandingGear_B;
    class UAudioComponent* SC_LandingGear_A;
    class UBP_SceneInteractionChildMesh_C* LandingLeg_Front;
    class UBP_SceneInteractionChildMesh_C* LandingLeg_Right;
    class UBP_SceneInteractionChildMesh_C* LandingLeg_Left;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_Lerp_38008B584F0BC7DE31D789A05106871E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_38008B584F0BC7DE31D789A05106871E;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OpenLegs();
    void CloseLegs();
    void SetOpened();
    void ExecuteUbergraph_BP_LandingLegs(int32 EntryPoint);
};

#endif
