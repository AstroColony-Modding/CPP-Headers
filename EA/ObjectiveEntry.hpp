#ifndef UE4SS_SDK_ObjectiveEntry_HPP
#define UE4SS_SDK_ObjectiveEntry_HPP

class UObjectiveEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UTGConfigurableTextBlock* ObjectiveTitle;
    class UImage* State;
    class UMOObjectiveNode* Node;

    void Construct();
    void ExecuteUbergraph_ObjectiveEntry(int32 EntryPoint);
};

#endif
