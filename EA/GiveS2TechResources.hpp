#ifndef UE4SS_SDK_GiveS2TechResources_HPP
#define UE4SS_SDK_GiveS2TechResources_HPP

class UGiveS2TechResources_C : public UScriptedAction
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FEHItemInstance> ItemsToGive;
    TArray<class UTechnologyAsset*> TechnologiesToUnlock;

    void ExecuteAction(class APlayerController* PlayerController, class UMOBaseNode* TriggeredNode, const EMOScriptedTriggerReason TriggerReason, class UMission* Mission);
    void ExecuteUbergraph_GiveS2TechResources(int32 EntryPoint);
};

#endif
