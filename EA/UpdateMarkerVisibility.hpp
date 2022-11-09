#ifndef UE4SS_SDK_UpdateMarkerVisibility_HPP
#define UE4SS_SDK_UpdateMarkerVisibility_HPP

class UUpdateMarkerVisibility_C : public UScriptedAction
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName MarkerName;
    bool Visibility;

    void ExecuteAction(class APlayerController* PlayerController, class UMOBaseNode* TriggeredNode, const EMOScriptedTriggerReason TriggerReason, class UMission* Mission);
    void ExecuteUbergraph_UpdateMarkerVisibility(int32 EntryPoint);
};

#endif
