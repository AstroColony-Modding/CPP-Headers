#ifndef UE4SS_SDK_WBP_NameDivider_HPP
#define UE4SS_SDK_WBP_NameDivider_HPP

class UWBP_NameDivider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* DividerName;
    class UImage* WarningIco;
    FText Name;
    bool ShowDivider;
    bool ShowWarningIco;

    void UpdateName(FText Name);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WBP_NameDivider(int32 EntryPoint);
};

#endif
