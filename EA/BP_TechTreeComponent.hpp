#ifndef UE4SS_SDK_BP_TechTreeComponent_HPP
#define UE4SS_SDK_BP_TechTreeComponent_HPP

class UBP_TechTreeComponent_C : public UEHTechTreeComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void TechnologyPressed(class UEHTechnologyAsset* Technology);
    void TechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void ReceiveBeginPlay();
    void TechnologyUnlockFeedback(class UEHAsset* Item, bool UnlockSuccess);
    void ExecuteUbergraph_BP_TechTreeComponent(int32 EntryPoint);
};

#endif
