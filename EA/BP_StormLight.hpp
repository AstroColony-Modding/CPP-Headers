#ifndef UE4SS_SDK_BP_StormLight_HPP
#define UE4SS_SDK_BP_StormLight_HPP

class ABP_StormLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_Intensity_5DD09C924EE0814C947A289A36A9BEE5;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_5DD09C924EE0814C947A289A36A9BEE5;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ExecuteUbergraph_BP_StormLight(int32 EntryPoint);
};

#endif
