#ifndef UE4SS_SDK_WBP_OptionSlider_HPP
#define UE4SS_SDK_WBP_OptionSlider_HPP

class UWBP_OptionSlider_C : public UEHOptionSliderWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextChange;
    class UImage* Image_0;
    class UTGButton* PrimaryBinding;
    class UMaterialInstanceDynamic* MaterialDynamicBlue;
    class UMaterialInstanceDynamic* MaterialDynamicWhite;

    FText Get_Text_AccessibleText_0();
    void OnContextChanged();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__PrimaryBinding_K2Node_ComponentBoundEvent_3_OnWidgetClickedEvent__DelegateSignature();
    void BndEvt__SDEditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_WBP_OptionSlider(int32 EntryPoint);
};

#endif
