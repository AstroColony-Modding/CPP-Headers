#ifndef UE4SS_SDK_WBP_HostPlayerLeft_HPP
#define UE4SS_SDK_WBP_HostPlayerLeft_HPP

class UWBP_HostPlayerLeft_C : public UEHMapWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Backing;
    class UWBP_TextButton_C* BackToMainMenu;
    class UWBP_CloseBox_C* CloseBox;
    class UImage* DialogIcon;
    class UImage* Image_196;
    class UTGConfigurableTextBlock* NicknameText;
    class UTGConfigurableTextBlock* PlayerLeftText_1;
    FString PlayerName;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__WBP_HostPlayerLeft_WBP_TextButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_HostPlayerLeft_CloseBox_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    void Construct();
    void BackToMenu();
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_WBP_HostPlayerLeft(int32 EntryPoint);
};

#endif
