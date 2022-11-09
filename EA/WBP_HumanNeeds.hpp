#ifndef UE4SS_SDK_WBP_HumanNeeds_HPP
#define UE4SS_SDK_WBP_HumanNeeds_HPP

class UWBP_HumanNeeds_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* HumanNeedsVerticalBox;
    class UWBP_HumanNeed_C* WBP_HumanNeed;
    class UWBP_HumanNeed_C* WBP_HumanNeed_C_0;
    class UEHInteractableObject* InteractableObject;

    void Init(class UEHInteractableObject* InteractableObject);
    void Construct();
    void ExecuteUbergraph_WBP_HumanNeeds(int32 EntryPoint);
};

#endif
