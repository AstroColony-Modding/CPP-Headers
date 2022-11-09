#ifndef UE4SS_SDK_WBP_OptionDropdown_HPP
#define UE4SS_SDK_WBP_OptionDropdown_HPP

class UWBP_OptionDropdown_C : public UEHOptionDropdownWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* DropdownIdleArrow;

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    class UWidget* On_ComboBox_GenerateWidget(FString Item);
    void OnContextChanged();
    void Focused();
    void ExecuteUbergraph_WBP_OptionDropdown(int32 EntryPoint);
};

#endif
