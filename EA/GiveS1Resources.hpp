#ifndef UE4SS_SDK_GiveS1Resources_HPP
#define UE4SS_SDK_GiveS1Resources_HPP

class UGiveS1Resources_C : public UScriptedAction
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FEHItemInstance> ItemsToGive;

    void ExecuteAction(class APlayerController* PlayerController, class UMOBaseNode* TriggeredNode, const EMOScriptedTriggerReason TriggerReason, class UMission* Mission);
    void ExecuteUbergraph_GiveS1Resources(int32 EntryPoint);
};

#endif
