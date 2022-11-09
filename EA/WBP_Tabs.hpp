#ifndef UE4SS_SDK_WBP_Tabs_HPP
#define UE4SS_SDK_WBP_Tabs_HPP

class UWBP_Tabs_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalTabOptions;
    class UWBP_Tab_C* WBP_Tab;
    class UWBP_Tab_C* WBP_Tab_C_2;
    TArray<FText> TabNames;
    FMargin TabPadding;
    FWBP_Tabs_COnTabSelected OnTabSelected;
    void OnTabSelected(int32 Index);

    void CollapseOption(int32 Index);
    void TabClicked(int32 Index);
    void SelectTab(int32 Index);
    void CreateTabs();
    void Construct();
    void ExecuteUbergraph_WBP_Tabs(int32 EntryPoint);
    void OnTabSelected__DelegateSignature(int32 Index);
};

#endif
