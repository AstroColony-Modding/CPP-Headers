#ifndef UE4SS_SDK_WBP_Slider_HPP
#define UE4SS_SDK_WBP_Slider_HPP

class UWBP_Slider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextChange;
    class UImage* BlackBackground;
    class UHorizontalBox* HorizontalBox_0;
    class USizeBox* InputSizeBox;
    class UImage* MiddleIndicator;
    class UTGConfigurableTextBlock* Name;
    class UTGButton* PrimaryBinding;
    class USlider* Slider;
    class UTGEditableTextBox* Text;
    FWBP_Slider_COnValueChanged OnValueChanged;
    void OnValueChanged(float Value);
    TEnumAsByte<SliderSize::Type> SliderSize;
    FText SliderName;
    float SliderValue;
    FIntPoint MinMax;
    float InputScale;
    bool BarLookEnabled;
    bool HideMiddleIndicator;
    bool HideDetails;

    void SetFocusOnText();
    void UpdateBarMaterial();
    class UWidget* GetToolTipWidget();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ResetValue();
    void HandleValueChanged();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateVisuals();
    void InitSliderLook();
    void InitScale(FIntPoint MinMax, float InputScale);
    void GetValue(float& SliderValue);
    void SetSliderValue(float Value);
    void Construct();
    void BndEvt__PrimaryBinding_K2Node_ComponentBoundEvent_3_OnWidgetClickedEvent__DelegateSignature();
    void BndEvt__SDEditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_Slider(int32 EntryPoint);
    void OnValueChanged__DelegateSignature(float Value);
};

#endif
