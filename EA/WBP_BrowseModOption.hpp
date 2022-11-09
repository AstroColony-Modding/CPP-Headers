#ifndef UE4SS_SDK_WBP_BrowseModOption_HPP
#define UE4SS_SDK_WBP_BrowseModOption_HPP

class UWBP_BrowseModOption_C : public UEHModsBrowsedOptionWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimateIn;
    class UWidgetAnimation* Flickering;
    class UWidgetAnimation* GlowAnimation;
    class UWidgetAnimation* SelectAnimation;
    class UTGConfigurableTextBlock* AuthorsText;
    class UImage* Background;
    class UImage* BlackBackground;
    class UHorizontalBox* CategoriesHorizontal;
    class UTGConfigurableTextBlock* DescriptionText;
    class UImage* Ico;
    class UTGConfigurableTextBlock* InfoText;
    class UTGConfigurableTextBlock* ModTitle;
    class UProgressBar* ProgressBar;
    float ScrollPositionCached;
    bool bIsScrolling;
    float LastScrollPositionChange;
    float ScrolThreshold;

    void GetAuthorsString(FString& Result);
    FText Get_InteractiveArea_AccessibleText_2();
    void SetSelected(bool bIsSelected);
    void OnFail_9AA8791442B03B6ECD3F909FD04B8D21(class UTexture2DDynamic* Texture);
    void OnSuccess_9AA8791442B03B6ECD3F909FD04B8D21(class UTexture2DDynamic* Texture);
    void OnFail_A20F260B4EEC459017D235B938DCAEDC(class UTexture2DDynamic* Texture);
    void OnSuccess_A20F260B4EEC459017D235B938DCAEDC(class UTexture2DDynamic* Texture);
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_7_OnWidgetClickedEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_0_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_1_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_2_OnWidgetFocusReceivedEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_3_OnWidgetFocusLostEvent__DelegateSignature();
    void UpdateSelection(const bool IsSelected);
    void OnContextChanged();
    void OnInstalProgressChanged(int32 progress);
    void OnInstalCompleted(bool Success, FString Name);
    void ExecuteUbergraph_WBP_BrowseModOption(int32 EntryPoint);
};

#endif
