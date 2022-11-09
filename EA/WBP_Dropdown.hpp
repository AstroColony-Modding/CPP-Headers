#ifndef UE4SS_SDK_WBP_Dropdown_HPP
#define UE4SS_SDK_WBP_Dropdown_HPP

class UWBP_Dropdown_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGComboBoxString* ComboBox;
    class UImage* DropdownIdleArrow;
    FWBP_Dropdown_CSelectionChanged SelectionChanged;
    void SelectionChanged(FString ItemName, int32 ItemIndex);
    FVector2D Size;
    bool IsBigFont;
    TArray<FString> DefaultOptions;

    void UpdateTextOptions(const TArray<FText>& Options);
    void UpdateSelectedIndex(const int32 Index);
    void UpdateOptions(const TArray<FString>& Options);
    class UWidget* OnComboBoxGenerate(FString Item);
    void BndEvt__WBP_Dropdown_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void Construct();
    void ExecuteUbergraph_WBP_Dropdown(int32 EntryPoint);
    void SelectionChanged__DelegateSignature(FString ItemName, int32 ItemIndex);
};

#endif
