#ifndef UE4SS_SDK_WBP_ModPackageHeader_HPP
#define UE4SS_SDK_WBP_ModPackageHeader_HPP

class UWBP_ModPackageHeader_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* GlowAnimation;
    class UWidgetAnimation* SelectAnimation;
    class UImage* Background;
    class UImage* BlackBackground;
    class UImage* FlickerImage;
    class UImage* Image;
    class UTGWidget* InteractiveArea;
    class UTGConfigurableTextBlock* OptionName;
    FString Name;
    bool bIsSelected;

    void SetSelected(bool bIsSelected);
    void BndEvt__WBP_ModPackageHeader_InteractiveArea_K2Node_ComponentBoundEvent_0_OnWidgetClickedEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_0_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_1_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_2_OnWidgetFocusReceivedEvent__DelegateSignature();
    void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_3_OnWidgetFocusLostEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_ModPackageHeader(int32 EntryPoint);
};

#endif
