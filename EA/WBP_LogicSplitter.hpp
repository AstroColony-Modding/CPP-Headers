#ifndef UE4SS_SDK_WBP_LogicSplitter_HPP
#define UE4SS_SDK_WBP_LogicSplitter_HPP

class UWBP_LogicSplitter_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* ForwardPercentage;
    class UImage* Image;
    class UImage* Image_0;
    class UImage* Image_1;
    class UWBP_Input_C* InputForward;
    class UWBP_Input_C* InputLeft;
    class UWBP_Input_C* InputRight;
    class UTGConfigurableTextBlock* LeftPercentage;
    class UTGConfigurableTextBlock* RightPercentage;
    class UWBP_Logic_C* WBP_Logic;
    class UEHLogicSplitterObject* SplitterObject;

    void UpdatePercentValues();
    void UpdateRatioValues();
    void OnContextChanged();
    void Construct();
    void TextChanged(FText Text);
    void ExecuteUbergraph_WBP_LogicSplitter(int32 EntryPoint);
};

#endif
