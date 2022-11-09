#ifndef UE4SS_SDK_BP_PlanetoidMM_HPP
#define UE4SS_SDK_BP_PlanetoidMM_HPP

class ABP_PlanetoidMM_C : public ABP_PlanetoidGrid_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void OnPlanetoidGenerated_Event_0();
    void ExecuteUbergraph_BP_PlanetoidMM(int32 EntryPoint);
};

#endif
