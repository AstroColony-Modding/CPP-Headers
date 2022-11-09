#ifndef UE4SS_SDK_WBP_ColorPicker_HPP
#define UE4SS_SDK_WBP_ColorPicker_HPP

class UWBP_ColorPicker_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BlackBackground;
    class UImage* ColorImage;
    class UColorWheel* ColorWheel;
    class USlider* Slider;
    class UMaterialInstanceDynamic* MaterialDynamicBlue;
    class UMaterialInstanceDynamic* MaterialDynamicWhite;
    float SliderValue;
    FWBP_ColorPicker_COnColorChanged OnColorChanged;
    void OnColorChanged(FLinearColor LinearColor);
    FLinearColor ColorHSV;

    void UpdateVisuals();
    void GetLinearColor(FLinearColor& LinearColor);
    void SetLinearColorColor(FLinearColor LinearColor);
    void Construct();
    void BndEvt__WBP_VehicleDetails_ColorWheel_K2Node_ComponentBoundEvent_1_OnValueChangedEvent__DelegateSignature(FLinearColor Value);
    void BndEvt__WBP_ColorPicker_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_WBP_ColorPicker(int32 EntryPoint);
    void OnColorChanged__DelegateSignature(FLinearColor LinearColor);
};

#endif
