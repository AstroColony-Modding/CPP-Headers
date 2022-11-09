#ifndef UE4SS_SDK_WBP_HumanNeedMini_HPP
#define UE4SS_SDK_WBP_HumanNeedMini_HPP

class UWBP_HumanNeedMini_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* AIRequiredBorder;
    class UImage* Icon;
    class UImage* NeedBar;
    class UEHAIObject* AIObject;
    int32 ID;
    FEHHumanNeedData Need;

    void UpdateColor(float Value);
    void Construct();
    void ExecuteUbergraph_WBP_HumanNeedMini(int32 EntryPoint);
};

#endif
