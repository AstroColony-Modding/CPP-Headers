#ifndef UE4SS_SDK_WBP_ServerOption_HPP
#define UE4SS_SDK_WBP_ServerOption_HPP

class UWBP_ServerOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimateIn;
    class UWidgetAnimation* Flickering;
    class UWidgetAnimation* GlowAnimation;
    class UWidgetAnimation* SelectAnimation;
    class UImage* Background;
    class UImage* BlackBackground;
    class UImage* FlickerImage;
    class UImage* Image;
    class UImage* Image_135;
    class UTGWidget* InteractiveArea;
    class UTGConfigurableTextBlock* MaxPlayers;
    class UTGConfigurableTextBlock* ServerName;
    class UWBP_TextButton_C* WBP_TextButton;
    FBlueprintSessionResult ServerResult;
    bool bIsSelected;
    float ScrollPositionCached;
    bool bIsScrolling;
    float LastScrollPositionChange;
    float ScrolThreshold;

    FText Get_InteractiveArea_AccessibleText_2();
    void SetSelected(bool bIsSelected);
    void OnFailure_71CB691847EA9020741DD6846A3D3713();
    void OnSuccess_71CB691847EA9020741DD6846A3D3713();
    void OnFailure_1995C94841206B6068FE9889D7066837();
    void OnSuccess_1995C94841206B6068FE9889D7066837();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_7_OnWidgetClickedEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_0_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_1_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_2_OnWidgetFocusReceivedEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_3_OnWidgetFocusLostEvent__DelegateSignature();
    void BndEvt__WBP_ServerOption_WBP_TextButton_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_ServerOption(int32 EntryPoint);
};

#endif
