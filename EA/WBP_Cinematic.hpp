#ifndef UE4SS_SDK_WBP_Cinematic_HPP
#define UE4SS_SDK_WBP_Cinematic_HPP

class UWBP_Cinematic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowPressEnterAnim;
    class UWidgetAnimation* EndSequenceAnim;
    class UWidgetAnimation* ShowNextSequenceAnim;
    class UWidgetAnimation* StartSequenceAnim;
    class UBorder* Border;
    class UTGConfigurableTextBlock* SequenceText;
    TArray<FText> CinematicSentences;
    int32 CurrentSentenceIndex;

    void UpdateSequenceText();
    void ShowNextSentence();
    void EndCinematic();
    void StartSequence();
    void ShowPressEnterToSkip();
    void ExecuteUbergraph_WBP_Cinematic(int32 EntryPoint);
};

#endif
