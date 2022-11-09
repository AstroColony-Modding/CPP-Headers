#ifndef UE4SS_SDK_WBP_GameLogo_HPP
#define UE4SS_SDK_WBP_GameLogo_HPP

class UWBP_GameLogo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* RocketAnimation;
    class UWidgetAnimation* Enter;
    class UWidgetAnimation* Sheen;
    class UImage* AstroLogo;
    class UImage* RocketFlipbook;

    void Construct();
    void AnimationEnd();
    void ExecuteUbergraph_WBP_GameLogo(int32 EntryPoint);
};

#endif
