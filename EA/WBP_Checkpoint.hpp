#ifndef UE4SS_SDK_WBP_Checkpoint_HPP
#define UE4SS_SDK_WBP_Checkpoint_HPP

class UWBP_Checkpoint_C : public UUserWidget
{
    class UWidgetAnimation* ShowAnim;
    class UBorder* Border;
    class UImage* Image;
    class UTGConfigurableTextBlock* Name;
    class USizeBox* PauseSizeBox;
    class UBP_SpaceCarryComponent_C* SpaceCarryComponentCached;

    void ShowPrompt();
};

#endif
