#ifndef UE4SS_SDK_WBP_IconBar_HPP
#define UE4SS_SDK_WBP_IconBar_HPP

class UWBP_IconBar_C : public UEHIconBarWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* DiscordButton;
    class UWBP_IcoButton_C* KickstarterButton;
    class UWBP_IcoButton_C* SteamButton;
    class UImage* UserAvatar;
    class UTGConfigurableTextBlock* UserName;

    void BndEvt__ChangeRecipesButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__ChangeRecipesButton_1_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__ChangeRecipesButton_2_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_IconBar(int32 EntryPoint);
};

#endif
