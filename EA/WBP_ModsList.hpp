#ifndef UE4SS_SDK_WBP_ModsList_HPP
#define UE4SS_SDK_WBP_ModsList_HPP

class UWBP_ModsList_C : public UEHModsListWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* Author;
    class UTGConfigurableTextBlock* Description;
    class UVerticalBox* ModDetailsVertical;
    class UTGConfigurableTextBlock* Name;
    class UImage* Thumbnail;
    class UTGConfigurableTextBlock* Version;
    class UWBP_ModOption_C* WBP_ModOption;

    void OnContextChanged();
    void OnModsOptionSelected(class UTGViewModel* ViewModel);
    void ExecuteUbergraph_WBP_ModsList(int32 EntryPoint);
};

#endif
