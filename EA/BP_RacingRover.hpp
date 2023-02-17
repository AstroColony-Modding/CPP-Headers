#ifndef UE4SS_SDK_BP_RacingRover_HPP
#define UE4SS_SDK_BP_RacingRover_HPP

class ABP_RacingRover_C : public ABP_RoverPawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void PossesReact(bool IsPossessed);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue);
    void ExecuteUbergraph_BP_RacingRover(int32 EntryPoint);
};

#endif
