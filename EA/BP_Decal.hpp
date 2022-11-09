#ifndef UE4SS_SDK_BP_Decal_HPP
#define UE4SS_SDK_BP_Decal_HPP

class ABP_Decal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDecalComponent* Decal;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_SubImage_99FCA8924C29DE4DB2333CA759AE96CF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_99FCA8924C29DE4DB2333CA759AE96CF;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Decal(int32 EntryPoint);
};

#endif
