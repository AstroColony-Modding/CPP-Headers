#ifndef UE4SS_SDK_WBP_Notify_HPP
#define UE4SS_SDK_WBP_Notify_HPP

class UWBP_Notify_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SaveFade_NoOut;
    class UWidgetAnimation* SaveFade;
    class UTGConfigurableTextBlock* TextAfter;
    class UTGConfigurableTextBlock* TextBefore;
    class UTGConfigurableTextBlock* TextValue;
    bool IsSmall;
    bool FadesOut;

    void PlayText(FText Before, FText Value, FText After, bool isError, float PlaybackSpeed);
    void Construct();
    void ExecuteUbergraph_WBP_Notify(int32 EntryPoint);
};

#endif
