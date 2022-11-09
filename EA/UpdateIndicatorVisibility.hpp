#ifndef UE4SS_SDK_UpdateIndicatorVisibility_HPP
#define UE4SS_SDK_UpdateIndicatorVisibility_HPP

class UUpdateIndicatorVisibility_C : public UScriptedAction
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Visibility;
    TSubclassOf<class AActor> ActorClass;

    void ExecuteAction(class APlayerController* PlayerController, class UMOBaseNode* TriggeredNode, const EMOScriptedTriggerReason TriggerReason, class UMission* Mission);
    void ExecuteUbergraph_UpdateIndicatorVisibility(int32 EntryPoint);
};

#endif
