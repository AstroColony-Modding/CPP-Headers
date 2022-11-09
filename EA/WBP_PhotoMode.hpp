#ifndef UE4SS_SDK_WBP_PhotoMode_HPP
#define UE4SS_SDK_WBP_PhotoMode_HPP

class UWBP_PhotoMode_C : public UEHPhotoModeWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* StartMissionAnim;
    class UWBP_Slider_C* CameraSpeedSlider;
    class UWBP_TextButton_C* CloseButton;
    class UImage* CornerImage;
    class UTGCheckBox* HideInterfaceCheckbox;
    class UTGCheckBox* HideWeaponCheckbox;
    class UTGConfigurableTextBlock* MissionName;
    class UWBP_IcoButton_C* OpenButton;
    class UOverlay* Overlay_0;
    class UTGCheckBox* PauseCheckbox;
    class UTGConfigurableTextBlock* RecipeNameText;
    class UTGConfigurableTextBlock* RecipeNameText_1;
    class UTGConfigurableTextBlock* RecipeNameText_2;
    class UTGConfigurableTextBlock* RecipeNameText_3;
    class UWBP_RadiobuttonLine_C* ResolutionSelection;
    class UWBP_TextButton_C* ScreenshotButton;
    class UWBP_TextButton_C* VideoModeButton;
    class UTGCheckBox* VirtualCameraCheckbox;
    class UWBP_Notify_C* WBP_Notify;

    void UpdateSliderSpeed();
    void UpdateActive(bool IsActive);
    void InterfaceHiddenChanged();
    void BndEvt__WBP_PhotoMode_WBP_TextButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_PhotoMode_PauseCheckbox_K2Node_ComponentBoundEvent_2_OnToggleStateChanged__DelegateSignature(bool bIsToggled);
    void BndEvt__WBP_PhotoMode_HideButton_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_PhotoMode_VirtualCameraCheckbox_K2Node_ComponentBoundEvent_1_OnToggleStateChanged__DelegateSignature(bool bIsToggled);
    void BndEvt__WBP_PhotoMode_HideWeaponCheckbox_K2Node_ComponentBoundEvent_3_OnToggleStateChanged__DelegateSignature(bool bIsToggled);
    void BndEvt__WBP_PhotoMode_HideInterfaceCheckbox_K2Node_ComponentBoundEvent_5_OnToggleStateChanged__DelegateSignature(bool bIsToggled);
    void BndEvt__WBP_PhotoMode_ScreenshotButton_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_PhotoMode_WBP_RadiobuttonLine_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature(int32 ToggleID);
    void ScreenshotCaptured(FString ScreenshotName);
    void BndEvt__WBP_PhotoMode_OpenButton_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_PhotoMode_WBP_Slider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float Value);
    void OnPauseStateChanged(bool IsPaused);
    void ExecuteUbergraph_WBP_PhotoMode(int32 EntryPoint);
};

#endif
