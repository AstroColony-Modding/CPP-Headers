#ifndef UE4SS_SDK_W3D_BotTutorial_HPP
#define UE4SS_SDK_W3D_BotTutorial_HPP

class UW3D_BotTutorial_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Blinking;
    class UImage* MouseImage;
    class UHorizontalBox* NextLine;
    class URichTextBlock* RichTextBlockHidden;
    class USizeBox* SizeBoxRich;
    class UTypewriterRichTextBlock* TypewriterRichTextBlock;
    class UButton* WindowButton;
    float TypewriterSpeed;
    FTimerHandle TypewriterHandle;
    bool NextAvailable;
    FW3D_BotTutorial_COnTypewritingEnd OnTypewritingEnd;
    void OnTypewritingEnd();
    FW3D_BotTutorial_COnDesiredSizeChanged OnDesiredSizeChanged;
    void OnDesiredSizeChanged(FVector2D DesiredSize);
    class UPrimitiveComponent* BotMeshPrimitive;

    void HasInfoToShow(bool& HasInfo);
    void CanContinue(bool& CanContinue);
    void ChangeTypewriterPauseState(bool Paused);
    void FinalizeTypewriter();
    bool IsTypewriterActive();
    void PrepareTypewriter();
    void UpdateRichTextBlock(FText& RichText, bool ShowNext);
    void UpdateTypewriterText();
    void Construct();
    void ActivateTypewriter();
    void Click();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__W3D_BotTutorial_WindowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W3D_BotTutorial(int32 EntryPoint);
    void OnDesiredSizeChanged__DelegateSignature(FVector2D DesiredSize);
    void OnTypewritingEnd__DelegateSignature();
};

#endif
