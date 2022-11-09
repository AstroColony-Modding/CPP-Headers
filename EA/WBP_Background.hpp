#ifndef UE4SS_SDK_WBP_Background_HPP
#define UE4SS_SDK_WBP_Background_HPP

class UWBP_Background_C : public UEHBackgroundWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BackgroundFadeIn;
    class UImage* BackgroundTexture;

    void OnMediaOpened();
    void OnHideVideo();
    void OnShowVideo();
    void ExecuteUbergraph_WBP_Background(int32 EntryPoint);
};

#endif
