#ifndef UE4SS_SDK_WBP_Spinner_HPP
#define UE4SS_SDK_WBP_Spinner_HPP

class UWBP_Spinner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* InfImage;
    class USpinBox* SpinBox;
    bool HasInfinitySign;
    bool HasFocus;
    FMargin MarginOn;
    FMargin MarginOff;
    FWBP_Spinner_CValueCommited ValueCommited;
    void ValueCommited(float Value);
    FIntPoint MinMaxFracDigits;
    float Delta;
    float Value;
    FVector2D ValueCap;

    void GetValue(float& Value);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetActive(bool IsActive);
    void SetValue(float Value);
    void UpdateValueCap();
    void UpdateInfVisibility();
    void BndEvt__SpinBox_125_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void BndEvt__SpinBox_125_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_Spinner(int32 EntryPoint);
    void ValueCommited__DelegateSignature(float Value);
};

#endif
