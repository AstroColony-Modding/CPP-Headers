#ifndef UE4SS_SDK_GiveBasicSciencePoints_HPP
#define UE4SS_SDK_GiveBasicSciencePoints_HPP

class UGiveBasicSciencePoints_C : public UScriptedAction
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 Quantity;

    void ExecuteAction(class APlayerController* PlayerController, class UMOBaseNode* TriggeredNode, const EMOScriptedTriggerReason TriggerReason, class UMission* Mission);
    void ExecuteUbergraph_GiveBasicSciencePoints(int32 EntryPoint);
};

#endif
