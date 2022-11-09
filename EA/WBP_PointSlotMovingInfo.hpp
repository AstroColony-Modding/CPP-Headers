#ifndef UE4SS_SDK_WBP_PointSlotMovingInfo_HPP
#define UE4SS_SDK_WBP_PointSlotMovingInfo_HPP

class UWBP_PointSlotMovingInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UTGConfigurableTextBlock* Count;
    class UImage* Icon;
    class UTGConfigurableTextBlock* Name;
    class UTGConfigurableTextBlock* Xtext;
    FEHGlobalPointInstance Point;

    void Construct();
    void AnimFinished();
    void ExecuteUbergraph_WBP_PointSlotMovingInfo(int32 EntryPoint);
};

#endif
