#ifndef UE4SS_SDK_WBP_RadiobuttonLine_HPP
#define UE4SS_SDK_WBP_RadiobuttonLine_HPP

class UWBP_RadiobuttonLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalButtonBox;
    class UImage* Image_2158;
    class UWBP_RadioButton_C* WBP_RadioButton;
    class UWBP_RadioButton_C* WBP_RadioButton_1;
    TArray<FString> ButtonNames;
    uint8 ToggleID;
    FWBP_RadiobuttonLine_COnStateChanged OnStateChanged;
    void OnStateChanged(int32 ToggleID);
    FVector2D SlotSize;

    void UpdateButtonNames(TArray<FString>& ButtonNames);
    void Init();
    void RadioStateChanged(uint8 RadioButtonID, bool bIsToggled);
    void SetToggleRadiobutton(uint8 ToggleID);
    void Construct();
    void ExecuteUbergraph_WBP_RadiobuttonLine(int32 EntryPoint);
    void OnStateChanged__DelegateSignature(int32 ToggleID);
};

#endif
