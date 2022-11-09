#ifndef UE4SS_SDK_WBP_CircleMoving_HPP
#define UE4SS_SDK_WBP_CircleMoving_HPP

class UWBP_CircleMoving_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UImage* Icon;
    FEHItemInstance Item;

    void Construct();
    void AnimFinished();
    void ExecuteUbergraph_WBP_CircleMoving(int32 EntryPoint);
};

#endif
