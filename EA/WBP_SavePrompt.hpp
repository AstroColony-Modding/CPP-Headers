#ifndef UE4SS_SDK_WBP_SavePrompt_HPP
#define UE4SS_SDK_WBP_SavePrompt_HPP

class UWBP_SavePrompt_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowAnim;
    class UBorder* Border;
    class UImage* Image;
    class UTGConfigurableTextBlock* Name;
    class USizeBox* PauseSizeBox;

    void ShowAnimEnd();
    void ShowPrompt();
    void Construct();
    void OnGameSaved(bool IsAutosave);
    void ExecuteUbergraph_WBP_SavePrompt(int32 EntryPoint);
};

#endif
